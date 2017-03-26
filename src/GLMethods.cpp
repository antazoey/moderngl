#include "GLMethods.hpp"

#include <cstdio>
#include <cstdlib>

/*

# TODO: remove this

methods = sorted(set([
	'ActiveTexture',
	'AttachShader',
	'BindBuffer',
	'BindFramebuffer',
	'BindTexture',
	'BindVertexArray',
	'BufferData',
	'BufferSubData',
	'Clear',
	'ClearColor',
	'CompileShader',
	'CopyBufferSubData',
	'CreateProgram',
	'CreateShader',
	'DeleteBuffers',
	'DeleteProgram',
	'DeleteShader',
	'DeleteTextures',
	'DeleteVertexArrays',
	'DrawArraysInstanced',
	'DrawElementsInstanced',
	'EnableVertexAttribArray',
	'Finish',
	'FramebufferTexture2D',
	'GenBuffers',
	'GenFramebuffers',
	'GenTextures',
	'GenVertexArrays',
	'GetAttribLocation',
	'GetProgramInfoLog',
	'GetProgramiv',
	'GetShaderInfoLog',
	'GetShaderiv',
	'GetString',
	'LineWidth',
	'LinkProgram',
	'MapBufferRange',
	'PointSize',
	'ShaderSource',
	'TexImage2D',
	'TexParameteri',
	'UnmapBuffer',
	'UseProgram',
	'VertexAttribDivisor',
	'VertexAttribIPointer',
	'VertexAttribPointer',
	'Viewport',
	'ActiveShaderProgram',
	'ActiveTexture',
	'AttachShader',
	'BeginConditionalRender',
	'BeginQuery',
	'BeginQueryIndexed',
	'BeginTransformFeedback',
	'BindAttribLocation',
	'BindBuffer',
	'BindBufferBase',
	'BindBufferRange',
	'BindBuffersBase',
	'BindBuffersRange',
	'BindFragDataLocation',
	'BindFragDataLocationIndexed',
	'BindFramebuffer',
	'BindImageTexture',
	'BindImageTextures',
	'BindProgramPipeline',
	'BindRenderbuffer',
	'BindSampler',
	'BindSamplers',
	'BindTexture',
	'BindTextures',
	'BindTextureUnit',
	'BindTransformFeedback',
	'BindVertexArray',
	'BindVertexBuffer',
	'BindVertexBuffers',
	'BlendColor',
	'BlendEquation',
	'BlendEquationi',
	'BlendEquationSeparate',
	'BlendEquationSeparatei',
	'BlendFunc',
	'BlendFunci',
	'BlendFuncSeparate',
	'BlendFuncSeparatei',
	'BlitFramebuffer',
	'BlitNamedFramebuffer',
	'BufferData',
	'BufferStorage',
	'BufferSubData',
	'CheckFramebufferStatus',
	'CheckNamedFramebufferStatus',
	'ClampColor',
	'Clear',
	'ClearBufferData',
	'ClearBufferfi',
	'ClearBufferfv',
	'ClearBufferiv',
	'ClearBufferSubData',
	'ClearBufferuiv',
	'ClearColor',
	'ClearDepth',
	'ClearDepthf',
	'ClearNamedBufferData',
	'ClearNamedBufferSubData',
	'ClearNamedFramebufferfi',
	'ClearNamedFramebufferfv',
	'ClearNamedFramebufferiv',
	'ClearNamedFramebufferuiv',
	'ClearStencil',
	'ClearTexImage',
	'ClearTexSubImage',
	'ClientWaitSync',
	'ClipControl',
	'ColorMask',
	'ColorMaski',
	'CompileShader',
	'CompressedTexImage1D',
	'CompressedTexImage2D',
	'CompressedTexImage3D',
	'CompressedTexSubImage1D',
	'CompressedTexSubImage2D',
	'CompressedTexSubImage3D',
	'CompressedTextureSubImage1D',
	'CompressedTextureSubImage2D',
	'CompressedTextureSubImage3D',
	'CopyBufferSubData',
	'CopyImageSubData',
	'CopyNamedBufferSubData',
	'CopyTexImage1D',
	'CopyTexImage2D',
	'CopyTexSubImage1D',
	'CopyTexSubImage2D',
	'CopyTexSubImage3D',
	'CopyTextureSubImage1D',
	'CopyTextureSubImage2D',
	'CopyTextureSubImage3D',
	'CreateBuffers',
	'CreateFramebuffers',
	'CreateProgram',
	'CreateProgramPipelines',
	'CreateQueries',
	'CreateRenderbuffers',
	'CreateSamplers',
	'CreateShader',
	'CreateShaderProgramv',
	'CreateTextures',
	'CreateTransformFeedbacks',
	'CreateVertexArrays',
	'CullFace',
	'DebugMessageCallback',
	'DebugMessageControl',
	'DebugMessageInsert',
	'DeleteBuffers',
	'DeleteFramebuffers',
	'DeleteProgram',
	'DeleteProgramPipelines',
	'DeleteQueries',
	'DeleteRenderbuffers',
	'DeleteSamplers',
	'DeleteShader',
	'DeleteSync',
	'DeleteTextures',
	'DeleteTransformFeedbacks',
	'DeleteVertexArrays',
	'DepthFunc',
	'DepthMask',
	'DepthRange',
	'DepthRangeArrayv',
	'DepthRangef',
	'DepthRangeIndexed',
	'DetachShader',
	'Disable',
	'Disablei',
	'DisableVertexArrayAttrib',
	'DisableVertexAttribArray',
	'DispatchCompute',
	'DispatchComputeIndirect',
	'DrawArrays',
	'DrawArraysIndirect',
	'DrawArraysInstanced',
	'DrawArraysInstancedBaseInstance',
	'DrawBuffer',
	'DrawBuffers',
	'DrawElements',
	'DrawElementsBaseVertex',
	'DrawElementsIndirect',
	'DrawElementsInstanced',
	'DrawElementsInstancedBaseInstance',
	'DrawElementsInstancedBaseVertex',
	'DrawElementsInstancedBaseVertexBaseInstance',
	'DrawRangeElements',
	'DrawRangeElementsBaseVertex',
	'DrawTransformFeedback',
	'DrawTransformFeedbackInstanced',
	'DrawTransformFeedbackStream',
	'DrawTransformFeedbackStreamInstanced',
	'Enable',
	'Enablei',
	'EnableVertexArrayAttrib',
	'EnableVertexAttribArray',
	'EndConditionalRender',
	'EndQuery',
	'EndQueryIndexed',
	'EndTransformFeedback',
	'FenceSync',
	'Finish',
	'Flush',
	'FlushMappedBufferRange',
	'FlushMappedNamedBufferRange',
	'FramebufferParameteri',
	'FramebufferRenderbuffer',
	'FramebufferTexture',
	'FramebufferTexture1D',
	'FramebufferTexture2D',
	'FramebufferTexture3D',
	'FramebufferTextureLayer',
	'FrontFace',
	'GenBuffers',
	'GenerateMipmap',
	'GenerateTextureMipmap',
	'GenFramebuffers',
	'GenProgramPipelines',
	'GenQueries',
	'GenRenderbuffers',
	'GenSamplers',
	'GenTextures',
	'GenTransformFeedbacks',
	'GenVertexArrays',
	'GetActiveAtomicCounterBufferiv',
	'GetActiveAttrib',
	'GetActiveSubroutineName',
	'GetActiveSubroutineUniformiv',
	'GetActiveSubroutineUniformName',
	'GetActiveUniform',
	'GetActiveUniformBlockiv',
	'GetActiveUniformBlockName',
	'GetActiveUniformName',
	'GetActiveUniformsiv',
	'GetAttachedShaders',
	'GetAttribLocation',
	'GetBooleani_v',
	'GetBooleanv',
	'GetBufferParameteri64v',
	'GetBufferParameteriv',
	'GetBufferPointerv',
	'GetBufferSubData',
	'GetCompressedTexImage',
	'GetCompressedTextureImage',
	'GetCompressedTextureSubImage',
	'GetDebugMessageLog',
	'GetDoublei_v',
	'GetDoublev',
	'GetError',
	'GetFloati_v',
	'GetFloatv',
	'GetFragDataIndex',
	'GetFragDataLocation',
	'GetFramebufferAttachmentParameteriv',
	'GetFramebufferParameteriv',
	'GetGraphicsResetStatus',
	'GetInteger64i_v',
	'GetInteger64v',
	'GetIntegeri_v',
	'GetIntegerv',
	'GetInternalformati64v',
	'GetInternalformativ',
	'GetMultisamplefv',
	'GetNamedBufferParameteri64v',
	'GetNamedBufferParameteriv',
	'GetNamedBufferPointerv',
	'GetNamedBufferSubData',
	'GetNamedFramebufferAttachmentParameteriv',
	'GetNamedFramebufferParameteriv',
	'GetNamedRenderbufferParameteriv',
	'GetnCompressedTexImage',
	'GetnTexImage',
	'GetnUniformdv',
	'GetnUniformfv',
	'GetnUniformiv',
	'GetnUniformuiv',
	'GetObjectLabel',
	'GetObjectPtrLabel',
	'GetPointerv',
	'GetProgramBinary',
	'GetProgramInfoLog',
	'GetProgramInterfaceiv',
	'GetProgramiv',
	'GetProgramPipelineInfoLog',
	'GetProgramPipelineiv',
	'GetProgramResourceIndex',
	'GetProgramResourceiv',
	'GetProgramResourceLocation',
	'GetProgramResourceLocationIndex',
	'GetProgramResourceName',
	'GetProgramStageiv',
	'GetQueryBufferObjecti64v',
	'GetQueryBufferObjectiv',
	'GetQueryBufferObjectui64v',
	'GetQueryBufferObjectuiv',
	'GetQueryIndexediv',
	'GetQueryiv',
	'GetQueryObjecti64v',
	'GetQueryObjectiv',
	'GetQueryObjectui64v',
	'GetQueryObjectuiv',
	'GetRenderbufferParameteriv',
	'GetSamplerParameterfv',
	'GetSamplerParameterIiv',
	'GetSamplerParameterIuiv',
	'GetSamplerParameteriv',
	'GetShaderInfoLog',
	'GetShaderiv',
	'GetShaderPrecisionFormat',
	'GetShaderSource',
	'GetString',
	'GetStringi',
	'GetSubroutineIndex',
	'GetSubroutineUniformLocation',
	'GetSynciv',
	'GetTexImage',
	'GetTexLevelParameterfv',
	'GetTexLevelParameteriv',
	'GetTexParameterfv',
	'GetTexParameterIiv',
	'GetTexParameterIuiv',
	'GetTexParameteriv',
	'GetTextureImage',
	'GetTextureLevelParameterfv',
	'GetTextureLevelParameteriv',
	'GetTextureParameterfv',
	'GetTextureParameterIiv',
	'GetTextureParameterIuiv',
	'GetTextureParameteriv',
	'GetTextureSubImage',
	'GetTransformFeedbacki64_v',
	'GetTransformFeedbacki_v',
	'GetTransformFeedbackiv',
	'GetTransformFeedbackVarying',
	'GetUniformBlockIndex',
	'GetUniformdv',
	'GetUniformfv',
	'GetUniformIndices',
	'GetUniformiv',
	'GetUniformLocation',
	'GetUniformSubroutineuiv',
	'GetUniformuiv',
	'GetVertexArrayIndexed64iv',
	'GetVertexArrayIndexediv',
	'GetVertexArrayiv',
	'GetVertexAttribdv',
	'GetVertexAttribfv',
	'GetVertexAttribIiv',
	'GetVertexAttribIuiv',
	'GetVertexAttribiv',
	'GetVertexAttribLdv',
	'GetVertexAttribPointerv',
	'Hint',
	'InvalidateBufferData',
	'InvalidateBufferSubData',
	'InvalidateFramebuffer',
	'InvalidateNamedFramebufferData',
	'InvalidateNamedFramebufferSubData',
	'InvalidateSubFramebuffer',
	'InvalidateTexImage',
	'InvalidateTexSubImage',
	'IsBuffer',
	'IsEnabled',
	'IsEnabledi',
	'IsFramebuffer',
	'IsProgram',
	'IsProgramPipeline',
	'IsQuery',
	'IsRenderbuffer',
	'IsSampler',
	'IsShader',
	'IsSync',
	'IsTexture',
	'IsTransformFeedback',
	'IsVertexArray',
	'LineWidth',
	'LinkProgram',
	'LogicOp',
	'MapBuffer',
	'MapBufferRange',
	'MapNamedBuffer',
	'MapNamedBufferRange',
	'MemoryBarrier',
	'MemoryBarrierByRegion',
	'MinSampleShading',
	'MultiDrawArrays',
	'MultiDrawArraysIndirect',
	'MultiDrawElements',
	'MultiDrawElementsBaseVertex',
	'MultiDrawElementsIndirect',
	'NamedBufferData',
	'NamedBufferStorage',
	'NamedBufferSubData',
	'NamedFramebufferDrawBuffer',
	'NamedFramebufferDrawBuffers',
	'NamedFramebufferParameteri',
	'NamedFramebufferReadBuffer',
	'NamedFramebufferRenderbuffer',
	'NamedFramebufferTexture',
	'NamedFramebufferTextureLayer',
	'NamedRenderbufferStorage',
	'NamedRenderbufferStorageMultisample',
	'ObjectLabel',
	'ObjectPtrLabel',
	'PatchParameterfv',
	'PatchParameteri',
	'PauseTransformFeedback',
	'PixelStoref',
	'PixelStorei',
	'PointParameterf',
	'PointParameterfv',
	'PointParameteri',
	'PointParameteriv',
	'PointSize',
	'PolygonMode',
	'PolygonOffset',
	'PopDebugGroup',
	'PrimitiveRestartIndex',
	'ProgramBinary',
	'ProgramParameteri',
	'ProgramUniform1d',
	'ProgramUniform1dv',
	'ProgramUniform1f',
	'ProgramUniform1fv',
	'ProgramUniform1i',
	'ProgramUniform1iv',
	'ProgramUniform1ui',
	'ProgramUniform1uiv',
	'ProgramUniform2d',
	'ProgramUniform2dv',
	'ProgramUniform2f',
	'ProgramUniform2fv',
	'ProgramUniform2i',
	'ProgramUniform2iv',
	'ProgramUniform2ui',
	'ProgramUniform2uiv',
	'ProgramUniform3d',
	'ProgramUniform3dv',
	'ProgramUniform3f',
	'ProgramUniform3fv',
	'ProgramUniform3i',
	'ProgramUniform3iv',
	'ProgramUniform3ui',
	'ProgramUniform3uiv',
	'ProgramUniform4d',
	'ProgramUniform4dv',
	'ProgramUniform4f',
	'ProgramUniform4fv',
	'ProgramUniform4i',
	'ProgramUniform4iv',
	'ProgramUniform4ui',
	'ProgramUniform4uiv',
	'ProgramUniformMatrix2dv',
	'ProgramUniformMatrix2fv',
	'ProgramUniformMatrix2x3dv',
	'ProgramUniformMatrix2x3fv',
	'ProgramUniformMatrix2x4dv',
	'ProgramUniformMatrix2x4fv',
	'ProgramUniformMatrix3dv',
	'ProgramUniformMatrix3fv',
	'ProgramUniformMatrix3x2dv',
	'ProgramUniformMatrix3x2fv',
	'ProgramUniformMatrix3x4dv',
	'ProgramUniformMatrix3x4fv',
	'ProgramUniformMatrix4dv',
	'ProgramUniformMatrix4fv',
	'ProgramUniformMatrix4x2dv',
	'ProgramUniformMatrix4x2fv',
	'ProgramUniformMatrix4x3dv',
	'ProgramUniformMatrix4x3fv',
	'ProvokingVertex',
	'PushDebugGroup',
	'QueryCounter',
	'ReadBuffer',
	'ReadnPixels',
	'ReadPixels',
	'ReleaseShaderCompiler',
	'RenderbufferStorage',
	'RenderbufferStorageMultisample',
	'ResumeTransformFeedback',
	'SampleCoverage',
	'SampleMaski',
	'SamplerParameterf',
	'SamplerParameterfv',
	'SamplerParameteri',
	'SamplerParameterIiv',
	'SamplerParameterIuiv',
	'SamplerParameteriv',
	'Scissor',
	'ScissorArrayv',
	'ScissorIndexed',
	'ScissorIndexedv',
	'ShaderBinary',
	'ShaderSource',
	'ShaderStorageBlockBinding',
	'StencilFunc',
	'StencilFuncSeparate',
	'StencilMask',
	'StencilMaskSeparate',
	'StencilOp',
	'StencilOpSeparate',
	'SwapInterval',
	'SwapIntervalEXT',
	'TexBuffer',
	'TexBufferRange',
	'TexImage1D',
	'TexImage2D',
	'TexImage2DMultisample',
	'TexImage3D',
	'TexImage3DMultisample',
	'TexParameterf',
	'TexParameterfv',
	'TexParameteri',
	'TexParameterIiv',
	'TexParameterIuiv',
	'TexParameteriv',
	'TexStorage1D',
	'TexStorage2D',
	'TexStorage2DMultisample',
	'TexStorage3D',
	'TexStorage3DMultisample',
	'TexSubImage1D',
	'TexSubImage2D',
	'TexSubImage3D',
	'TextureBarrier',
	'TextureBuffer',
	'TextureBufferRange',
	'TextureParameterf',
	'TextureParameterfv',
	'TextureParameteri',
	'TextureParameterIiv',
	'TextureParameterIuiv',
	'TextureParameteriv',
	'TextureStorage1D',
	'TextureStorage2D',
	'TextureStorage2DMultisample',
	'TextureStorage3D',
	'TextureStorage3DMultisample',
	'TextureSubImage1D',
	'TextureSubImage2D',
	'TextureSubImage3D',
	'TextureView',
	'TransformFeedbackBufferBase',
	'TransformFeedbackBufferRange',
	'TransformFeedbackVaryings',
	'Uniform1d',
	'Uniform1dv',
	'Uniform1f',
	'Uniform1fv',
	'Uniform1i',
	'Uniform1iv',
	'Uniform1ui',
	'Uniform1uiv',
	'Uniform2d',
	'Uniform2dv',
	'Uniform2f',
	'Uniform2fv',
	'Uniform2i',
	'Uniform2iv',
	'Uniform2ui',
	'Uniform2uiv',
	'Uniform3d',
	'Uniform3dv',
	'Uniform3f',
	'Uniform3fv',
	'Uniform3i',
	'Uniform3iv',
	'Uniform3ui',
	'Uniform3uiv',
	'Uniform4d',
	'Uniform4dv',
	'Uniform4f',
	'Uniform4fv',
	'Uniform4i',
	'Uniform4iv',
	'Uniform4ui',
	'Uniform4uiv',
	'UniformBlockBinding',
	'UniformMatrix2dv',
	'UniformMatrix2fv',
	'UniformMatrix2x3dv',
	'UniformMatrix2x3fv',
	'UniformMatrix2x4dv',
	'UniformMatrix2x4fv',
	'UniformMatrix3dv',
	'UniformMatrix3fv',
	'UniformMatrix3x2dv',
	'UniformMatrix3x2fv',
	'UniformMatrix3x4dv',
	'UniformMatrix3x4fv',
	'UniformMatrix4dv',
	'UniformMatrix4fv',
	'UniformMatrix4x2dv',
	'UniformMatrix4x2fv',
	'UniformMatrix4x3dv',
	'UniformMatrix4x3fv',
	'UniformSubroutinesuiv',
	'UnmapBuffer',
	'UnmapNamedBuffer',
	'UseProgram',
	'UseProgramStages',
	'ValidateProgram',
	'ValidateProgramPipeline',
	'VertexArrayAttribBinding',
	'VertexArrayAttribFormat',
	'VertexArrayAttribIFormat',
	'VertexArrayAttribLFormat',
	'VertexArrayBindingDivisor',
	'VertexArrayElementBuffer',
	'VertexArrayVertexBuffer',
	'VertexArrayVertexBuffers',
	'VertexAttrib1d',
	'VertexAttrib1dv',
	'VertexAttrib1f',
	'VertexAttrib1fv',
	'VertexAttrib1s',
	'VertexAttrib1sv',
	'VertexAttrib2d',
	'VertexAttrib2dv',
	'VertexAttrib2f',
	'VertexAttrib2fv',
	'VertexAttrib2s',
	'VertexAttrib2sv',
	'VertexAttrib3d',
	'VertexAttrib3dv',
	'VertexAttrib3f',
	'VertexAttrib3fv',
	'VertexAttrib3s',
	'VertexAttrib3sv',
	'VertexAttrib4bv',
	'VertexAttrib4d',
	'VertexAttrib4dv',
	'VertexAttrib4f',
	'VertexAttrib4fv',
	'VertexAttrib4iv',
	'VertexAttrib4Nbv',
	'VertexAttrib4Niv',
	'VertexAttrib4Nsv',
	'VertexAttrib4Nub',
	'VertexAttrib4Nubv',
	'VertexAttrib4Nuiv',
	'VertexAttrib4Nusv',
	'VertexAttrib4s',
	'VertexAttrib4sv',
	'VertexAttrib4ubv',
	'VertexAttrib4uiv',
	'VertexAttrib4usv',
	'VertexAttribBinding',
	'VertexAttribDivisor',
	'VertexAttribFormat',
	'VertexAttribI1i',
	'VertexAttribI1iv',
	'VertexAttribI1ui',
	'VertexAttribI1uiv',
	'VertexAttribI2i',
	'VertexAttribI2iv',
	'VertexAttribI2ui',
	'VertexAttribI2uiv',
	'VertexAttribI3i',
	'VertexAttribI3iv',
	'VertexAttribI3ui',
	'VertexAttribI3uiv',
	'VertexAttribI4bv',
	'VertexAttribI4i',
	'VertexAttribI4iv',
	'VertexAttribI4sv',
	'VertexAttribI4ubv',
	'VertexAttribI4ui',
	'VertexAttribI4uiv',
	'VertexAttribI4usv',
	'VertexAttribIFormat',
	'VertexAttribIPointer',
	'VertexAttribL1d',
	'VertexAttribL1dv',
	'VertexAttribL2d',
	'VertexAttribL2dv',
	'VertexAttribL3d',
	'VertexAttribL3dv',
	'VertexAttribL4d',
	'VertexAttribL4dv',
	'VertexAttribLFormat',
	'VertexAttribLPointer',
	'VertexAttribP1ui',
	'VertexAttribP1uiv',
	'VertexAttribP2ui',
	'VertexAttribP2uiv',
	'VertexAttribP3ui',
	'VertexAttribP3uiv',
	'VertexAttribP4ui',
	'VertexAttribP4uiv',
	'VertexAttribPointer',
	'VertexBindingDivisor',
	'Viewport',
	'ViewportArrayv',
	'ViewportIndexedf',
	'ViewportIndexedfv',
]))

def find(method):
	this->return '%(name)s = (PROC_gl%(name)s)LoadMethod("gl%(name)s");' % {'name': method}

load = '\n\t'.join(find(method) for method in methods)

define = '\n\t'.join('PROC_gl%s %s;' % (method, method) for method in methods)

*/

