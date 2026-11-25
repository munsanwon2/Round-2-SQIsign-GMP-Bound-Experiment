# SPDX-License-Identifier: Apache-2.0

foreach(level IN ITEMS 1 3 5)
    add_executable(peak_bits_lvl${level} sign_peak.c)
    target_link_libraries(peak_bits_lvl${level} PRIVATE sqisign_lvl${level})
    target_compile_definitions(peak_bits_lvl${level} PRIVATE PEAK_NIST_LEVEL=${level})
endforeach()
