cmake_minimum_required(VERSION 3.6)
project(27_1_Static_stable)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp MyStatic.cpp MyStatic.h)
add_executable(27_1_Static_stable ${SOURCE_FILES})