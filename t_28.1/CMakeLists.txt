cmake_minimum_required(VERSION 3.6)
project(t_28_1)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Person.cpp Person.h Man.cpp Man.h Woman.cpp Woman.h)
add_executable(t_28_1 ${SOURCE_FILES})