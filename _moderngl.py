# mypy: ignore-errors

import struct
from typing import Any, Dict, List, Tuple


class Attribute:
    def __init__(self):
        self.gl_type = None
        self.program_obj = None
        self.scalar_type = None
        self.rows_length = None
        self.row_length = None
        self.normalizable = None
        self.location = None
        self.array_length = None
        self.dimension = None
        self.shape = None
        self.name = None
        self.extra = None

    def __repr__(self):
        return f'<Attribute: {self.location}>'

    @property
    def mglo(self):
        return self


class Uniform:
    def __init__(self):
        self.program_obj = None
        self.gl_type = None
        self.fmt = None
        self.location = None
        self.array_length = None
        self.element_size = None
        self.dimension = None
        self.name = None
        self.matrix = None
        self.ctx = None
        self.extra = None

    def __repr__(self):
        return f'<Uniform: {self.location}>'

    @property
    def mglo(self):
        return self

    @property
    def value(self):
        data = self.read()
        if self.array_length > 1:
            if self.dimension > 1:
                return [
                    struct.unpack(self.fmt, data[i * self.element_size : i * self.element_size + self.element_size])
                    for i in range(self.array_length)
                ]
            else:
                return [
                    struct.unpack(self.fmt, data[i * self.element_size : i * self.element_size + self.element_size])[0]
                    for i in range(self.array_length)
                ]
        elif self.dimension > 1:
            return struct.unpack(self.fmt, data)
        else:
            return struct.unpack(self.fmt, data)[0]

    @value.setter
    def value(self, value):
        if self.array_length > 1:
            if self.dimension > 1:
                data = b''.join(struct.pack(self.fmt, *row) for row in value)
            else:
                data = b''.join(struct.pack(self.fmt, item) for item in value)
        elif self.dimension > 1:
            data = struct.pack(self.fmt, *value)
        else:
            data = struct.pack(self.fmt, value)
        self.write(data)

    @property
    def handle(self):
        raise NotImplementedError

    @handle.setter
    def handle(self, value):
        return self.ctx._set_uniform_handle(self.program_obj, self.location, value)

    def read(self):
        return self.ctx._read_uniform(self.program_obj, self.location, self.gl_type, self.array_length, self.element_size)

    def write(self, data: Any):
        self.ctx._write_uniform(self.program_obj, self.location, self.gl_type, self.array_length, data)


class UniformBlock:
    def __init__(self):
        self.program_obj = None
        self.index = None
        self.size = None
        self.name = None
        self.ctx = None
        self.extra = None

    def __repr__(self):
        return f'<UniformBlock: {self.index}>'

    @property
    def mglo(self):
        return self

    @property
    def binding(self):
        return self.ctx._get_ubo_binding(self.program_obj, self.index)

    @binding.setter
    def binding(self, binding):
        self.ctx._set_ubo_binding(self.program_obj, self.index, binding)

    @property
    def value(self):
        return self.ctx._get_ubo_binding(self.program_obj, self.index)

    @value.setter
    def value(self, value):
        self.ctx._set_ubo_binding(self.program_obj, self.index, value)


class StorageBlock:
    def __init__(self):
        self.program_obj = None
        self.index = None
        self.name = None
        self.ctx = None
        self.extra = None

    def __repr__(self):
        return f'<StorageBlock: {self.index}>'

    @property
    def mglo(self):
        return self

    @property
    def binding(self):
        return self.ctx._get_storage_block_binding(self.program_obj, self.index)

    @binding.setter
    def binding(self, binding):
        self.ctx._set_storage_block_binding(self.program_obj, self.index, binding)

    @property
    def value(self):
        return self.ctx._get_storage_block_binding(self.program_obj, self.index)

    @value.setter
    def value(self, value):
        self.ctx._set_storage_block_binding(self.program_obj, self.index, value)


class Subroutine:
    def __init__(self):
        self.index = None
        self.name = None
        self.extra = None

    def __repr__(self):
        return f'<Subroutine: {self.index}>'

    @property
    def mglo(self):
        return self


class Varying:
    def __init__(self):
        self.number = None
        self.array_length = None
        self.dimension = None
        self.name = None
        self.extra = None

    def __repr__(self):
        return f'<Varying: {self.number}>'

    @property
    def mglo(self):
        return self


