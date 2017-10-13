cmake_minimum_required(VERSION 3.6)
project(8_1_kleinsteZahl)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(8_1_kleinsteZahl ${SOURCE_FILES})