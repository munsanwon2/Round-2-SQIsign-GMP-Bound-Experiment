# SPDX-License-Identifier: Apache-2.0

cmake_minimum_required(VERSION 3.13)
project(SQIsign VERSION 2.0 LANGUAGES C ASM)

set(SQISIGN_SO_VERSION "0")
set(CMAKE_C_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

include(CTest)

option(ENABLE_STRICT "Build with strict compile options." ON)
option(ENABLE_TESTS  "Enable compilation of tests." ON)
option(ENABLE_CT_TESTING  "Enable compilation for constant time testing." OFF)
option(ENABLE_SIGN "Build with sign functionality" ON)
option(ENABLE_GMP_PEAK_BITS "Build with the signing GMP bit-length observer" OFF)
set(GMP_LIBRARY "SYSTEM" CACHE STRING "Which version of GMP to use: SYSTEM, BUILD or MINI")
set(GF_RADIX "AUTO" CACHE STRING "Set the radix for the gf module (currently supported values: 32 or 64), or AUTO.")

if (NOT DEFINED SQISIGN_BUILD_TYPE)
  SET(SQISIGN_BUILD_TYPE "ref")
endif()

if (NOT SQISIGN_BUILD_TYPE STREQUAL "ref")
  message(FATAL_ERROR "The experiment parameter port requires the portable reference field backend (ref)")
endif()
add_compile_definitions(SQISIGN_BUILD_TYPE_REF SQISIGN_GF_IMPL_REF)

if (ENABLE_GMP_PEAK_BITS)
  if (NOT ENABLE_SIGN OR NOT GMP_LIBRARY STREQUAL "SYSTEM")
    message(FATAL_ERROR "ENABLE_GMP_PEAK_BITS requires ENABLE_SIGN=ON and GMP_LIBRARY=SYSTEM")
  endif()
  add_compile_definitions(SQISIGN_GMP_PEAK_BITS)
endif()

SET(SVARIANT_S "lvl1;lvl3;lvl5")

include(.cmake/flags.cmake)
include(.cmake/sanitizers.cmake)
include(.cmake/target.cmake)
if(ENABLE_SIGN)
	include(.cmake/gmpconfig.cmake)
	add_compile_definitions(ENABLE_SIGN)
endif()

set(BM_BINS "" CACHE INTERNAL "List of benchmark binaries")

set(SELECT_IMPL_TYPE ${PROJECT_SOURCE_DIR}/.cmake/impl_type.cmake)
set(SELECT_SQISIGN_VARIANT ${PROJECT_SOURCE_DIR}/.cmake/sqisign_variant.cmake)

set(INC_PUBLIC ${PROJECT_SOURCE_DIR}/include)

add_subdirectory(src)
if (ENABLE_GMP_PEAK_BITS)
  add_subdirectory(experiments/gmp_peak_bits)
endif()
add_subdirectory(apps)
add_subdirectory(test)

include(.cmake/bm.cmake)

#if(ENABLE_TESTS)
#    enable_testing()
#    add_subdirectory(test)
#endif()
