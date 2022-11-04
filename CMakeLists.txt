cmake_minimum_required(VERSION 3.23)
project(overloading_overriding)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(overloading_overriding
        overloading-overriding.cpp)

add_executable(overloading-overriding overloading-overriding.cpp)