cmake_minimum_required(VERSION 3.6)
project(t24_Stack)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp stack.cpp stack.h)
add_executable(t24_Stack ${SOURCE_FILES})