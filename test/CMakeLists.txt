cmake_minimum_required(VERSION 3.16)
project(test LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)

add_executable(myTest test.cpp)
add_test(myGtest myTest)
target_link_libraries(myTest PUBLIC myClass gtest gtest_main pthread)
