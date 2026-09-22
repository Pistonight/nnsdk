cmake_minimum_required(VERSION 3.15)

add_library(nvn OBJECT
    src/nvn/nvn_Impl.cpp
)

# - needs to be set by downstream if needed, note that nn_gfx includes the C impl
set(NVN_API "C" CACHE STRING "Set NVN platform type")
set_property(CACHE NVN_API PROPERTY STRINGS "C" "CPP")

target_sources(nvn PUBLIC
  FILE_SET HEADERS
  BASE_DIRS ${NINTENDOSDK_PATH}/include/ src/nvn/
  FILES

    ${NINTENDOSDK_PATH}/include/nv.h

# Run 'task configure' to update this list
# SOURCES_START

    ${NINTENDOSDK_PATH}/include/nvn/nvn.h
    ${NINTENDOSDK_PATH}/include/nvn/nvn_Cpp.h
    ${NINTENDOSDK_PATH}/include/nvn/nvn_CppFuncPtrBase.h
    ${NINTENDOSDK_PATH}/include/nvn/nvn_CppMethods.h
    ${NINTENDOSDK_PATH}/include/nvn/nvn_DeviceConstantsNX.h
    ${NINTENDOSDK_PATH}/include/nvn/nvn_FuncPtrBase.h
    ${NINTENDOSDK_PATH}/include/nvn/nvn_FuncPtrInline.h
    ${NINTENDOSDK_PATH}/include/nvnTool/nvnTool_GlslcInterface.h

# SOURCES_END

    src/nvn/nvn_CppFuncPtrImpl.h
    src/nvn/nvn_FuncPtrImpl.h
)

set_target_properties(nvn PROPERTIES
    LINKER_LANGUAGE CXX
    VERIFY_INTERFACE_HEADER_SETS ON
)
if (NVN_API)
  target_compile_definitions(nvn PUBLIC NVN_API_${NVN_API})
endif()

target_include_directories(nvn PUBLIC ${NINTENDOSDK_PATH}/include/)
target_include_directories(nvn PUBLIC src)
