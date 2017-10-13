cmake_minimum_required(VERSION 3.6)
project(28_1_vererbung)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp person.cpp person.h man.cpp man.h woman.cpp woman.h)
add_executable(28_1_vererbung ${SOURCE_FILES})