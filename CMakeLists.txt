cmake_minimum_required(VERSION 3.17)
project(oop)

set(CMAKE_CXX_STANDARD 14)

add_executable(
        oop FinalProject/main.cpp
        FinalProject/grid.hpp
        FinalProject/grid.cpp
        FinalProject/lifed_object.hpp
        FinalProject/lifed_object.cpp
)
