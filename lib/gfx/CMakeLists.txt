cmake_minimum_required(VERSION 3.15)

set(NN_GFX_TARGET "NVN" CACHE STRING "Set nn::gfx build target")
set_property(CACHE NN_GFX_TARGET PROPERTY STRINGS "" "NVN")

set(NN_GFX_HEADERS
    ${NINTENDOSDK_PATH}/include/nn/gfx/detail/gfx_DataContainer.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/detail/gfx_Fwd.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/detail/gfx_Misc.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/detail/gfx_RequiredMemory.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/detail/gfx_ResShaderImpl.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/detail/gfx_RootSignature-api.common.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/util/gfx_PrimitiveShape.h

    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_Buffer.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_BufferInfo.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_BufferInfoData.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_CommandBuffer.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_CommandBufferInfo.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_CommandBufferInfoData.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_Common.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_DescriptorPool.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_DescriptorPoolInfo.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_DescriptorPoolInfoData.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_DescriptorSlot.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_Device.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_DeviceInfo.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_DeviceInfoData.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_Enum.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_GpuAddress.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_MemoryPool.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_MemoryPoolInfo.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_MemoryPoolInfoData.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_Queue.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_QueueInfo.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_QueueInfoData.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_ResShader.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_ResShaderData.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_ResTexture.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_ResTextureData.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_ResUserData.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_ResUserDataData.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_RootSignatureData-api.common.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_RootSignatureInfo.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_RootSignatureInfoData.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_Sampler.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_SamplerInfo.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_SamplerInfoData.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_Shader.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_ShaderInfo.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_ShaderInfoData.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_State.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_StateInfo.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_StateInfoData.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_SwapChain.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_SwapChainInfo.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_SwapChainInfoData.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_Sync.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_SyncInfo.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_SyncInfoData.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_Texture.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_TextureInfo.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_TextureInfoData.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_Types.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_VariationBase.h
)

set(NN_GFX_SOURCES
    src/gfx/detail/gfx_CommonHelper.cpp
    src/gfx/detail/gfx_CommonHelper.h
    src/gfx/util/gfx_PrimitiveShape.cpp

    src/gfx/gfx_BufferInfo.cpp
    src/gfx/gfx_CommandBufferInfo.cpp
    src/gfx/gfx_DescriptorPoolInfo.cpp
    src/gfx/gfx_DeviceInfo.cpp
    src/gfx/gfx_MemoryPoolInfo.cpp
    src/gfx/gfx_QueueInfo.cpp
    src/gfx/gfx_ResShader.cpp
    src/gfx/gfx_ResTexture.cpp
    src/gfx/gfx_SamplerInfo.cpp
    src/gfx/gfx_ShaderInfo.cpp
    src/gfx/gfx_StateInfo.cpp
    src/gfx/gfx_SwapChainInfo.cpp
    src/gfx/gfx_SyncInfo.cpp
    src/gfx/gfx_TextureInfo.cpp
)

if(NN_GFX_TARGET STREQUAL "NVN")
  list(APPEND NN_GFX_HEADERS
    ${NINTENDOSDK_PATH}/include/nn/gfx/detail/gfx_Buffer-api.nvn.8.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/detail/gfx_CommandBuffer-api.nvn.8.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/detail/gfx_Common-api.nvn.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/detail/gfx_DescriptorPool-api.nvn.8.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/detail/gfx_Device-api.nvn.8.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/detail/gfx_MemoryPool-api.nvn.8.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/detail/gfx_Pipeline-api.nvn.8.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/detail/gfx_Queue-api.nvn.8.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/detail/gfx_RootSignature-api.nvn.8.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/detail/gfx_Sampler-api.nvn.8.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/detail/gfx_Shader-api.nvn.8.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/detail/gfx_State-api.nvn.8.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/detail/gfx_SwapChain-api.nvn.8.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/detail/gfx_Sync-api.nvn.8.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/detail/gfx_Texture-api.nvn.8.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_BufferData-api.nvn.8.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_CommandBufferData-api.nvn.8.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_DescriptorPoolData-api.nvn.8.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_DeviceData-api.nvn.8.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_Interoperation-api.nvn.8.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_MemoryPoolData-api.nvn.8.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_PipelineData-api.nvn.8.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_QueueData-api.nvn.8.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_ResShaderData-api.nvn.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_SamplerData-api.nvn.8.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_ShaderData-api.nvn.8.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_StateData-api.nvn.8.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_SwapChainData-api.nvn.8.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_SyncData-api.nvn.8.h
    ${NINTENDOSDK_PATH}/include/nn/gfx/gfx_TextureData-api.nvn.8.h
  )
  list(APPEND NN_GFX_SOURCES
    src/gfx/detail/gfx_Buffer-api.nvn.8.cpp
    src/gfx/detail/gfx_CommandBuffer-api.nvn.8.cpp
    src/gfx/detail/gfx_DescriptorPool-api.nvn.8.cpp
    src/gfx/detail/gfx_Device-api.nvn.8-os.horizon.cpp
    src/gfx/detail/gfx_GlslcFunction.cpp
    src/gfx/detail/gfx_MemoryPool-api.nvn.8.cpp
    src/gfx/detail/gfx_NvnHelper-os.horizon.cpp
    src/gfx/detail/gfx_NvnHelper.cpp
    src/gfx/detail/gfx_NvnHelper.h
    src/gfx/detail/gfx_ResShader-api.nvn.8.cpp
    src/gfx/detail/gfx_Sampler-api.nvn.8.cpp
    src/gfx/detail/gfx_Shader-api.nvn.8.cpp
    src/gfx/detail/gfx_State-api.nvn.8.cpp
    src/gfx/detail/gfx_Texture-api.nvn.8.cpp

    src/gfx/util/gfx_ObjectDebugLabel-api.nvn.8.cpp
    src/gfx/gfx_Interoperation-api.nvn.cpp
  )
endif()

add_library(nn_gfx OBJECT ${NN_GFX_SOURCES})

target_sources(nn_gfx PUBLIC
  FILE_SET HEADERS
  BASE_DIRS ${NINTENDOSDK_PATH}/include/
  FILES ${NN_GFX_HEADERS}
)

set_target_properties(nn_gfx PROPERTIES
    LINKER_LANGUAGE CXX
    VERIFY_INTERFACE_HEADER_SETS ON
)

target_include_directories(nn_gfx PUBLIC ${NINTENDOSDK_PATH}/include/)

target_link_libraries(nn_gfx PUBLIC nvn)
