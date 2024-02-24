cmake_minimum_required(VERSION 3.25)
project(DSA)

set(CMAKE_CXX_STANDARD 17)
set(TRIE trees/Trie.cpp)
set(RECURSION recursion/misc.cpp recursion/exponent.cpp)
set(LAB labs/lab05_2021016/Q1.cpp)
set(ASSIGNMENT assignments/ass1/2021016_Q4.cpp)

add_executable(DSA ${LAB})
