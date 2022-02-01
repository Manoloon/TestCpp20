cmake_minimum_required(VERSION 3.21)
project(TestCpp20)

set(CMAKE_CXX_STANDARD 23)
add_executable(TestCpp20 main.cpp ranges.h atomicTest.h)
