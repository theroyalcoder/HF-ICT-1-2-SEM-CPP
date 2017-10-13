cmake_minimum_required(VERSION 3.6)
project(t23)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Point.cpp Point.h)
add_executable(t23 ${SOURCE_FILES})