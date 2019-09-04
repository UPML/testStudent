cmake_minimum_required(VERSION 3.8)
project(testStudent)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -fsanitize=address -g -fsanitize=address,undefined -fno-omit-frame-pointer -g -Wall -Wconversion -Wextra")

set(SOURCE_FILES main.cpp)
add_executable(testStudent ${SOURCE_FILES})