class Error(Exception):
    pass


ATTRIBUTE_LOOKUP_TABLE = {
    0x1404: (1, 0x1404, 1, 1, False, 'i'),
    0x8b53: (2, 0x1404, 1, 2, False, 'i'),
    0x8b54: (3, 0x1404, 1, 3, False, 'i'),
    0x8b55: (4, 0x1404, 1, 4, False, 'i'),
    0x1405: (1, 0x1405, 1, 1, False, 'i'),
    0x8dc6: (2, 0x1405, 1, 2, False, 'i'),
    0x8dc7: (3, 0x1405, 1, 3, False, 'i'),
    0x8dc8: (4, 0x1405, 1, 4, False, 'i'),
    0x1406: (1, 0x1406, 1, 1, True, 'f'),
    0x8b50: (2, 0x1406, 1, 2, True, 'f'),
    0x8b51: (3, 0x1406, 1, 3, True, 'f'),
    0x8b52: (4, 0x1406, 1, 4, True, 'f'),
    0x140a: (1, 0x140a, 1, 1, False, 'd'),
    0x8ffc: (2, 0x140a, 1, 2, False, 'd'),
    0x8ffd: (3, 0x140a, 1, 3, False, 'd'),
    0x8ffe: (4, 0x140a, 1, 4, False, 'd'),
    0x8b5a: (4, 0x1406, 2, 2, True, 'f'),
    0x8b65: (6, 0x1406, 2, 3, True, 'f'),
    0x8b66: (8, 0x1406, 2, 4, True, 'f'),
    0x8b67: (6, 0x1406, 3, 2, True, 'f'),
    0x8b5b: (9, 0x1406, 3, 3, True, 'f'),
    0x8b68: (12, 0x1406, 3, 4, True, 'f'),
    0x8b69: (8, 0x1406, 4, 2, True, 'f'),
    0x8b6a: (12, 0x1406, 4, 3, True, 'f'),
    0x8b5c: (16, 0x1406, 4, 4, True, 'f'),
    0x8f46: (4, 0x140a, 2, 2, False, 'd'),
    0x8f49: (6, 0x140a, 2, 3, False, 'd'),
    0x8f4a: (8, 0x140a, 2, 4, False, 'd'),
    0x8f4b: (6, 0x140a, 3, 2, False, 'd'),
    0x8f47: (9, 0x140a, 3, 3, False, 'd'),
    0x8f4c: (12, 0x140a, 3, 4, False, 'd'),
    0x8f4d: (8, 0x140a, 4, 2, False, 'd'),
    0x8f4e: (12, 0x140a, 4, 3, False, 'd'),
    0x8f48: (16, 0x140a, 4, 4, False, 'd'),
}

