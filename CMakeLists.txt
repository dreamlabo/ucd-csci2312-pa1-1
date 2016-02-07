cmake_minimum_required(VERSION 3.3)
project(PA_1_Spring2016)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Point.cpp Point.h PointTests.cpp PointTests.h ErrorContext.cpp ErrorContext.h Area.cpp Area.h)
add_executable(PA_1_Spring2016 ${SOURCE_FILES})