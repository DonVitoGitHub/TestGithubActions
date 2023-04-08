cmake_minimum_required(VERSION 3.16)
set(CMAKE_CXX_STANDARD 20)

project(myClass)

add_library (myClass myClass.cpp)
target_include_directories(myClass PUBLIC .)