#define INVALID_METHOD(method) (!(method) || ((void *)(method) == (void *)dummy_method))

void GLAPI FakeGetProgramStageiv(GLuint program, GLenum shadertype, GLenum pname, GLint * values) {
	values[0] = 0;
}

void GLAPI dummy_method() {
	printf("DUMMY METHOD\n");
	exit(0);
}

#if defined(_WIN32) || defined(_WIN64)

#include <Windows.h>

#ifdef MemoryBarrier
#undef MemoryBarrier
#endif

void * LoadMethod(const char * method) {
	static HMODULE opengl32 = LoadLibrary("opengl32.dll");

	void * proc = (void *)GetProcAddress(opengl32, method);

	if (proc) {
		return proc;
	}

	proc = (void *)wglGetProcAddress(method);

	if (proc) {
		return proc;
	}

	// printf("%s NOT found!\n", method);
	return (void *)dummy_method;
}

#else

#include <dlfcn.h>
#include <X11/Xlib.h>
#include <X11/Xutil.h>

typedef const void * (* PROC_glXGetProcAddress)(const char *);

void * LoadMethod(const char * method) {
	static void * libgl = dlopen("libGL.so.1", RTLD_LAZY);
	static PROC_glXGetProcAddress glXGetProcAddress = (PROC_glXGetProcAddress)dlsym(libgl, "glXGetProcAddress");

	void * proc = (void *)dlsym(libgl, method);

	if (proc) {
		// printf("%s found!\n", method);
		return proc;
	}

	proc = (void *)glXGetProcAddress(method);

	if (proc) {
		// printf("%s found!\n", method);
		return proc;
	}

	// printf("%s NOT found!\n", method);
	return (void *)dummy_method;
}

#endif

