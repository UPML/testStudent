cmake_minimum_required(VERSION 3.8)
project(testStudent)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -fsanitize=address,undefined -fno-omit-frame-pointer -g -Wall -Wconversion -Wextra -Werror")


add_executable(Module1Task1 Module1/Task1/main.cpp)
add_executable(Module1Task2 Module1/Task2/main.cpp)