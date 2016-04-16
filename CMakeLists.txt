cmake_minimum_required(VERSION 3.5)
project(HackerrankCpp)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES interval_selection.cpp)
add_executable(HackerrankCpp ${SOURCE_FILES})