void GLMethods::load() {
	this->ActiveShaderProgram = (PROC_glActiveShaderProgram)LoadMethod("glActiveShaderProgram");
	this->ActiveTexture = (PROC_glActiveTexture)LoadMethod("glActiveTexture");
	this->AttachShader = (PROC_glAttachShader)LoadMethod("glAttachShader");
	this->BeginConditionalRender = (PROC_glBeginConditionalRender)LoadMethod("glBeginConditionalRender");
	this->BeginQuery = (PROC_glBeginQuery)LoadMethod("glBeginQuery");
	this->BeginQueryIndexed = (PROC_glBeginQueryIndexed)LoadMethod("glBeginQueryIndexed");
	this->BeginTransformFeedback = (PROC_glBeginTransformFeedback)LoadMethod("glBeginTransformFeedback");
	this->BindAttribLocation = (PROC_glBindAttribLocation)LoadMethod("glBindAttribLocation");
	this->BindBuffer = (PROC_glBindBuffer)LoadMethod("glBindBuffer");
	this->BindBufferBase = (PROC_glBindBufferBase)LoadMethod("glBindBufferBase");
	this->BindBufferRange = (PROC_glBindBufferRange)LoadMethod("glBindBufferRange");
	this->BindBuffersBase = (PROC_glBindBuffersBase)LoadMethod("glBindBuffersBase");
	this->BindBuffersRange = (PROC_glBindBuffersRange)LoadMethod("glBindBuffersRange");
	this->BindFragDataLocation = (PROC_glBindFragDataLocation)LoadMethod("glBindFragDataLocation");
	this->BindFragDataLocationIndexed = (PROC_glBindFragDataLocationIndexed)LoadMethod("glBindFragDataLocationIndexed");
	this->BindFramebuffer = (PROC_glBindFramebuffer)LoadMethod("glBindFramebuffer");
	this->BindImageTexture = (PROC_glBindImageTexture)LoadMethod("glBindImageTexture");
	this->BindImageTextures = (PROC_glBindImageTextures)LoadMethod("glBindImageTextures");
	this->BindProgramPipeline = (PROC_glBindProgramPipeline)LoadMethod("glBindProgramPipeline");
	this->BindRenderbuffer = (PROC_glBindRenderbuffer)LoadMethod("glBindRenderbuffer");
	this->BindSampler = (PROC_glBindSampler)LoadMethod("glBindSampler");
	this->BindSamplers = (PROC_glBindSamplers)LoadMethod("glBindSamplers");
	this->BindTexture = (PROC_glBindTexture)LoadMethod("glBindTexture");
	this->BindTextureUnit = (PROC_glBindTextureUnit)LoadMethod("glBindTextureUnit");
	this->BindTextures = (PROC_glBindTextures)LoadMethod("glBindTextures");
	this->BindTransformFeedback = (PROC_glBindTransformFeedback)LoadMethod("glBindTransformFeedback");
	this->BindVertexArray = (PROC_glBindVertexArray)LoadMethod("glBindVertexArray");
	this->BindVertexBuffer = (PROC_glBindVertexBuffer)LoadMethod("glBindVertexBuffer");
	this->BindVertexBuffers = (PROC_glBindVertexBuffers)LoadMethod("glBindVertexBuffers");
	this->BlendColor = (PROC_glBlendColor)LoadMethod("glBlendColor");
	this->BlendEquation = (PROC_glBlendEquation)LoadMethod("glBlendEquation");
	this->BlendEquationSeparate = (PROC_glBlendEquationSeparate)LoadMethod("glBlendEquationSeparate");
	this->BlendEquationSeparatei = (PROC_glBlendEquationSeparatei)LoadMethod("glBlendEquationSeparatei");
	this->BlendEquationi = (PROC_glBlendEquationi)LoadMethod("glBlendEquationi");
	this->BlendFunc = (PROC_glBlendFunc)LoadMethod("glBlendFunc");
	this->BlendFuncSeparate = (PROC_glBlendFuncSeparate)LoadMethod("glBlendFuncSeparate");
	this->BlendFuncSeparatei = (PROC_glBlendFuncSeparatei)LoadMethod("glBlendFuncSeparatei");
	this->BlendFunci = (PROC_glBlendFunci)LoadMethod("glBlendFunci");
	this->BlitFramebuffer = (PROC_glBlitFramebuffer)LoadMethod("glBlitFramebuffer");
	this->BlitNamedFramebuffer = (PROC_glBlitNamedFramebuffer)LoadMethod("glBlitNamedFramebuffer");
	this->BufferData = (PROC_glBufferData)LoadMethod("glBufferData");
	this->BufferStorage = (PROC_glBufferStorage)LoadMethod("glBufferStorage");
	this->BufferSubData = (PROC_glBufferSubData)LoadMethod("glBufferSubData");
	this->CheckFramebufferStatus = (PROC_glCheckFramebufferStatus)LoadMethod("glCheckFramebufferStatus");
	this->CheckNamedFramebufferStatus = (PROC_glCheckNamedFramebufferStatus)LoadMethod("glCheckNamedFramebufferStatus");
	this->ClampColor = (PROC_glClampColor)LoadMethod("glClampColor");
	this->Clear = (PROC_glClear)LoadMethod("glClear");
	this->ClearBufferData = (PROC_glClearBufferData)LoadMethod("glClearBufferData");
	this->ClearBufferSubData = (PROC_glClearBufferSubData)LoadMethod("glClearBufferSubData");
	this->ClearBufferfi = (PROC_glClearBufferfi)LoadMethod("glClearBufferfi");
	this->ClearBufferfv = (PROC_glClearBufferfv)LoadMethod("glClearBufferfv");
	this->ClearBufferiv = (PROC_glClearBufferiv)LoadMethod("glClearBufferiv");
	this->ClearBufferuiv = (PROC_glClearBufferuiv)LoadMethod("glClearBufferuiv");
	this->ClearColor = (PROC_glClearColor)LoadMethod("glClearColor");
	this->ClearDepth = (PROC_glClearDepth)LoadMethod("glClearDepth");
	this->ClearDepthf = (PROC_glClearDepthf)LoadMethod("glClearDepthf");
	this->ClearNamedBufferData = (PROC_glClearNamedBufferData)LoadMethod("glClearNamedBufferData");
	this->ClearNamedBufferSubData = (PROC_glClearNamedBufferSubData)LoadMethod("glClearNamedBufferSubData");
	this->ClearNamedFramebufferfi = (PROC_glClearNamedFramebufferfi)LoadMethod("glClearNamedFramebufferfi");
	this->ClearNamedFramebufferfv = (PROC_glClearNamedFramebufferfv)LoadMethod("glClearNamedFramebufferfv");
	this->ClearNamedFramebufferiv = (PROC_glClearNamedFramebufferiv)LoadMethod("glClearNamedFramebufferiv");
	this->ClearNamedFramebufferuiv = (PROC_glClearNamedFramebufferuiv)LoadMethod("glClearNamedFramebufferuiv");
	this->ClearStencil = (PROC_glClearStencil)LoadMethod("glClearStencil");
	this->ClearTexImage = (PROC_glClearTexImage)LoadMethod("glClearTexImage");
	this->ClearTexSubImage = (PROC_glClearTexSubImage)LoadMethod("glClearTexSubImage");
	this->ClientWaitSync = (PROC_glClientWaitSync)LoadMethod("glClientWaitSync");
	this->ClipControl = (PROC_glClipControl)LoadMethod("glClipControl");
	this->ColorMask = (PROC_glColorMask)LoadMethod("glColorMask");
	this->ColorMaski = (PROC_glColorMaski)LoadMethod("glColorMaski");
	this->CompileShader = (PROC_glCompileShader)LoadMethod("glCompileShader");
	this->CompressedTexImage1D = (PROC_glCompressedTexImage1D)LoadMethod("glCompressedTexImage1D");
	this->CompressedTexImage2D = (PROC_glCompressedTexImage2D)LoadMethod("glCompressedTexImage2D");
	this->CompressedTexImage3D = (PROC_glCompressedTexImage3D)LoadMethod("glCompressedTexImage3D");
	this->CompressedTexSubImage1D = (PROC_glCompressedTexSubImage1D)LoadMethod("glCompressedTexSubImage1D");
	this->CompressedTexSubImage2D = (PROC_glCompressedTexSubImage2D)LoadMethod("glCompressedTexSubImage2D");
	this->CompressedTexSubImage3D = (PROC_glCompressedTexSubImage3D)LoadMethod("glCompressedTexSubImage3D");
	this->CompressedTextureSubImage1D = (PROC_glCompressedTextureSubImage1D)LoadMethod("glCompressedTextureSubImage1D");
	this->CompressedTextureSubImage2D = (PROC_glCompressedTextureSubImage2D)LoadMethod("glCompressedTextureSubImage2D");
	this->CompressedTextureSubImage3D = (PROC_glCompressedTextureSubImage3D)LoadMethod("glCompressedTextureSubImage3D");
	this->CopyBufferSubData = (PROC_glCopyBufferSubData)LoadMethod("glCopyBufferSubData");
	this->CopyImageSubData = (PROC_glCopyImageSubData)LoadMethod("glCopyImageSubData");
	this->CopyNamedBufferSubData = (PROC_glCopyNamedBufferSubData)LoadMethod("glCopyNamedBufferSubData");
	this->CopyTexImage1D = (PROC_glCopyTexImage1D)LoadMethod("glCopyTexImage1D");
	this->CopyTexImage2D = (PROC_glCopyTexImage2D)LoadMethod("glCopyTexImage2D");
	this->CopyTexSubImage1D = (PROC_glCopyTexSubImage1D)LoadMethod("glCopyTexSubImage1D");
	this->CopyTexSubImage2D = (PROC_glCopyTexSubImage2D)LoadMethod("glCopyTexSubImage2D");
	this->CopyTexSubImage3D = (PROC_glCopyTexSubImage3D)LoadMethod("glCopyTexSubImage3D");
	this->CopyTextureSubImage1D = (PROC_glCopyTextureSubImage1D)LoadMethod("glCopyTextureSubImage1D");
	this->CopyTextureSubImage2D = (PROC_glCopyTextureSubImage2D)LoadMethod("glCopyTextureSubImage2D");
	this->CopyTextureSubImage3D = (PROC_glCopyTextureSubImage3D)LoadMethod("glCopyTextureSubImage3D");
	this->CreateBuffers = (PROC_glCreateBuffers)LoadMethod("glCreateBuffers");
	this->CreateFramebuffers = (PROC_glCreateFramebuffers)LoadMethod("glCreateFramebuffers");
	this->CreateProgram = (PROC_glCreateProgram)LoadMethod("glCreateProgram");
	this->CreateProgramPipelines = (PROC_glCreateProgramPipelines)LoadMethod("glCreateProgramPipelines");
	this->CreateQueries = (PROC_glCreateQueries)LoadMethod("glCreateQueries");
	this->CreateRenderbuffers = (PROC_glCreateRenderbuffers)LoadMethod("glCreateRenderbuffers");
	this->CreateSamplers = (PROC_glCreateSamplers)LoadMethod("glCreateSamplers");
	this->CreateShader = (PROC_glCreateShader)LoadMethod("glCreateShader");
	this->CreateShaderProgramv = (PROC_glCreateShaderProgramv)LoadMethod("glCreateShaderProgramv");
	this->CreateTextures = (PROC_glCreateTextures)LoadMethod("glCreateTextures");
	this->CreateTransformFeedbacks = (PROC_glCreateTransformFeedbacks)LoadMethod("glCreateTransformFeedbacks");
	this->CreateVertexArrays = (PROC_glCreateVertexArrays)LoadMethod("glCreateVertexArrays");
	this->CullFace = (PROC_glCullFace)LoadMethod("glCullFace");
	this->DebugMessageCallback = (PROC_glDebugMessageCallback)LoadMethod("glDebugMessageCallback");
	this->DebugMessageControl = (PROC_glDebugMessageControl)LoadMethod("glDebugMessageControl");
	this->DebugMessageInsert = (PROC_glDebugMessageInsert)LoadMethod("glDebugMessageInsert");
	this->DeleteBuffers = (PROC_glDeleteBuffers)LoadMethod("glDeleteBuffers");
	this->DeleteFramebuffers = (PROC_glDeleteFramebuffers)LoadMethod("glDeleteFramebuffers");
	this->DeleteProgram = (PROC_glDeleteProgram)LoadMethod("glDeleteProgram");
	this->DeleteProgramPipelines = (PROC_glDeleteProgramPipelines)LoadMethod("glDeleteProgramPipelines");
	this->DeleteQueries = (PROC_glDeleteQueries)LoadMethod("glDeleteQueries");
	this->DeleteRenderbuffers = (PROC_glDeleteRenderbuffers)LoadMethod("glDeleteRenderbuffers");
	this->DeleteSamplers = (PROC_glDeleteSamplers)LoadMethod("glDeleteSamplers");
	this->DeleteShader = (PROC_glDeleteShader)LoadMethod("glDeleteShader");
	this->DeleteSync = (PROC_glDeleteSync)LoadMethod("glDeleteSync");
	this->DeleteTextures = (PROC_glDeleteTextures)LoadMethod("glDeleteTextures");
	this->DeleteTransformFeedbacks = (PROC_glDeleteTransformFeedbacks)LoadMethod("glDeleteTransformFeedbacks");
	this->DeleteVertexArrays = (PROC_glDeleteVertexArrays)LoadMethod("glDeleteVertexArrays");
	this->DepthFunc = (PROC_glDepthFunc)LoadMethod("glDepthFunc");
	this->DepthMask = (PROC_glDepthMask)LoadMethod("glDepthMask");
	this->DepthRange = (PROC_glDepthRange)LoadMethod("glDepthRange");
	this->DepthRangeArrayv = (PROC_glDepthRangeArrayv)LoadMethod("glDepthRangeArrayv");
	this->DepthRangeIndexed = (PROC_glDepthRangeIndexed)LoadMethod("glDepthRangeIndexed");
	this->DepthRangef = (PROC_glDepthRangef)LoadMethod("glDepthRangef");
	this->DetachShader = (PROC_glDetachShader)LoadMethod("glDetachShader");
	this->Disable = (PROC_glDisable)LoadMethod("glDisable");
	this->DisableVertexArrayAttrib = (PROC_glDisableVertexArrayAttrib)LoadMethod("glDisableVertexArrayAttrib");
	this->DisableVertexAttribArray = (PROC_glDisableVertexAttribArray)LoadMethod("glDisableVertexAttribArray");
	this->Disablei = (PROC_glDisablei)LoadMethod("glDisablei");
	this->DispatchCompute = (PROC_glDispatchCompute)LoadMethod("glDispatchCompute");
	this->DispatchComputeIndirect = (PROC_glDispatchComputeIndirect)LoadMethod("glDispatchComputeIndirect");
	this->DrawArrays = (PROC_glDrawArrays)LoadMethod("glDrawArrays");
	this->DrawArraysIndirect = (PROC_glDrawArraysIndirect)LoadMethod("glDrawArraysIndirect");
	this->DrawArraysInstanced = (PROC_glDrawArraysInstanced)LoadMethod("glDrawArraysInstanced");
	this->DrawArraysInstancedBaseInstance = (PROC_glDrawArraysInstancedBaseInstance)LoadMethod("glDrawArraysInstancedBaseInstance");
	this->DrawBuffer = (PROC_glDrawBuffer)LoadMethod("glDrawBuffer");
	this->DrawBuffers = (PROC_glDrawBuffers)LoadMethod("glDrawBuffers");
	this->DrawElements = (PROC_glDrawElements)LoadMethod("glDrawElements");
	this->DrawElementsBaseVertex = (PROC_glDrawElementsBaseVertex)LoadMethod("glDrawElementsBaseVertex");
	this->DrawElementsIndirect = (PROC_glDrawElementsIndirect)LoadMethod("glDrawElementsIndirect");
	this->DrawElementsInstanced = (PROC_glDrawElementsInstanced)LoadMethod("glDrawElementsInstanced");
	this->DrawElementsInstancedBaseInstance = (PROC_glDrawElementsInstancedBaseInstance)LoadMethod("glDrawElementsInstancedBaseInstance");
	this->DrawElementsInstancedBaseVertex = (PROC_glDrawElementsInstancedBaseVertex)LoadMethod("glDrawElementsInstancedBaseVertex");
	this->DrawElementsInstancedBaseVertexBaseInstance = (PROC_glDrawElementsInstancedBaseVertexBaseInstance)LoadMethod("glDrawElementsInstancedBaseVertexBaseInstance");
	this->DrawRangeElements = (PROC_glDrawRangeElements)LoadMethod("glDrawRangeElements");
	this->DrawRangeElementsBaseVertex = (PROC_glDrawRangeElementsBaseVertex)LoadMethod("glDrawRangeElementsBaseVertex");
	this->DrawTransformFeedback = (PROC_glDrawTransformFeedback)LoadMethod("glDrawTransformFeedback");
	this->DrawTransformFeedbackInstanced = (PROC_glDrawTransformFeedbackInstanced)LoadMethod("glDrawTransformFeedbackInstanced");
	this->DrawTransformFeedbackStream = (PROC_glDrawTransformFeedbackStream)LoadMethod("glDrawTransformFeedbackStream");
	this->DrawTransformFeedbackStreamInstanced = (PROC_glDrawTransformFeedbackStreamInstanced)LoadMethod("glDrawTransformFeedbackStreamInstanced");
	this->Enable = (PROC_glEnable)LoadMethod("glEnable");
	this->EnableVertexArrayAttrib = (PROC_glEnableVertexArrayAttrib)LoadMethod("glEnableVertexArrayAttrib");
	this->EnableVertexAttribArray = (PROC_glEnableVertexAttribArray)LoadMethod("glEnableVertexAttribArray");
	this->Enablei = (PROC_glEnablei)LoadMethod("glEnablei");
	this->EndConditionalRender = (PROC_glEndConditionalRender)LoadMethod("glEndConditionalRender");
	this->EndQuery = (PROC_glEndQuery)LoadMethod("glEndQuery");
	this->EndQueryIndexed = (PROC_glEndQueryIndexed)LoadMethod("glEndQueryIndexed");
	this->EndTransformFeedback = (PROC_glEndTransformFeedback)LoadMethod("glEndTransformFeedback");
	this->FenceSync = (PROC_glFenceSync)LoadMethod("glFenceSync");
	this->Finish = (PROC_glFinish)LoadMethod("glFinish");
	this->Flush = (PROC_glFlush)LoadMethod("glFlush");
	this->FlushMappedBufferRange = (PROC_glFlushMappedBufferRange)LoadMethod("glFlushMappedBufferRange");
	this->FlushMappedNamedBufferRange = (PROC_glFlushMappedNamedBufferRange)LoadMethod("glFlushMappedNamedBufferRange");
	this->FramebufferParameteri = (PROC_glFramebufferParameteri)LoadMethod("glFramebufferParameteri");
	this->FramebufferRenderbuffer = (PROC_glFramebufferRenderbuffer)LoadMethod("glFramebufferRenderbuffer");
	this->FramebufferTexture = (PROC_glFramebufferTexture)LoadMethod("glFramebufferTexture");
	this->FramebufferTexture1D = (PROC_glFramebufferTexture1D)LoadMethod("glFramebufferTexture1D");
	this->FramebufferTexture2D = (PROC_glFramebufferTexture2D)LoadMethod("glFramebufferTexture2D");
	this->FramebufferTexture3D = (PROC_glFramebufferTexture3D)LoadMethod("glFramebufferTexture3D");
	this->FramebufferTextureLayer = (PROC_glFramebufferTextureLayer)LoadMethod("glFramebufferTextureLayer");
	this->FrontFace = (PROC_glFrontFace)LoadMethod("glFrontFace");
	this->GenBuffers = (PROC_glGenBuffers)LoadMethod("glGenBuffers");
	this->GenFramebuffers = (PROC_glGenFramebuffers)LoadMethod("glGenFramebuffers");
	this->GenProgramPipelines = (PROC_glGenProgramPipelines)LoadMethod("glGenProgramPipelines");
	this->GenQueries = (PROC_glGenQueries)LoadMethod("glGenQueries");
	this->GenRenderbuffers = (PROC_glGenRenderbuffers)LoadMethod("glGenRenderbuffers");
	this->GenSamplers = (PROC_glGenSamplers)LoadMethod("glGenSamplers");
	this->GenTextures = (PROC_glGenTextures)LoadMethod("glGenTextures");
	this->GenTransformFeedbacks = (PROC_glGenTransformFeedbacks)LoadMethod("glGenTransformFeedbacks");
	this->GenVertexArrays = (PROC_glGenVertexArrays)LoadMethod("glGenVertexArrays");
	this->GenerateMipmap = (PROC_glGenerateMipmap)LoadMethod("glGenerateMipmap");
	this->GenerateTextureMipmap = (PROC_glGenerateTextureMipmap)LoadMethod("glGenerateTextureMipmap");
	this->GetActiveAtomicCounterBufferiv = (PROC_glGetActiveAtomicCounterBufferiv)LoadMethod("glGetActiveAtomicCounterBufferiv");
	this->GetActiveAttrib = (PROC_glGetActiveAttrib)LoadMethod("glGetActiveAttrib");
	this->GetActiveSubroutineName = (PROC_glGetActiveSubroutineName)LoadMethod("glGetActiveSubroutineName");
	this->GetActiveSubroutineUniformName = (PROC_glGetActiveSubroutineUniformName)LoadMethod("glGetActiveSubroutineUniformName");
	this->GetActiveSubroutineUniformiv = (PROC_glGetActiveSubroutineUniformiv)LoadMethod("glGetActiveSubroutineUniformiv");
	this->GetActiveUniform = (PROC_glGetActiveUniform)LoadMethod("glGetActiveUniform");
	this->GetActiveUniformBlockName = (PROC_glGetActiveUniformBlockName)LoadMethod("glGetActiveUniformBlockName");
	this->GetActiveUniformBlockiv = (PROC_glGetActiveUniformBlockiv)LoadMethod("glGetActiveUniformBlockiv");
	this->GetActiveUniformName = (PROC_glGetActiveUniformName)LoadMethod("glGetActiveUniformName");
	this->GetActiveUniformsiv = (PROC_glGetActiveUniformsiv)LoadMethod("glGetActiveUniformsiv");
	this->GetAttachedShaders = (PROC_glGetAttachedShaders)LoadMethod("glGetAttachedShaders");
	this->GetAttribLocation = (PROC_glGetAttribLocation)LoadMethod("glGetAttribLocation");
	this->GetBooleani_v = (PROC_glGetBooleani_v)LoadMethod("glGetBooleani_v");
	this->GetBooleanv = (PROC_glGetBooleanv)LoadMethod("glGetBooleanv");
	this->GetBufferParameteri64v = (PROC_glGetBufferParameteri64v)LoadMethod("glGetBufferParameteri64v");
	this->GetBufferParameteriv = (PROC_glGetBufferParameteriv)LoadMethod("glGetBufferParameteriv");
	this->GetBufferPointerv = (PROC_glGetBufferPointerv)LoadMethod("glGetBufferPointerv");
	this->GetBufferSubData = (PROC_glGetBufferSubData)LoadMethod("glGetBufferSubData");
	this->GetCompressedTexImage = (PROC_glGetCompressedTexImage)LoadMethod("glGetCompressedTexImage");
	this->GetCompressedTextureImage = (PROC_glGetCompressedTextureImage)LoadMethod("glGetCompressedTextureImage");
	this->GetCompressedTextureSubImage = (PROC_glGetCompressedTextureSubImage)LoadMethod("glGetCompressedTextureSubImage");
	this->GetDebugMessageLog = (PROC_glGetDebugMessageLog)LoadMethod("glGetDebugMessageLog");
	this->GetDoublei_v = (PROC_glGetDoublei_v)LoadMethod("glGetDoublei_v");
	this->GetDoublev = (PROC_glGetDoublev)LoadMethod("glGetDoublev");
	this->GetError = (PROC_glGetError)LoadMethod("glGetError");
	this->GetFloati_v = (PROC_glGetFloati_v)LoadMethod("glGetFloati_v");
	this->GetFloatv = (PROC_glGetFloatv)LoadMethod("glGetFloatv");
	this->GetFragDataIndex = (PROC_glGetFragDataIndex)LoadMethod("glGetFragDataIndex");
	this->GetFragDataLocation = (PROC_glGetFragDataLocation)LoadMethod("glGetFragDataLocation");
	this->GetFramebufferAttachmentParameteriv = (PROC_glGetFramebufferAttachmentParameteriv)LoadMethod("glGetFramebufferAttachmentParameteriv");
	this->GetFramebufferParameteriv = (PROC_glGetFramebufferParameteriv)LoadMethod("glGetFramebufferParameteriv");
	this->GetGraphicsResetStatus = (PROC_glGetGraphicsResetStatus)LoadMethod("glGetGraphicsResetStatus");
	this->GetInteger64i_v = (PROC_glGetInteger64i_v)LoadMethod("glGetInteger64i_v");
	this->GetInteger64v = (PROC_glGetInteger64v)LoadMethod("glGetInteger64v");
	this->GetIntegeri_v = (PROC_glGetIntegeri_v)LoadMethod("glGetIntegeri_v");
	this->GetIntegerv = (PROC_glGetIntegerv)LoadMethod("glGetIntegerv");
	this->GetInternalformati64v = (PROC_glGetInternalformati64v)LoadMethod("glGetInternalformati64v");
	this->GetInternalformativ = (PROC_glGetInternalformativ)LoadMethod("glGetInternalformativ");
	this->GetMultisamplefv = (PROC_glGetMultisamplefv)LoadMethod("glGetMultisamplefv");
	this->GetNamedBufferParameteri64v = (PROC_glGetNamedBufferParameteri64v)LoadMethod("glGetNamedBufferParameteri64v");
	this->GetNamedBufferParameteriv = (PROC_glGetNamedBufferParameteriv)LoadMethod("glGetNamedBufferParameteriv");
	this->GetNamedBufferPointerv = (PROC_glGetNamedBufferPointerv)LoadMethod("glGetNamedBufferPointerv");
	this->GetNamedBufferSubData = (PROC_glGetNamedBufferSubData)LoadMethod("glGetNamedBufferSubData");
	this->GetNamedFramebufferAttachmentParameteriv = (PROC_glGetNamedFramebufferAttachmentParameteriv)LoadMethod("glGetNamedFramebufferAttachmentParameteriv");
	this->GetNamedFramebufferParameteriv = (PROC_glGetNamedFramebufferParameteriv)LoadMethod("glGetNamedFramebufferParameteriv");
	this->GetNamedRenderbufferParameteriv = (PROC_glGetNamedRenderbufferParameteriv)LoadMethod("glGetNamedRenderbufferParameteriv");
	this->GetObjectLabel = (PROC_glGetObjectLabel)LoadMethod("glGetObjectLabel");
	this->GetObjectPtrLabel = (PROC_glGetObjectPtrLabel)LoadMethod("glGetObjectPtrLabel");
	this->GetPointerv = (PROC_glGetPointerv)LoadMethod("glGetPointerv");
	this->GetProgramBinary = (PROC_glGetProgramBinary)LoadMethod("glGetProgramBinary");
	this->GetProgramInfoLog = (PROC_glGetProgramInfoLog)LoadMethod("glGetProgramInfoLog");
	this->GetProgramInterfaceiv = (PROC_glGetProgramInterfaceiv)LoadMethod("glGetProgramInterfaceiv");
	this->GetProgramPipelineInfoLog = (PROC_glGetProgramPipelineInfoLog)LoadMethod("glGetProgramPipelineInfoLog");
	this->GetProgramPipelineiv = (PROC_glGetProgramPipelineiv)LoadMethod("glGetProgramPipelineiv");
	this->GetProgramResourceIndex = (PROC_glGetProgramResourceIndex)LoadMethod("glGetProgramResourceIndex");
	this->GetProgramResourceLocation = (PROC_glGetProgramResourceLocation)LoadMethod("glGetProgramResourceLocation");
	this->GetProgramResourceLocationIndex = (PROC_glGetProgramResourceLocationIndex)LoadMethod("glGetProgramResourceLocationIndex");
	this->GetProgramResourceName = (PROC_glGetProgramResourceName)LoadMethod("glGetProgramResourceName");
	this->GetProgramResourceiv = (PROC_glGetProgramResourceiv)LoadMethod("glGetProgramResourceiv");
	this->GetProgramStageiv = (PROC_glGetProgramStageiv)LoadMethod("glGetProgramStageiv");
	this->GetProgramiv = (PROC_glGetProgramiv)LoadMethod("glGetProgramiv");
	this->GetQueryBufferObjecti64v = (PROC_glGetQueryBufferObjecti64v)LoadMethod("glGetQueryBufferObjecti64v");
	this->GetQueryBufferObjectiv = (PROC_glGetQueryBufferObjectiv)LoadMethod("glGetQueryBufferObjectiv");
	this->GetQueryBufferObjectui64v = (PROC_glGetQueryBufferObjectui64v)LoadMethod("glGetQueryBufferObjectui64v");
	this->GetQueryBufferObjectuiv = (PROC_glGetQueryBufferObjectuiv)LoadMethod("glGetQueryBufferObjectuiv");
	this->GetQueryIndexediv = (PROC_glGetQueryIndexediv)LoadMethod("glGetQueryIndexediv");
	this->GetQueryObjecti64v = (PROC_glGetQueryObjecti64v)LoadMethod("glGetQueryObjecti64v");
	this->GetQueryObjectiv = (PROC_glGetQueryObjectiv)LoadMethod("glGetQueryObjectiv");
	this->GetQueryObjectui64v = (PROC_glGetQueryObjectui64v)LoadMethod("glGetQueryObjectui64v");
	this->GetQueryObjectuiv = (PROC_glGetQueryObjectuiv)LoadMethod("glGetQueryObjectuiv");
	this->GetQueryiv = (PROC_glGetQueryiv)LoadMethod("glGetQueryiv");
	this->GetRenderbufferParameteriv = (PROC_glGetRenderbufferParameteriv)LoadMethod("glGetRenderbufferParameteriv");
	this->GetSamplerParameterIiv = (PROC_glGetSamplerParameterIiv)LoadMethod("glGetSamplerParameterIiv");
	this->GetSamplerParameterIuiv = (PROC_glGetSamplerParameterIuiv)LoadMethod("glGetSamplerParameterIuiv");
	this->GetSamplerParameterfv = (PROC_glGetSamplerParameterfv)LoadMethod("glGetSamplerParameterfv");
	this->GetSamplerParameteriv = (PROC_glGetSamplerParameteriv)LoadMethod("glGetSamplerParameteriv");
	this->GetShaderInfoLog = (PROC_glGetShaderInfoLog)LoadMethod("glGetShaderInfoLog");
	this->GetShaderPrecisionFormat = (PROC_glGetShaderPrecisionFormat)LoadMethod("glGetShaderPrecisionFormat");
	this->GetShaderSource = (PROC_glGetShaderSource)LoadMethod("glGetShaderSource");
	this->GetShaderiv = (PROC_glGetShaderiv)LoadMethod("glGetShaderiv");
	this->GetString = (PROC_glGetString)LoadMethod("glGetString");
	this->GetStringi = (PROC_glGetStringi)LoadMethod("glGetStringi");
	this->GetSubroutineIndex = (PROC_glGetSubroutineIndex)LoadMethod("glGetSubroutineIndex");
	this->GetSubroutineUniformLocation = (PROC_glGetSubroutineUniformLocation)LoadMethod("glGetSubroutineUniformLocation");
	this->GetSynciv = (PROC_glGetSynciv)LoadMethod("glGetSynciv");
	this->GetTexImage = (PROC_glGetTexImage)LoadMethod("glGetTexImage");
	this->GetTexLevelParameterfv = (PROC_glGetTexLevelParameterfv)LoadMethod("glGetTexLevelParameterfv");
	this->GetTexLevelParameteriv = (PROC_glGetTexLevelParameteriv)LoadMethod("glGetTexLevelParameteriv");
	this->GetTexParameterIiv = (PROC_glGetTexParameterIiv)LoadMethod("glGetTexParameterIiv");
	this->GetTexParameterIuiv = (PROC_glGetTexParameterIuiv)LoadMethod("glGetTexParameterIuiv");
	this->GetTexParameterfv = (PROC_glGetTexParameterfv)LoadMethod("glGetTexParameterfv");
	this->GetTexParameteriv = (PROC_glGetTexParameteriv)LoadMethod("glGetTexParameteriv");
	this->GetTextureImage = (PROC_glGetTextureImage)LoadMethod("glGetTextureImage");
	this->GetTextureLevelParameterfv = (PROC_glGetTextureLevelParameterfv)LoadMethod("glGetTextureLevelParameterfv");
	this->GetTextureLevelParameteriv = (PROC_glGetTextureLevelParameteriv)LoadMethod("glGetTextureLevelParameteriv");
	this->GetTextureParameterIiv = (PROC_glGetTextureParameterIiv)LoadMethod("glGetTextureParameterIiv");
	this->GetTextureParameterIuiv = (PROC_glGetTextureParameterIuiv)LoadMethod("glGetTextureParameterIuiv");
	this->GetTextureParameterfv = (PROC_glGetTextureParameterfv)LoadMethod("glGetTextureParameterfv");
	this->GetTextureParameteriv = (PROC_glGetTextureParameteriv)LoadMethod("glGetTextureParameteriv");
	this->GetTextureSubImage = (PROC_glGetTextureSubImage)LoadMethod("glGetTextureSubImage");
	this->GetTransformFeedbackVarying = (PROC_glGetTransformFeedbackVarying)LoadMethod("glGetTransformFeedbackVarying");
	this->GetTransformFeedbacki64_v = (PROC_glGetTransformFeedbacki64_v)LoadMethod("glGetTransformFeedbacki64_v");
	this->GetTransformFeedbacki_v = (PROC_glGetTransformFeedbacki_v)LoadMethod("glGetTransformFeedbacki_v");
	this->GetTransformFeedbackiv = (PROC_glGetTransformFeedbackiv)LoadMethod("glGetTransformFeedbackiv");
	this->GetUniformBlockIndex = (PROC_glGetUniformBlockIndex)LoadMethod("glGetUniformBlockIndex");
	this->GetUniformIndices = (PROC_glGetUniformIndices)LoadMethod("glGetUniformIndices");
	this->GetUniformLocation = (PROC_glGetUniformLocation)LoadMethod("glGetUniformLocation");
	this->GetUniformSubroutineuiv = (PROC_glGetUniformSubroutineuiv)LoadMethod("glGetUniformSubroutineuiv");
	this->GetUniformdv = (PROC_glGetUniformdv)LoadMethod("glGetUniformdv");
	this->GetUniformfv = (PROC_glGetUniformfv)LoadMethod("glGetUniformfv");
	this->GetUniformiv = (PROC_glGetUniformiv)LoadMethod("glGetUniformiv");
	this->GetUniformuiv = (PROC_glGetUniformuiv)LoadMethod("glGetUniformuiv");
	this->GetVertexArrayIndexed64iv = (PROC_glGetVertexArrayIndexed64iv)LoadMethod("glGetVertexArrayIndexed64iv");
	this->GetVertexArrayIndexediv = (PROC_glGetVertexArrayIndexediv)LoadMethod("glGetVertexArrayIndexediv");
	this->GetVertexArrayiv = (PROC_glGetVertexArrayiv)LoadMethod("glGetVertexArrayiv");
	this->GetVertexAttribIiv = (PROC_glGetVertexAttribIiv)LoadMethod("glGetVertexAttribIiv");
	this->GetVertexAttribIuiv = (PROC_glGetVertexAttribIuiv)LoadMethod("glGetVertexAttribIuiv");
	this->GetVertexAttribLdv = (PROC_glGetVertexAttribLdv)LoadMethod("glGetVertexAttribLdv");
	this->GetVertexAttribPointerv = (PROC_glGetVertexAttribPointerv)LoadMethod("glGetVertexAttribPointerv");
	this->GetVertexAttribdv = (PROC_glGetVertexAttribdv)LoadMethod("glGetVertexAttribdv");
	this->GetVertexAttribfv = (PROC_glGetVertexAttribfv)LoadMethod("glGetVertexAttribfv");
	this->GetVertexAttribiv = (PROC_glGetVertexAttribiv)LoadMethod("glGetVertexAttribiv");
	this->GetnCompressedTexImage = (PROC_glGetnCompressedTexImage)LoadMethod("glGetnCompressedTexImage");
	this->GetnTexImage = (PROC_glGetnTexImage)LoadMethod("glGetnTexImage");
	this->GetnUniformdv = (PROC_glGetnUniformdv)LoadMethod("glGetnUniformdv");
	this->GetnUniformfv = (PROC_glGetnUniformfv)LoadMethod("glGetnUniformfv");
	this->GetnUniformiv = (PROC_glGetnUniformiv)LoadMethod("glGetnUniformiv");
	this->GetnUniformuiv = (PROC_glGetnUniformuiv)LoadMethod("glGetnUniformuiv");
	this->Hint = (PROC_glHint)LoadMethod("glHint");
	this->InvalidateBufferData = (PROC_glInvalidateBufferData)LoadMethod("glInvalidateBufferData");
	this->InvalidateBufferSubData = (PROC_glInvalidateBufferSubData)LoadMethod("glInvalidateBufferSubData");
	this->InvalidateFramebuffer = (PROC_glInvalidateFramebuffer)LoadMethod("glInvalidateFramebuffer");
	this->InvalidateNamedFramebufferData = (PROC_glInvalidateNamedFramebufferData)LoadMethod("glInvalidateNamedFramebufferData");
	this->InvalidateNamedFramebufferSubData = (PROC_glInvalidateNamedFramebufferSubData)LoadMethod("glInvalidateNamedFramebufferSubData");
	this->InvalidateSubFramebuffer = (PROC_glInvalidateSubFramebuffer)LoadMethod("glInvalidateSubFramebuffer");
	this->InvalidateTexImage = (PROC_glInvalidateTexImage)LoadMethod("glInvalidateTexImage");
	this->InvalidateTexSubImage = (PROC_glInvalidateTexSubImage)LoadMethod("glInvalidateTexSubImage");
	this->IsBuffer = (PROC_glIsBuffer)LoadMethod("glIsBuffer");
	this->IsEnabled = (PROC_glIsEnabled)LoadMethod("glIsEnabled");
	this->IsEnabledi = (PROC_glIsEnabledi)LoadMethod("glIsEnabledi");
	this->IsFramebuffer = (PROC_glIsFramebuffer)LoadMethod("glIsFramebuffer");
	this->IsProgram = (PROC_glIsProgram)LoadMethod("glIsProgram");
	this->IsProgramPipeline = (PROC_glIsProgramPipeline)LoadMethod("glIsProgramPipeline");
	this->IsQuery = (PROC_glIsQuery)LoadMethod("glIsQuery");
	this->IsRenderbuffer = (PROC_glIsRenderbuffer)LoadMethod("glIsRenderbuffer");
	this->IsSampler = (PROC_glIsSampler)LoadMethod("glIsSampler");
	this->IsShader = (PROC_glIsShader)LoadMethod("glIsShader");
	this->IsSync = (PROC_glIsSync)LoadMethod("glIsSync");
	this->IsTexture = (PROC_glIsTexture)LoadMethod("glIsTexture");
	this->IsTransformFeedback = (PROC_glIsTransformFeedback)LoadMethod("glIsTransformFeedback");
	this->IsVertexArray = (PROC_glIsVertexArray)LoadMethod("glIsVertexArray");
	this->LineWidth = (PROC_glLineWidth)LoadMethod("glLineWidth");
	this->LinkProgram = (PROC_glLinkProgram)LoadMethod("glLinkProgram");
	this->LogicOp = (PROC_glLogicOp)LoadMethod("glLogicOp");
	this->MapBuffer = (PROC_glMapBuffer)LoadMethod("glMapBuffer");
	this->MapBufferRange = (PROC_glMapBufferRange)LoadMethod("glMapBufferRange");
	this->MapNamedBuffer = (PROC_glMapNamedBuffer)LoadMethod("glMapNamedBuffer");
	this->MapNamedBufferRange = (PROC_glMapNamedBufferRange)LoadMethod("glMapNamedBufferRange");
	this->MemoryBarrier = (PROC_glMemoryBarrier)LoadMethod("glMemoryBarrier");
	this->MemoryBarrierByRegion = (PROC_glMemoryBarrierByRegion)LoadMethod("glMemoryBarrierByRegion");
	this->MinSampleShading = (PROC_glMinSampleShading)LoadMethod("glMinSampleShading");
	this->MultiDrawArrays = (PROC_glMultiDrawArrays)LoadMethod("glMultiDrawArrays");
	this->MultiDrawArraysIndirect = (PROC_glMultiDrawArraysIndirect)LoadMethod("glMultiDrawArraysIndirect");
	this->MultiDrawElements = (PROC_glMultiDrawElements)LoadMethod("glMultiDrawElements");
	this->MultiDrawElementsBaseVertex = (PROC_glMultiDrawElementsBaseVertex)LoadMethod("glMultiDrawElementsBaseVertex");
	this->MultiDrawElementsIndirect = (PROC_glMultiDrawElementsIndirect)LoadMethod("glMultiDrawElementsIndirect");
	this->NamedBufferData = (PROC_glNamedBufferData)LoadMethod("glNamedBufferData");
	this->NamedBufferStorage = (PROC_glNamedBufferStorage)LoadMethod("glNamedBufferStorage");
	this->NamedBufferSubData = (PROC_glNamedBufferSubData)LoadMethod("glNamedBufferSubData");
	this->NamedFramebufferDrawBuffer = (PROC_glNamedFramebufferDrawBuffer)LoadMethod("glNamedFramebufferDrawBuffer");
	this->NamedFramebufferDrawBuffers = (PROC_glNamedFramebufferDrawBuffers)LoadMethod("glNamedFramebufferDrawBuffers");
	this->NamedFramebufferParameteri = (PROC_glNamedFramebufferParameteri)LoadMethod("glNamedFramebufferParameteri");
	this->NamedFramebufferReadBuffer = (PROC_glNamedFramebufferReadBuffer)LoadMethod("glNamedFramebufferReadBuffer");
	this->NamedFramebufferRenderbuffer = (PROC_glNamedFramebufferRenderbuffer)LoadMethod("glNamedFramebufferRenderbuffer");
	this->NamedFramebufferTexture = (PROC_glNamedFramebufferTexture)LoadMethod("glNamedFramebufferTexture");
	this->NamedFramebufferTextureLayer = (PROC_glNamedFramebufferTextureLayer)LoadMethod("glNamedFramebufferTextureLayer");
	this->NamedRenderbufferStorage = (PROC_glNamedRenderbufferStorage)LoadMethod("glNamedRenderbufferStorage");
	this->NamedRenderbufferStorageMultisample = (PROC_glNamedRenderbufferStorageMultisample)LoadMethod("glNamedRenderbufferStorageMultisample");
	this->ObjectLabel = (PROC_glObjectLabel)LoadMethod("glObjectLabel");
	this->ObjectPtrLabel = (PROC_glObjectPtrLabel)LoadMethod("glObjectPtrLabel");
	this->PatchParameterfv = (PROC_glPatchParameterfv)LoadMethod("glPatchParameterfv");
	this->PatchParameteri = (PROC_glPatchParameteri)LoadMethod("glPatchParameteri");
	this->PauseTransformFeedback = (PROC_glPauseTransformFeedback)LoadMethod("glPauseTransformFeedback");
	this->PixelStoref = (PROC_glPixelStoref)LoadMethod("glPixelStoref");
	this->PixelStorei = (PROC_glPixelStorei)LoadMethod("glPixelStorei");
	this->PointParameterf = (PROC_glPointParameterf)LoadMethod("glPointParameterf");
	this->PointParameterfv = (PROC_glPointParameterfv)LoadMethod("glPointParameterfv");
	this->PointParameteri = (PROC_glPointParameteri)LoadMethod("glPointParameteri");
	this->PointParameteriv = (PROC_glPointParameteriv)LoadMethod("glPointParameteriv");
	this->PointSize = (PROC_glPointSize)LoadMethod("glPointSize");
	this->PolygonMode = (PROC_glPolygonMode)LoadMethod("glPolygonMode");
	this->PolygonOffset = (PROC_glPolygonOffset)LoadMethod("glPolygonOffset");
	this->PopDebugGroup = (PROC_glPopDebugGroup)LoadMethod("glPopDebugGroup");
	this->PrimitiveRestartIndex = (PROC_glPrimitiveRestartIndex)LoadMethod("glPrimitiveRestartIndex");
	this->ProgramBinary = (PROC_glProgramBinary)LoadMethod("glProgramBinary");
	this->ProgramParameteri = (PROC_glProgramParameteri)LoadMethod("glProgramParameteri");
	this->ProgramUniform1d = (PROC_glProgramUniform1d)LoadMethod("glProgramUniform1d");
	this->ProgramUniform1dv = (PROC_glProgramUniform1dv)LoadMethod("glProgramUniform1dv");
	this->ProgramUniform1f = (PROC_glProgramUniform1f)LoadMethod("glProgramUniform1f");
	this->ProgramUniform1fv = (PROC_glProgramUniform1fv)LoadMethod("glProgramUniform1fv");
	this->ProgramUniform1i = (PROC_glProgramUniform1i)LoadMethod("glProgramUniform1i");
	this->ProgramUniform1iv = (PROC_glProgramUniform1iv)LoadMethod("glProgramUniform1iv");
	this->ProgramUniform1ui = (PROC_glProgramUniform1ui)LoadMethod("glProgramUniform1ui");
	this->ProgramUniform1uiv = (PROC_glProgramUniform1uiv)LoadMethod("glProgramUniform1uiv");
	this->ProgramUniform2d = (PROC_glProgramUniform2d)LoadMethod("glProgramUniform2d");
	this->ProgramUniform2dv = (PROC_glProgramUniform2dv)LoadMethod("glProgramUniform2dv");
	this->ProgramUniform2f = (PROC_glProgramUniform2f)LoadMethod("glProgramUniform2f");
	this->ProgramUniform2fv = (PROC_glProgramUniform2fv)LoadMethod("glProgramUniform2fv");
	this->ProgramUniform2i = (PROC_glProgramUniform2i)LoadMethod("glProgramUniform2i");
	this->ProgramUniform2iv = (PROC_glProgramUniform2iv)LoadMethod("glProgramUniform2iv");
	this->ProgramUniform2ui = (PROC_glProgramUniform2ui)LoadMethod("glProgramUniform2ui");
	this->ProgramUniform2uiv = (PROC_glProgramUniform2uiv)LoadMethod("glProgramUniform2uiv");
	this->ProgramUniform3d = (PROC_glProgramUniform3d)LoadMethod("glProgramUniform3d");
	this->ProgramUniform3dv = (PROC_glProgramUniform3dv)LoadMethod("glProgramUniform3dv");
	this->ProgramUniform3f = (PROC_glProgramUniform3f)LoadMethod("glProgramUniform3f");
	this->ProgramUniform3fv = (PROC_glProgramUniform3fv)LoadMethod("glProgramUniform3fv");
	this->ProgramUniform3i = (PROC_glProgramUniform3i)LoadMethod("glProgramUniform3i");
	this->ProgramUniform3iv = (PROC_glProgramUniform3iv)LoadMethod("glProgramUniform3iv");
	this->ProgramUniform3ui = (PROC_glProgramUniform3ui)LoadMethod("glProgramUniform3ui");
	this->ProgramUniform3uiv = (PROC_glProgramUniform3uiv)LoadMethod("glProgramUniform3uiv");
	this->ProgramUniform4d = (PROC_glProgramUniform4d)LoadMethod("glProgramUniform4d");
	this->ProgramUniform4dv = (PROC_glProgramUniform4dv)LoadMethod("glProgramUniform4dv");
	this->ProgramUniform4f = (PROC_glProgramUniform4f)LoadMethod("glProgramUniform4f");
	this->ProgramUniform4fv = (PROC_glProgramUniform4fv)LoadMethod("glProgramUniform4fv");
	this->ProgramUniform4i = (PROC_glProgramUniform4i)LoadMethod("glProgramUniform4i");
	this->ProgramUniform4iv = (PROC_glProgramUniform4iv)LoadMethod("glProgramUniform4iv");
	this->ProgramUniform4ui = (PROC_glProgramUniform4ui)LoadMethod("glProgramUniform4ui");
	this->ProgramUniform4uiv = (PROC_glProgramUniform4uiv)LoadMethod("glProgramUniform4uiv");
	this->ProgramUniformMatrix2dv = (PROC_glProgramUniformMatrix2dv)LoadMethod("glProgramUniformMatrix2dv");
	this->ProgramUniformMatrix2fv = (PROC_glProgramUniformMatrix2fv)LoadMethod("glProgramUniformMatrix2fv");
	this->ProgramUniformMatrix2x3dv = (PROC_glProgramUniformMatrix2x3dv)LoadMethod("glProgramUniformMatrix2x3dv");
	this->ProgramUniformMatrix2x3fv = (PROC_glProgramUniformMatrix2x3fv)LoadMethod("glProgramUniformMatrix2x3fv");
	this->ProgramUniformMatrix2x4dv = (PROC_glProgramUniformMatrix2x4dv)LoadMethod("glProgramUniformMatrix2x4dv");
	this->ProgramUniformMatrix2x4fv = (PROC_glProgramUniformMatrix2x4fv)LoadMethod("glProgramUniformMatrix2x4fv");
	this->ProgramUniformMatrix3dv = (PROC_glProgramUniformMatrix3dv)LoadMethod("glProgramUniformMatrix3dv");
	this->ProgramUniformMatrix3fv = (PROC_glProgramUniformMatrix3fv)LoadMethod("glProgramUniformMatrix3fv");
	this->ProgramUniformMatrix3x2dv = (PROC_glProgramUniformMatrix3x2dv)LoadMethod("glProgramUniformMatrix3x2dv");
	this->ProgramUniformMatrix3x2fv = (PROC_glProgramUniformMatrix3x2fv)LoadMethod("glProgramUniformMatrix3x2fv");
	this->ProgramUniformMatrix3x4dv = (PROC_glProgramUniformMatrix3x4dv)LoadMethod("glProgramUniformMatrix3x4dv");
	this->ProgramUniformMatrix3x4fv = (PROC_glProgramUniformMatrix3x4fv)LoadMethod("glProgramUniformMatrix3x4fv");
	this->ProgramUniformMatrix4dv = (PROC_glProgramUniformMatrix4dv)LoadMethod("glProgramUniformMatrix4dv");
	this->ProgramUniformMatrix4fv = (PROC_glProgramUniformMatrix4fv)LoadMethod("glProgramUniformMatrix4fv");
	this->ProgramUniformMatrix4x2dv = (PROC_glProgramUniformMatrix4x2dv)LoadMethod("glProgramUniformMatrix4x2dv");
	this->ProgramUniformMatrix4x2fv = (PROC_glProgramUniformMatrix4x2fv)LoadMethod("glProgramUniformMatrix4x2fv");
	this->ProgramUniformMatrix4x3dv = (PROC_glProgramUniformMatrix4x3dv)LoadMethod("glProgramUniformMatrix4x3dv");
	this->ProgramUniformMatrix4x3fv = (PROC_glProgramUniformMatrix4x3fv)LoadMethod("glProgramUniformMatrix4x3fv");
	this->ProvokingVertex = (PROC_glProvokingVertex)LoadMethod("glProvokingVertex");
	this->PushDebugGroup = (PROC_glPushDebugGroup)LoadMethod("glPushDebugGroup");
	this->QueryCounter = (PROC_glQueryCounter)LoadMethod("glQueryCounter");
	this->ReadBuffer = (PROC_glReadBuffer)LoadMethod("glReadBuffer");
	this->ReadPixels = (PROC_glReadPixels)LoadMethod("glReadPixels");
	this->ReadnPixels = (PROC_glReadnPixels)LoadMethod("glReadnPixels");
	this->ReleaseShaderCompiler = (PROC_glReleaseShaderCompiler)LoadMethod("glReleaseShaderCompiler");
	this->RenderbufferStorage = (PROC_glRenderbufferStorage)LoadMethod("glRenderbufferStorage");
	this->RenderbufferStorageMultisample = (PROC_glRenderbufferStorageMultisample)LoadMethod("glRenderbufferStorageMultisample");
	this->ResumeTransformFeedback = (PROC_glResumeTransformFeedback)LoadMethod("glResumeTransformFeedback");
	this->SampleCoverage = (PROC_glSampleCoverage)LoadMethod("glSampleCoverage");
	this->SampleMaski = (PROC_glSampleMaski)LoadMethod("glSampleMaski");
	this->SamplerParameterIiv = (PROC_glSamplerParameterIiv)LoadMethod("glSamplerParameterIiv");
	this->SamplerParameterIuiv = (PROC_glSamplerParameterIuiv)LoadMethod("glSamplerParameterIuiv");
	this->SamplerParameterf = (PROC_glSamplerParameterf)LoadMethod("glSamplerParameterf");
	this->SamplerParameterfv = (PROC_glSamplerParameterfv)LoadMethod("glSamplerParameterfv");
	this->SamplerParameteri = (PROC_glSamplerParameteri)LoadMethod("glSamplerParameteri");
	this->SamplerParameteriv = (PROC_glSamplerParameteriv)LoadMethod("glSamplerParameteriv");
	this->Scissor = (PROC_glScissor)LoadMethod("glScissor");
	this->ScissorArrayv = (PROC_glScissorArrayv)LoadMethod("glScissorArrayv");
	this->ScissorIndexed = (PROC_glScissorIndexed)LoadMethod("glScissorIndexed");
	this->ScissorIndexedv = (PROC_glScissorIndexedv)LoadMethod("glScissorIndexedv");
	this->ShaderBinary = (PROC_glShaderBinary)LoadMethod("glShaderBinary");
	this->ShaderSource = (PROC_glShaderSource)LoadMethod("glShaderSource");
	this->ShaderStorageBlockBinding = (PROC_glShaderStorageBlockBinding)LoadMethod("glShaderStorageBlockBinding");
	this->StencilFunc = (PROC_glStencilFunc)LoadMethod("glStencilFunc");
	this->StencilFuncSeparate = (PROC_glStencilFuncSeparate)LoadMethod("glStencilFuncSeparate");
	this->StencilMask = (PROC_glStencilMask)LoadMethod("glStencilMask");
	this->StencilMaskSeparate = (PROC_glStencilMaskSeparate)LoadMethod("glStencilMaskSeparate");
	this->StencilOp = (PROC_glStencilOp)LoadMethod("glStencilOp");
	this->StencilOpSeparate = (PROC_glStencilOpSeparate)LoadMethod("glStencilOpSeparate");
	this->TexBuffer = (PROC_glTexBuffer)LoadMethod("glTexBuffer");
	this->TexBufferRange = (PROC_glTexBufferRange)LoadMethod("glTexBufferRange");
	this->TexImage1D = (PROC_glTexImage1D)LoadMethod("glTexImage1D");
	this->TexImage2D = (PROC_glTexImage2D)LoadMethod("glTexImage2D");
	this->TexImage2DMultisample = (PROC_glTexImage2DMultisample)LoadMethod("glTexImage2DMultisample");
	this->TexImage3D = (PROC_glTexImage3D)LoadMethod("glTexImage3D");
	this->TexImage3DMultisample = (PROC_glTexImage3DMultisample)LoadMethod("glTexImage3DMultisample");
	this->TexParameterIiv = (PROC_glTexParameterIiv)LoadMethod("glTexParameterIiv");
	this->TexParameterIuiv = (PROC_glTexParameterIuiv)LoadMethod("glTexParameterIuiv");
	this->TexParameterf = (PROC_glTexParameterf)LoadMethod("glTexParameterf");
	this->TexParameterfv = (PROC_glTexParameterfv)LoadMethod("glTexParameterfv");
	this->TexParameteri = (PROC_glTexParameteri)LoadMethod("glTexParameteri");
	this->TexParameteriv = (PROC_glTexParameteriv)LoadMethod("glTexParameteriv");
	this->TexStorage1D = (PROC_glTexStorage1D)LoadMethod("glTexStorage1D");
	this->TexStorage2D = (PROC_glTexStorage2D)LoadMethod("glTexStorage2D");
	this->TexStorage2DMultisample = (PROC_glTexStorage2DMultisample)LoadMethod("glTexStorage2DMultisample");
	this->TexStorage3D = (PROC_glTexStorage3D)LoadMethod("glTexStorage3D");
	this->TexStorage3DMultisample = (PROC_glTexStorage3DMultisample)LoadMethod("glTexStorage3DMultisample");
	this->TexSubImage1D = (PROC_glTexSubImage1D)LoadMethod("glTexSubImage1D");
	this->TexSubImage2D = (PROC_glTexSubImage2D)LoadMethod("glTexSubImage2D");
	this->TexSubImage3D = (PROC_glTexSubImage3D)LoadMethod("glTexSubImage3D");
	this->TextureBarrier = (PROC_glTextureBarrier)LoadMethod("glTextureBarrier");
	this->TextureBuffer = (PROC_glTextureBuffer)LoadMethod("glTextureBuffer");
	this->TextureBufferRange = (PROC_glTextureBufferRange)LoadMethod("glTextureBufferRange");
	this->TextureParameterIiv = (PROC_glTextureParameterIiv)LoadMethod("glTextureParameterIiv");
	this->TextureParameterIuiv = (PROC_glTextureParameterIuiv)LoadMethod("glTextureParameterIuiv");
	this->TextureParameterf = (PROC_glTextureParameterf)LoadMethod("glTextureParameterf");
	this->TextureParameterfv = (PROC_glTextureParameterfv)LoadMethod("glTextureParameterfv");
	this->TextureParameteri = (PROC_glTextureParameteri)LoadMethod("glTextureParameteri");
	this->TextureParameteriv = (PROC_glTextureParameteriv)LoadMethod("glTextureParameteriv");
	this->TextureStorage1D = (PROC_glTextureStorage1D)LoadMethod("glTextureStorage1D");
	this->TextureStorage2D = (PROC_glTextureStorage2D)LoadMethod("glTextureStorage2D");
	this->TextureStorage2DMultisample = (PROC_glTextureStorage2DMultisample)LoadMethod("glTextureStorage2DMultisample");
	this->TextureStorage3D = (PROC_glTextureStorage3D)LoadMethod("glTextureStorage3D");
	this->TextureStorage3DMultisample = (PROC_glTextureStorage3DMultisample)LoadMethod("glTextureStorage3DMultisample");
	this->TextureSubImage1D = (PROC_glTextureSubImage1D)LoadMethod("glTextureSubImage1D");
	this->TextureSubImage2D = (PROC_glTextureSubImage2D)LoadMethod("glTextureSubImage2D");
	this->TextureSubImage3D = (PROC_glTextureSubImage3D)LoadMethod("glTextureSubImage3D");
	this->TextureView = (PROC_glTextureView)LoadMethod("glTextureView");
	this->TransformFeedbackBufferBase = (PROC_glTransformFeedbackBufferBase)LoadMethod("glTransformFeedbackBufferBase");
	this->TransformFeedbackBufferRange = (PROC_glTransformFeedbackBufferRange)LoadMethod("glTransformFeedbackBufferRange");
	this->TransformFeedbackVaryings = (PROC_glTransformFeedbackVaryings)LoadMethod("glTransformFeedbackVaryings");
	this->Uniform1d = (PROC_glUniform1d)LoadMethod("glUniform1d");
	this->Uniform1dv = (PROC_glUniform1dv)LoadMethod("glUniform1dv");
	this->Uniform1f = (PROC_glUniform1f)LoadMethod("glUniform1f");
	this->Uniform1fv = (PROC_glUniform1fv)LoadMethod("glUniform1fv");
	this->Uniform1i = (PROC_glUniform1i)LoadMethod("glUniform1i");
	this->Uniform1iv = (PROC_glUniform1iv)LoadMethod("glUniform1iv");
	this->Uniform1ui = (PROC_glUniform1ui)LoadMethod("glUniform1ui");
	this->Uniform1uiv = (PROC_glUniform1uiv)LoadMethod("glUniform1uiv");
	this->Uniform2d = (PROC_glUniform2d)LoadMethod("glUniform2d");
	this->Uniform2dv = (PROC_glUniform2dv)LoadMethod("glUniform2dv");
	this->Uniform2f = (PROC_glUniform2f)LoadMethod("glUniform2f");
	this->Uniform2fv = (PROC_glUniform2fv)LoadMethod("glUniform2fv");
	this->Uniform2i = (PROC_glUniform2i)LoadMethod("glUniform2i");
	this->Uniform2iv = (PROC_glUniform2iv)LoadMethod("glUniform2iv");
	this->Uniform2ui = (PROC_glUniform2ui)LoadMethod("glUniform2ui");
	this->Uniform2uiv = (PROC_glUniform2uiv)LoadMethod("glUniform2uiv");
	this->Uniform3d = (PROC_glUniform3d)LoadMethod("glUniform3d");
	this->Uniform3dv = (PROC_glUniform3dv)LoadMethod("glUniform3dv");
	this->Uniform3f = (PROC_glUniform3f)LoadMethod("glUniform3f");
	this->Uniform3fv = (PROC_glUniform3fv)LoadMethod("glUniform3fv");
	this->Uniform3i = (PROC_glUniform3i)LoadMethod("glUniform3i");
	this->Uniform3iv = (PROC_glUniform3iv)LoadMethod("glUniform3iv");
	this->Uniform3ui = (PROC_glUniform3ui)LoadMethod("glUniform3ui");
	this->Uniform3uiv = (PROC_glUniform3uiv)LoadMethod("glUniform3uiv");
	this->Uniform4d = (PROC_glUniform4d)LoadMethod("glUniform4d");
	this->Uniform4dv = (PROC_glUniform4dv)LoadMethod("glUniform4dv");
	this->Uniform4f = (PROC_glUniform4f)LoadMethod("glUniform4f");
	this->Uniform4fv = (PROC_glUniform4fv)LoadMethod("glUniform4fv");
	this->Uniform4i = (PROC_glUniform4i)LoadMethod("glUniform4i");
	this->Uniform4iv = (PROC_glUniform4iv)LoadMethod("glUniform4iv");
	this->Uniform4ui = (PROC_glUniform4ui)LoadMethod("glUniform4ui");
	this->Uniform4uiv = (PROC_glUniform4uiv)LoadMethod("glUniform4uiv");
	this->UniformBlockBinding = (PROC_glUniformBlockBinding)LoadMethod("glUniformBlockBinding");
	this->UniformMatrix2dv = (PROC_glUniformMatrix2dv)LoadMethod("glUniformMatrix2dv");
	this->UniformMatrix2fv = (PROC_glUniformMatrix2fv)LoadMethod("glUniformMatrix2fv");
	this->UniformMatrix2x3dv = (PROC_glUniformMatrix2x3dv)LoadMethod("glUniformMatrix2x3dv");
	this->UniformMatrix2x3fv = (PROC_glUniformMatrix2x3fv)LoadMethod("glUniformMatrix2x3fv");
	this->UniformMatrix2x4dv = (PROC_glUniformMatrix2x4dv)LoadMethod("glUniformMatrix2x4dv");
	this->UniformMatrix2x4fv = (PROC_glUniformMatrix2x4fv)LoadMethod("glUniformMatrix2x4fv");
	this->UniformMatrix3dv = (PROC_glUniformMatrix3dv)LoadMethod("glUniformMatrix3dv");
	this->UniformMatrix3fv = (PROC_glUniformMatrix3fv)LoadMethod("glUniformMatrix3fv");
	this->UniformMatrix3x2dv = (PROC_glUniformMatrix3x2dv)LoadMethod("glUniformMatrix3x2dv");
	this->UniformMatrix3x2fv = (PROC_glUniformMatrix3x2fv)LoadMethod("glUniformMatrix3x2fv");
	this->UniformMatrix3x4dv = (PROC_glUniformMatrix3x4dv)LoadMethod("glUniformMatrix3x4dv");
	this->UniformMatrix3x4fv = (PROC_glUniformMatrix3x4fv)LoadMethod("glUniformMatrix3x4fv");
	this->UniformMatrix4dv = (PROC_glUniformMatrix4dv)LoadMethod("glUniformMatrix4dv");
	this->UniformMatrix4fv = (PROC_glUniformMatrix4fv)LoadMethod("glUniformMatrix4fv");
	this->UniformMatrix4x2dv = (PROC_glUniformMatrix4x2dv)LoadMethod("glUniformMatrix4x2dv");
	this->UniformMatrix4x2fv = (PROC_glUniformMatrix4x2fv)LoadMethod("glUniformMatrix4x2fv");
	this->UniformMatrix4x3dv = (PROC_glUniformMatrix4x3dv)LoadMethod("glUniformMatrix4x3dv");
	this->UniformMatrix4x3fv = (PROC_glUniformMatrix4x3fv)LoadMethod("glUniformMatrix4x3fv");
	this->UniformSubroutinesuiv = (PROC_glUniformSubroutinesuiv)LoadMethod("glUniformSubroutinesuiv");
	this->UnmapBuffer = (PROC_glUnmapBuffer)LoadMethod("glUnmapBuffer");
	this->UnmapNamedBuffer = (PROC_glUnmapNamedBuffer)LoadMethod("glUnmapNamedBuffer");
	this->UseProgram = (PROC_glUseProgram)LoadMethod("glUseProgram");
	this->UseProgramStages = (PROC_glUseProgramStages)LoadMethod("glUseProgramStages");
	this->ValidateProgram = (PROC_glValidateProgram)LoadMethod("glValidateProgram");
	this->ValidateProgramPipeline = (PROC_glValidateProgramPipeline)LoadMethod("glValidateProgramPipeline");
	this->VertexArrayAttribBinding = (PROC_glVertexArrayAttribBinding)LoadMethod("glVertexArrayAttribBinding");
	this->VertexArrayAttribFormat = (PROC_glVertexArrayAttribFormat)LoadMethod("glVertexArrayAttribFormat");
	this->VertexArrayAttribIFormat = (PROC_glVertexArrayAttribIFormat)LoadMethod("glVertexArrayAttribIFormat");
	this->VertexArrayAttribLFormat = (PROC_glVertexArrayAttribLFormat)LoadMethod("glVertexArrayAttribLFormat");
	this->VertexArrayBindingDivisor = (PROC_glVertexArrayBindingDivisor)LoadMethod("glVertexArrayBindingDivisor");
	this->VertexArrayElementBuffer = (PROC_glVertexArrayElementBuffer)LoadMethod("glVertexArrayElementBuffer");
	this->VertexArrayVertexBuffer = (PROC_glVertexArrayVertexBuffer)LoadMethod("glVertexArrayVertexBuffer");
	this->VertexArrayVertexBuffers = (PROC_glVertexArrayVertexBuffers)LoadMethod("glVertexArrayVertexBuffers");
	this->VertexAttrib1d = (PROC_glVertexAttrib1d)LoadMethod("glVertexAttrib1d");
	this->VertexAttrib1dv = (PROC_glVertexAttrib1dv)LoadMethod("glVertexAttrib1dv");
	this->VertexAttrib1f = (PROC_glVertexAttrib1f)LoadMethod("glVertexAttrib1f");
	this->VertexAttrib1fv = (PROC_glVertexAttrib1fv)LoadMethod("glVertexAttrib1fv");
	this->VertexAttrib1s = (PROC_glVertexAttrib1s)LoadMethod("glVertexAttrib1s");
	this->VertexAttrib1sv = (PROC_glVertexAttrib1sv)LoadMethod("glVertexAttrib1sv");
	this->VertexAttrib2d = (PROC_glVertexAttrib2d)LoadMethod("glVertexAttrib2d");
	this->VertexAttrib2dv = (PROC_glVertexAttrib2dv)LoadMethod("glVertexAttrib2dv");
	this->VertexAttrib2f = (PROC_glVertexAttrib2f)LoadMethod("glVertexAttrib2f");
	this->VertexAttrib2fv = (PROC_glVertexAttrib2fv)LoadMethod("glVertexAttrib2fv");
	this->VertexAttrib2s = (PROC_glVertexAttrib2s)LoadMethod("glVertexAttrib2s");
	this->VertexAttrib2sv = (PROC_glVertexAttrib2sv)LoadMethod("glVertexAttrib2sv");
	this->VertexAttrib3d = (PROC_glVertexAttrib3d)LoadMethod("glVertexAttrib3d");
	this->VertexAttrib3dv = (PROC_glVertexAttrib3dv)LoadMethod("glVertexAttrib3dv");
	this->VertexAttrib3f = (PROC_glVertexAttrib3f)LoadMethod("glVertexAttrib3f");
	this->VertexAttrib3fv = (PROC_glVertexAttrib3fv)LoadMethod("glVertexAttrib3fv");
	this->VertexAttrib3s = (PROC_glVertexAttrib3s)LoadMethod("glVertexAttrib3s");
	this->VertexAttrib3sv = (PROC_glVertexAttrib3sv)LoadMethod("glVertexAttrib3sv");
	this->VertexAttrib4Nbv = (PROC_glVertexAttrib4Nbv)LoadMethod("glVertexAttrib4Nbv");
	this->VertexAttrib4Niv = (PROC_glVertexAttrib4Niv)LoadMethod("glVertexAttrib4Niv");
	this->VertexAttrib4Nsv = (PROC_glVertexAttrib4Nsv)LoadMethod("glVertexAttrib4Nsv");
	this->VertexAttrib4Nub = (PROC_glVertexAttrib4Nub)LoadMethod("glVertexAttrib4Nub");
	this->VertexAttrib4Nubv = (PROC_glVertexAttrib4Nubv)LoadMethod("glVertexAttrib4Nubv");
	this->VertexAttrib4Nuiv = (PROC_glVertexAttrib4Nuiv)LoadMethod("glVertexAttrib4Nuiv");
	this->VertexAttrib4Nusv = (PROC_glVertexAttrib4Nusv)LoadMethod("glVertexAttrib4Nusv");
	this->VertexAttrib4bv = (PROC_glVertexAttrib4bv)LoadMethod("glVertexAttrib4bv");
	this->VertexAttrib4d = (PROC_glVertexAttrib4d)LoadMethod("glVertexAttrib4d");
	this->VertexAttrib4dv = (PROC_glVertexAttrib4dv)LoadMethod("glVertexAttrib4dv");
	this->VertexAttrib4f = (PROC_glVertexAttrib4f)LoadMethod("glVertexAttrib4f");
	this->VertexAttrib4fv = (PROC_glVertexAttrib4fv)LoadMethod("glVertexAttrib4fv");
	this->VertexAttrib4iv = (PROC_glVertexAttrib4iv)LoadMethod("glVertexAttrib4iv");
	this->VertexAttrib4s = (PROC_glVertexAttrib4s)LoadMethod("glVertexAttrib4s");
	this->VertexAttrib4sv = (PROC_glVertexAttrib4sv)LoadMethod("glVertexAttrib4sv");
	this->VertexAttrib4ubv = (PROC_glVertexAttrib4ubv)LoadMethod("glVertexAttrib4ubv");
	this->VertexAttrib4uiv = (PROC_glVertexAttrib4uiv)LoadMethod("glVertexAttrib4uiv");
	this->VertexAttrib4usv = (PROC_glVertexAttrib4usv)LoadMethod("glVertexAttrib4usv");
	this->VertexAttribBinding = (PROC_glVertexAttribBinding)LoadMethod("glVertexAttribBinding");
	this->VertexAttribDivisor = (PROC_glVertexAttribDivisor)LoadMethod("glVertexAttribDivisor");
	this->VertexAttribFormat = (PROC_glVertexAttribFormat)LoadMethod("glVertexAttribFormat");
	this->VertexAttribI1i = (PROC_glVertexAttribI1i)LoadMethod("glVertexAttribI1i");
	this->VertexAttribI1iv = (PROC_glVertexAttribI1iv)LoadMethod("glVertexAttribI1iv");
	this->VertexAttribI1ui = (PROC_glVertexAttribI1ui)LoadMethod("glVertexAttribI1ui");
	this->VertexAttribI1uiv = (PROC_glVertexAttribI1uiv)LoadMethod("glVertexAttribI1uiv");
	this->VertexAttribI2i = (PROC_glVertexAttribI2i)LoadMethod("glVertexAttribI2i");
	this->VertexAttribI2iv = (PROC_glVertexAttribI2iv)LoadMethod("glVertexAttribI2iv");
	this->VertexAttribI2ui = (PROC_glVertexAttribI2ui)LoadMethod("glVertexAttribI2ui");
	this->VertexAttribI2uiv = (PROC_glVertexAttribI2uiv)LoadMethod("glVertexAttribI2uiv");
	this->VertexAttribI3i = (PROC_glVertexAttribI3i)LoadMethod("glVertexAttribI3i");
	this->VertexAttribI3iv = (PROC_glVertexAttribI3iv)LoadMethod("glVertexAttribI3iv");
	this->VertexAttribI3ui = (PROC_glVertexAttribI3ui)LoadMethod("glVertexAttribI3ui");
	this->VertexAttribI3uiv = (PROC_glVertexAttribI3uiv)LoadMethod("glVertexAttribI3uiv");
	this->VertexAttribI4bv = (PROC_glVertexAttribI4bv)LoadMethod("glVertexAttribI4bv");
	this->VertexAttribI4i = (PROC_glVertexAttribI4i)LoadMethod("glVertexAttribI4i");
	this->VertexAttribI4iv = (PROC_glVertexAttribI4iv)LoadMethod("glVertexAttribI4iv");
	this->VertexAttribI4sv = (PROC_glVertexAttribI4sv)LoadMethod("glVertexAttribI4sv");
	this->VertexAttribI4ubv = (PROC_glVertexAttribI4ubv)LoadMethod("glVertexAttribI4ubv");
	this->VertexAttribI4ui = (PROC_glVertexAttribI4ui)LoadMethod("glVertexAttribI4ui");
	this->VertexAttribI4uiv = (PROC_glVertexAttribI4uiv)LoadMethod("glVertexAttribI4uiv");
	this->VertexAttribI4usv = (PROC_glVertexAttribI4usv)LoadMethod("glVertexAttribI4usv");
	this->VertexAttribIFormat = (PROC_glVertexAttribIFormat)LoadMethod("glVertexAttribIFormat");
	this->VertexAttribIPointer = (PROC_glVertexAttribIPointer)LoadMethod("glVertexAttribIPointer");
	this->VertexAttribL1d = (PROC_glVertexAttribL1d)LoadMethod("glVertexAttribL1d");
	this->VertexAttribL1dv = (PROC_glVertexAttribL1dv)LoadMethod("glVertexAttribL1dv");
	this->VertexAttribL2d = (PROC_glVertexAttribL2d)LoadMethod("glVertexAttribL2d");
	this->VertexAttribL2dv = (PROC_glVertexAttribL2dv)LoadMethod("glVertexAttribL2dv");
	this->VertexAttribL3d = (PROC_glVertexAttribL3d)LoadMethod("glVertexAttribL3d");
	this->VertexAttribL3dv = (PROC_glVertexAttribL3dv)LoadMethod("glVertexAttribL3dv");
	this->VertexAttribL4d = (PROC_glVertexAttribL4d)LoadMethod("glVertexAttribL4d");
	this->VertexAttribL4dv = (PROC_glVertexAttribL4dv)LoadMethod("glVertexAttribL4dv");
	this->VertexAttribLFormat = (PROC_glVertexAttribLFormat)LoadMethod("glVertexAttribLFormat");
	this->VertexAttribLPointer = (PROC_glVertexAttribLPointer)LoadMethod("glVertexAttribLPointer");
	this->VertexAttribP1ui = (PROC_glVertexAttribP1ui)LoadMethod("glVertexAttribP1ui");
	this->VertexAttribP1uiv = (PROC_glVertexAttribP1uiv)LoadMethod("glVertexAttribP1uiv");
	this->VertexAttribP2ui = (PROC_glVertexAttribP2ui)LoadMethod("glVertexAttribP2ui");
	this->VertexAttribP2uiv = (PROC_glVertexAttribP2uiv)LoadMethod("glVertexAttribP2uiv");
	this->VertexAttribP3ui = (PROC_glVertexAttribP3ui)LoadMethod("glVertexAttribP3ui");
	this->VertexAttribP3uiv = (PROC_glVertexAttribP3uiv)LoadMethod("glVertexAttribP3uiv");
	this->VertexAttribP4ui = (PROC_glVertexAttribP4ui)LoadMethod("glVertexAttribP4ui");
	this->VertexAttribP4uiv = (PROC_glVertexAttribP4uiv)LoadMethod("glVertexAttribP4uiv");
	this->VertexAttribPointer = (PROC_glVertexAttribPointer)LoadMethod("glVertexAttribPointer");
	this->VertexBindingDivisor = (PROC_glVertexBindingDivisor)LoadMethod("glVertexBindingDivisor");
	this->Viewport = (PROC_glViewport)LoadMethod("glViewport");
	this->ViewportArrayv = (PROC_glViewportArrayv)LoadMethod("glViewportArrayv");
	this->ViewportIndexedf = (PROC_glViewportIndexedf)LoadMethod("glViewportIndexedf");
	this->ViewportIndexedfv = (PROC_glViewportIndexedfv)LoadMethod("glViewportIndexedfv");

	if (INVALID_METHOD(GetProgramStageiv)) {
		GetProgramStageiv = FakeGetProgramStageiv;
	}
}
