cmake_minimum_required(VERSION 3.11)
project(PNOGOL)

set(CMAKE_CXX_STANDARD 17)

add_executable(PNOGOL main.cpp Commands/Commands.h Commands/Commands.cpp)