UNIFORM_LOOKUP_TABLE = {
    0x8B56: (False, 1, 4, '1i'),
    0x8B57: (False, 2, 8, '2i'),
    0x8B58: (False, 3, 12, '3i'),
    0x8B59: (False, 4, 16, '4i'),
    0x1404: (False, 1, 4, '1i'),
    0x8B53: (False, 2, 8, '2i'),
    0x8B54: (False, 3, 12, '3i'),
    0x8B55: (False, 4, 16, '4i'),
    0x1405: (False, 1, 4, '1I'),
    0x8DC6: (False, 2, 8, '2I'),
    0x8DC7: (False, 3, 12, '3I'),
    0x8DC8: (False, 4, 16, '4I'),
    0x1406: (False, 1, 4, '1f'),
    0x8B50: (False, 2, 8, '2f'),
    0x8B51: (False, 3, 12, '3f'),
    0x8B52: (False, 4, 16, '4f'),
    0x140A: (False, 1, 8, '1d'),
    0x8FFC: (False, 2, 16, '2d'),
    0x8FFD: (False, 3, 24, '3d'),
    0x8FFE: (False, 4, 32, '4d'),
    0x8B5D: (False, 1, 4, '1i'),
    0x8DC0: (False, 1, 4, '1i'),
    0x8DC9: (False, 1, 4, '1i'),
    0x8DCE: (False, 1, 4, '1i'),
    0x8B5E: (False, 1, 4, '1i'),
    0x8DCA: (False, 1, 4, '1i'),
    0x8DD2: (False, 1, 4, '1i'),
    0x8DC1: (False, 1, 4, '1i'),
    0x8DCF: (False, 1, 4, '1i'),
    0x8DD7: (False, 1, 4, '1i'),
    0x8B5F: (False, 1, 4, '1i'),
    0x8DCB: (False, 1, 4, '1i'),
    0x8DD3: (False, 1, 4, '1i'),
    0x8B62: (False, 1, 4, '1i'),
    0x9108: (False, 1, 4, '1i'),
    0x9109: (False, 1, 4, '1i'),
    0x910A: (False, 1, 4, '1i'),
    0x910B: (False, 1, 4, '1i'),
    0x910C: (False, 1, 4, '1i'),
    0x910D: (False, 1, 4, '1i'),
    0x8B60: (False, 1, 4, '1i'),
    0x8DCC: (False, 1, 4, '1i'),
    0x8DD4: (False, 1, 4, '1i'),
    0x904D: (False, 1, 4, '1i'),
    0x8B5A: (True, 4, 16, '4f'),
    0x8B65: (True, 6, 24, '6f'),
    0x8B66: (True, 8, 32, '8f'),
    0x8B67: (True, 6, 24, '6f'),
    0x8B5B: (True, 9, 36, '9f'),
    0x8B68: (True, 12, 48, '12f'),
    0x8B69: (True, 8, 32, '8f'),
    0x8B6A: (True, 12, 48, '12f'),
    0x8B5C: (True, 16, 64, '16f'),
    0x8F46: (True, 4, 32, '4d'),
    0x8F49: (True, 6, 48, '6d'),
    0x8F4A: (True, 8, 64, '8d'),
    0x8F4B: (True, 6, 48, '6d'),
    0x8F47: (True, 9, 72, '9d'),
    0x8F4C: (True, 12, 96, '12d'),
    0x8F4D: (True, 8, 64, '8d'),
    0x8F4E: (True, 12, 96, '12d'),
    0x8F48: (True, 16, 128, '16d'),
}


def make_attribute(name, gl_type, program_obj, location, array_length):
    tmp = ATTRIBUTE_LOOKUP_TABLE.get(gl_type, (1, 0, 1, 1, False, '?'))
    dimension, scalar_type, rows_length, row_length, normalizable, shape = tmp
    rows_length *= array_length
    res = Attribute()
    res.gl_type = gl_type
    res.program_obj = program_obj
    res.scalar_type = scalar_type
    res.rows_length = rows_length
    res.row_length = row_length
    res.normalizable = normalizable
    res.location = location
    res.array_length = array_length
    res.dimension = dimension
    res.shape = shape
    res.name = name
    return res


def make_uniform(name, gl_type, program_obj, location, array_length, ctx):
    tmp = UNIFORM_LOOKUP_TABLE.get(gl_type, (False, 1, 4, '1i'))
    matrix, dimension, element_size, fmt = tmp
    res = Uniform()
    res.name = name
    res.gl_type = gl_type
    res.fmt = fmt
    res.program_obj = program_obj
    res.location = location
    res.array_length = array_length
    res.matrix = matrix
    res.dimension = dimension
    res.element_size = element_size
    res.ctx = ctx
    return res


def make_uniform_block(name, program_obj, index, size, ctx):
    res = UniformBlock()
    res.name = name
    res.program_obj = program_obj
    res.index = index
    res.size = size
    res.ctx = ctx
    return res


def make_storage_block(name, program_obj, index, ctx):
    res = StorageBlock()
    res.name = name
    res.program_obj = program_obj
    res.index = index
    res.ctx = ctx
    return res


def make_subroutine(name, index):
    res = Subroutine()
    res.name = name
    res.index = index
    return res


def make_varying(name, number, array_length, dimension):
    res = Varying()
    res.number = number
    res.name = name
    res.array_length = array_length
    res.dimension = dimension
    return res


class Spv:
    INT32 = 1 << 0
    INT64 = 1 << 1
    UINT32 = 1 << 2
    UINT64 = 1 << 3
    FLOAT32 = 1 << 4
    FLOAT64 = 1 << 5

    VEC2 = 1 << 10
    VEC3 = 1 << 11
    VEC4 = 1 << 12

    MAT2 = 1 << 20
    MAT3 = 1 << 21
    MAT4 = 1 << 22

    UNKNOWN = 1 << 30


