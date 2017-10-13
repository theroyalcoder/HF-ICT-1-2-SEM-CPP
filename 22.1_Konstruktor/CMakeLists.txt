cmake_minimum_required(VERSION 3.6)
project(21_1_Rechteck)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp MyRectangle.cpp MyRectangle.h)
add_executable(21_1_Rechteck ${SOURCE_FILES} MyRectangle.cpp MyRectangle.h)