cmake_minimum_required(VERSION 3.6)
project(IntroInfoSecP1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES Part1.c main_program.c Part1.h student.h student.c Part2.c Part2.h)
add_executable(IntroInfoSecP1 ${SOURCE_FILES})