TRANSLATION_TABLE_SPIRV_GLSL = {
    Spv.INT32: 0x1404,
    Spv.INT32 | Spv.VEC2: 0x8b53,
    Spv.INT32 | Spv.VEC3: 0x8b54,
    Spv.INT32 | Spv.VEC4: 0x8b55,
    Spv.UINT32: 0x1405,
    Spv.UINT32 | Spv.VEC2: 0x8dc6,
    Spv.UINT32 | Spv.VEC3: 0x8dc7,
    Spv.UINT32 | Spv.VEC4: 0x8dc8,
    Spv.FLOAT32: 0x1406,
    Spv.FLOAT32 | Spv.VEC2: 0x8b50,
    Spv.FLOAT32 | Spv.VEC3: 0x8b51,
    Spv.FLOAT32 | Spv.VEC4: 0x8b52,
    Spv.FLOAT64: 0x140a,
    Spv.FLOAT64 | Spv.VEC2: 0x8ffc,
    Spv.FLOAT64 | Spv.VEC3: 0x8ffd,
    Spv.FLOAT64 | Spv.VEC4: 0x8ffe,
    Spv.FLOAT32 | Spv.VEC2 | Spv.MAT2: 0x8b5a,
    Spv.FLOAT32 | Spv.VEC3 | Spv.MAT2: 0x8b65,
    Spv.FLOAT32 | Spv.VEC4 | Spv.MAT2: 0x8b66,
    Spv.FLOAT32 | Spv.VEC2 | Spv.MAT3: 0x8b67,
    Spv.FLOAT32 | Spv.VEC3 | Spv.MAT3: 0x8b5b,
    Spv.FLOAT32 | Spv.VEC4 | Spv.MAT3: 0x8b68,
    Spv.FLOAT32 | Spv.VEC2 | Spv.MAT4: 0x8b69,
    Spv.FLOAT32 | Spv.VEC3 | Spv.MAT4: 0x8b6a,
    Spv.FLOAT32 | Spv.VEC4 | Spv.MAT4: 0x8b5c,
    Spv.FLOAT64 | Spv.VEC2 | Spv.MAT2: 0x8f46,
    Spv.FLOAT64 | Spv.VEC3 | Spv.MAT2: 0x8f49,
    Spv.FLOAT64 | Spv.VEC4 | Spv.MAT2: 0x8f4a,
    Spv.FLOAT64 | Spv.VEC3 | Spv.MAT2: 0x8f4b,
    Spv.FLOAT64 | Spv.VEC3 | Spv.MAT3: 0x8f47,
    Spv.FLOAT64 | Spv.VEC4 | Spv.MAT3: 0x8f4c,
    Spv.FLOAT64 | Spv.VEC2 | Spv.MAT4: 0x8f4d,
    Spv.FLOAT64 | Spv.VEC3 | Spv.MAT4: 0x8f4e,
    Spv.FLOAT64 | Spv.VEC4 | Spv.MAT4: 0x8f48,
}


