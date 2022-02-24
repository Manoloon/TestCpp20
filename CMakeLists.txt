cmake_minimum_required(VERSION 3.21)
project(TestCpp20)

set(CMAKE_CXX_STANDARD 23)
add_executable(TestCpp20 main.cpp Src/ranges.h Src/atomicTest.h Src/parallelTask.h Src/findSecondInRange.h Src/tuple.h Src/templatePractice.h Src/Calc.h)
