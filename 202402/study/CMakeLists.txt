cmake_minimum_required(VERSION 3.28)
project(study C)

set(CMAKE_C_STANDARD 11)

add_executable(study
        malloc.c
        calloc.c)
