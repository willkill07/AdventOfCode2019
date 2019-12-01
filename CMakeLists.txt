cmake_minimum_required (VERSION 3.14)

project (AdventOfCode2019 CXX)

set(CMAKE_BUILD_TYPE Release)
set(CMAKE_EXPORT_COMPILE_COMMANDS On)

if (MSVC)
  set(CXX_TARGET_FLAGS /O2g /W3)
else()
  set(CXX_TARGET_FLAGS -O3 -march=native -Wall -Wextra -Wpedantic -pedantic -pedantic-errors)
endif()

set(THREADS_PREFER_PTHREAD_FLAG On)
find_package(Threads REQUIRED)

include(FetchContent)

set(RANGE_V3_NO_HEADER_CHECK On)
set(BUILD_TESTING Off)
set(RANGE_V3_TESTS Off)
set(RANGE_V3_DOCS Off)

FetchContent_Declare(
  range_v3
  GIT_REPOSITORY https://github.com/ericniebler/range-v3.git
  GIT_TAG 0.9.1)
FetchContent_GetProperties(range_v3)
if(NOT range_v3_POPULATED)
  FetchContent_Populate(range_v3)
  add_subdirectory(${range_v3_SOURCE_DIR} ${range_v3_BINARY_DIR})
endif()

include_directories(include)
add_subdirectory(src)
