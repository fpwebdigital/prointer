cmake_minimum_required(VERSION 3.8)
project(prointer)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES cadastro.c)
add_executable(prointer ${SOURCE_FILES})