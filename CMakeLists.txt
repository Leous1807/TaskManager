cmake_minimum_required(VERSION 3.25)

project(TaskManager LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 26)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(TaskManager
    src/main.cpp
)

target_include_directories(TaskManager PUBLIC include)