def parse_spv_inputs(program: int, spv: bytes) -> Dict[int, Attribute]:
    ui32 = struct.Struct('I')
    token = lambda i: ui32.unpack(spv[i * 4 : i * 4 + 4])[0]
    num_tokens = len(spv) // 4

    if token(0) != 0x07230203 or len(spv) % 4 != 0:
        raise ValueError('invalid spv')

    idx = 5

    extracted_names: Dict[int, str] = {}  # id : name
    extracted_storage_class_id: Dict[int, int] = {}  # id : storage_class_id

    pointer_variable: Dict[int, int] = {}  # id : pointer_type_id
    pointer_allowed_types: Dict[int, int] = {}  # pointer_type_id : type_id
    allowed_types: Dict[int, Tuple[int, int]] = {}  # type_id : (spv_type, type_id)

    extracted_types: Dict[int, int] = {}  # id : spv_type
    extracted_location: Dict[int, int] = {}  # id : location
    while idx < num_tokens:
        args, opcode = token(idx) >> 16, token(idx) & 0xffff
        if opcode == 5:  # OpName
            # We can extract the name of some ids
            name_start, name_end = (idx + 2) * 4, (idx + args) * 4
            extracted_names[token(idx + 1)] = spv[name_start:name_end].rstrip(b'\x00').decode()

        if opcode == 59:  # OpVariable
            # We can extract if it is a vertex shader input or not
            extracted_storage_class_id[token(idx + 2)] = token(idx + 3)

            # Mapping pointer_type_id to id of user variables
            pointer_variable[token(idx + 2)] = token(idx + 1)

        if opcode == 71:  # OpDecorate
            # We can extract the location here
            extracted_location[token(idx + 1)] = token(idx + 3)

        if opcode == 32:  # OpTypePointer
            # Retrieving used (allowed) type_ids for pointer_type_ids
            pointer_allowed_types[token(idx + 1)] = token(idx + 3)

        if opcode == 21:  # OpTypeInt
            unsg, bsz = token(idx + 3), token(idx + 2) // 8
            to_write = Spv.UNKNOWN
            if unsg == 1:
                if bsz == 4:
                    to_write = Spv.UINT32
                elif bsz == 8:
                    to_write = Spv.UINT64
            else:
                if bsz == 4:
                    to_write = Spv.INT32
                elif bsz == 8:
                    to_write = Spv.INT64
            allowed_types[token(idx + 1)] = (to_write, -1)

        if opcode == 22:  # OpTypeFloat
            to_write = Spv.UNKNOWN
            bsz = token(idx + 2) // 8
            if bsz == 4:
                to_write = Spv.FLOAT32
            elif bsz == 8:
                to_write = Spv.FLOAT64
            allowed_types[token(idx + 1)] = (to_write, -1)

        if opcode == 23:  # OpTypeVector
            to_write = Spv.UNKNOWN
            vsz = token(idx + 3)
            if vsz == 2:
                to_write = Spv.VEC2
            elif vsz == 3:
                to_write = Spv.VEC3
            elif vsz == 4:
                to_write = Spv.VEC4

            allowed_types[token(idx + 1)] = (to_write, token(idx + 2))

        if opcode == 24:  # OpTypeMatrix
            to_write = Spv.UNKNOWN
            msz = token(idx + 3)
            if msz == 2:
                to_write = Spv.MAT2
            elif msz == 3:
                to_write = Spv.MAT3
            elif msz == 4:
                to_write = Spv.MAT4

            allowed_types[token(idx + 1)] = (to_write, token(idx + 2))

        idx += args

    # Assembly types
    # Some types of variables have pointers to other types of variables used in them.
    # So we use endless research to identify complete types of variables.
    def assembly(type_id):
        typ, thrw_typ = allowed_types[type_id]
        if thrw_typ != -1:
            add_typ = assembly(thrw_typ)
            allowed_types[type_id] = (add_typ | typ, -1)
        return typ

    for type_id in allowed_types.keys():
        assembly(type_id)

    for ids, pointer_type_id in pointer_variable.items():
        type_id = pointer_allowed_types[pointer_type_id]
        if type_id in allowed_types:
            extracted_types[ids] = allowed_types[type_id][0]

    # Making a whole list
    exrtacted_general_ids: List[int] = sorted(set([
        *extracted_location.keys(),
        *extracted_types.keys(),
        *extracted_storage_class_id.keys(),
        *extracted_names.keys(),
    ]))

    extracted_collected: Dict[int, Tuple[str, int, int, int]] = {}  # id : variable_info
    for ids in exrtacted_general_ids:
        # to_add: Tuple[str, int, int, int] = ()  # name, class, type, location
        name, cls, typ, location = '', -1, -1, -1
        if ids in extracted_names:
            name = extracted_names[ids]
        if ids in extracted_storage_class_id:
            cls = extracted_storage_class_id[ids]
        if ids in extracted_types:
            typ = extracted_types[ids]
        if ids in extracted_location:
            location = extracted_location[ids]
        extracted_collected[ids] = (name, cls, typ, location)

    # Conversion to the GLSL type
    for ids, item in extracted_collected.items():
        if item[2] == -1 or item[2] not in TRANSLATION_TABLE_SPIRV_GLSL:
            continue

        extracted_collected[ids] = (item[0], item[1], TRANSLATION_TABLE_SPIRV_GLSL[item[2]], item[3])

    # Cropping the data to the required output
    return {
        location: make_attribute(name, gltype, program, location, 1)
        for name, cls, gltype, location in extracted_collected.values()
        if cls == 1 and location != -1
    }


class InvalidObject:
    pass
