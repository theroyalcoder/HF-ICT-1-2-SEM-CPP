cmake_minimum_required(VERSION 3.6)
project(a82_kleinstezahl)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(a82_kleinstezahl ${SOURCE_FILES})