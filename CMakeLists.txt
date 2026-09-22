cmake_minimum_required(VERSION 4.4)

project(NintendoSDK C CXX)
set(NINTENDOSDK_PATH "${CMAKE_CURRENT_SOURCE_DIR}")

add_library(nnSdk INTERFACE)
target_sources(nnSdk PUBLIC
  FILE_SET HEADERS
  BASE_DIRS include/
  FILES

# Run 'task update-sources' to update this list
# SOURCES_START

include/nn/account.h
include/nn/bcat/bcat_DeliveryCacheDirectory.h
include/nn/bcat/bcat_DeliveryCacheFile.h
include/nn/bcat/bcat_DeliveryCache.h
include/nn/bcat/bcat_DeliveryCacheProgress.h
include/nn/bcat/bcat_Util.h
include/nn/bcat/detail/bcat_DeliveryCacheProgressImpl.h
include/nn/bcat/detail/bcat_Error.h
include/nn/bcat/detail/bcat_Ipc.h
include/nn/bcat/detail/bcat_ShimLibraryGlobal.h
include/nn/bcat.h
include/nn/nn_BitTypes.h
include/nn/nn.h
include/nn/nn_Result.h
include/nn/os/detail/os_InternalConditionVariable.h
include/nn/os/detail/os_InternalConditionVariable-os.horizon.h
include/nn/os/detail/os_InternalCriticalSection.h
include/nn/os/detail/os_InternalCriticalSection-os.horizon.h
include/nn/os/detail/os_ThreadTypes-os.horizon.h
include/nn/os.h
include/nn/os/os_ConditionVariableCommon.h
include/nn/os/os_EventCommon.h
include/nn/os/os_Event.h
include/nn/os/os_EventTypes.h
include/nn/os/os_MessageQueue.h
include/nn/os/os_MessageQueueTypes.h
include/nn/os/os_Mutex.h
include/nn/os/os_MutexTypes.h
include/nn/os/os_ThreadCommon.h
include/nn/os/os_ThreadTypes.h
include/nn/time.h
include/nn/util/detail/util_ArithmeticImpl.h
include/nn/util/detail/util_TypeTraits.h
include/nn/util.h
include/nn/util/util_AccessorBase.h
include/nn/util/util_Arithmetic.h
include/nn/util/util_BinaryFormat.h
include/nn/util/util_BinTypes.h
include/nn/util/util_BitArray.h
include/nn/util/util_BitFlagSet.h
include/nn/util/util_BitPack.h
include/nn/util/util_BitUtil.h
include/nn/util/util_BytePtr.h
include/nn/util/util_IntrusiveList.h
include/nn/util/util_MathTypes.h
include/nn/util/util_ResDic.h
include/nn/util/util_StringUtil.h
include/nn/util/util_StringView.h
include/nn/util/util_TypedStorage.h

# SOURCES_END
)

set_target_properties(nnSdk PROPERTIES VERIFY_INTERFACE_HEADER_SETS ON)

# Downstream projects should set something like:
# set(NN_SDK 4.4.0)
# set(NN_SDK_TYPE "Release")
function(nn_ver ID)
  set(VER ${${ID}})
  string(REPLACE "." ";" VER "${VER}")

  list(LENGTH VER SEGS)
  if(SEGS LESS 3)
    set(DEF_VER 1 0 0)
    list(SUBLIST DEF_VER ${SEGS} -1 DEF_VER)
    list(APPEND VER ${DEF_VER})

    message(AUTHOR_WARNING "${ID} semver is not complete (%d.%d.%d): ${${ID}}")
  endif()

  list(POP_FRONT VER MAJOR MINOR PATCH)
  
  foreach(VAR IN ITEMS MAJOR MINOR PATCH)
      target_compile_definitions(nnSdk INTERFACE ${ID}_${VAR}=${${VAR}})
  endforeach()
endfunction()
nn_ver(NN_SDK)
target_compile_definitions(nnSdk INTERFACE NN_SDK_TYPE="${NN_SDK_TYPE}")

target_include_directories(nnSdk INTERFACE include/)
target_compile_options(nnSdk INTERFACE
    -fno-strict-aliasing
    -fno-exceptions
    -Wall
    -Wextra
    -Wno-invalid-offsetof
    -Wno-ignored-qualifiers
    -Wno-changes-meaning
)
