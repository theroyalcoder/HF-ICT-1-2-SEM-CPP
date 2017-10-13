cmake_minimum_required(VERSION 3.6)
project(constant)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp constantclass.cpp constantclass.h)
add_executable(constant ${SOURCE_FILES})