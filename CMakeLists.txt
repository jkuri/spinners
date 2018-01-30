cmake_minimum_required(VERSION 2.8)
project(spinners)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
  set(CMAKE_CXX_FLAGS "-Werror -Wall -pedantic")
endif()

include_directories(${spinners_SOURCE_DIR}/include)
add_executable(example examples/example.cpp)
