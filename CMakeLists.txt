cmake_minimum_required(VERSION 4.4)

project(NintendoSDK C CXX)
set(NINTENDOSDK_PATH "${CMAKE_CURRENT_SOURCE_DIR}")

add_library(nnSdk INTERFACE)
target_sources(nnSdk PUBLIC
  FILE_SET HEADERS
  BASE_DIRS include/
  FILES

  include/nn/bcat.h
  include/nn/bcat/bcat_DeliveryCache.h
  include/nn/bcat/bcat_DeliveryCacheDirectory.h
  include/nn/bcat/bcat_DeliveryCacheFile.h
  include/nn/bcat/bcat_DeliveryCacheProgress.h
  include/nn/bcat/bcat_Util.h
  include/nn/bcat/detail/bcat_DeliveryCacheProgressImpl.h
  include/nn/bcat/detail/bcat_Error.h
  include/nn/bcat/detail/bcat_Ipc.h
  include/nn/bcat/detail/bcat_ShimLibraryGlobal.h

  include/nn/nn.h
  include/nn/nn_Result.h

  include/vapours/results.hpp
  include/vapours/results/sf_results.hpp
  include/vapours/results/capsrv_results.hpp
  include/vapours/results/pgl_results.hpp
  include/vapours/results/lr_results.hpp
  include/vapours/results/spl_results.hpp
  include/vapours/results/pm_results.hpp
  include/vapours/results/settings_results.hpp
  include/vapours/results/debug_results.hpp
  include/vapours/results/cal_results.hpp
  include/vapours/results/i2c_results.hpp
  include/vapours/results/results_common.hpp
  include/vapours/results/time_results.hpp
  include/vapours/results/vi_results.hpp
  include/vapours/results/ns_results.hpp
  include/vapours/results/fs_results.hpp
  include/vapours/results/hipc_results.hpp
  include/vapours/results/os_results.hpp
  include/vapours/results/ro_results.hpp
  include/vapours/results/loader_results.hpp
  include/vapours/results/err_results.hpp
  include/vapours/results/ncm_results.hpp
  include/vapours/results/svc_results.hpp
  include/vapours/results/nim_results.hpp
  include/vapours/results/exosphere_results.hpp
  include/vapours/results/creport_results.hpp
  include/vapours/results/erpt_results.hpp
  include/vapours/results/kvdb_results.hpp
  include/vapours/results/dmnt_results.hpp
  include/vapours/results/updater_results.hpp
  include/vapours/results/fatal_results.hpp
  include/vapours/results/sm_results.hpp
  include/vapours/results/psc_results.hpp
  include/vapours/results/nfp_results.hpp
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
    # -Wextra-semi vapours header have extra semis
)
