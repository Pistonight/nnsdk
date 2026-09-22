/**
 * @file nn.h
 * @brief Barebones NN functions, such as init and nnMain.
 */

#pragma once

#include <cstdint>

namespace nn {
struct ApplicationId {
    uint64_t m_Id;
};
}  // namespace nn

#ifdef __cplusplus
extern "C" {
#endif

void nninitStartup();
void nnMain();

void _init();
void _fini();
// NOLINTNEXTLINE(bugprone-reserved-identifier)
void __nnDetailNintendoSdkRuntimeObjectFileRefer();
// NOLINTNEXTLINE(bugprone-reserved-identifier)
void __nnDetailNintendoSdkRuntimeObjectFile();
// NOLINTNEXTLINE(bugprone-reserved-identifier)
void __nnDetailNintendoSdkNsoFileRefer();

// NOLINTNEXTLINE(bugprone-reserved-identifier)
void __nnmusl_init_dso_0();
// NOLINTNEXTLINE(bugprone-reserved-identifier)
void __nnmusl_fini_dso_0();
// NOLINTNEXTLINE(bugprone-reserved-identifier)
void __nnDetailNintendoSdkNsoFile_0();

#ifdef __cplusplus
}
#endif
