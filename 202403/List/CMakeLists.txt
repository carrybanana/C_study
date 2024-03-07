cmake_minimum_required(VERSION 3.28)
project(List C)

set(CMAKE_C_STANDARD 11)

add_executable(List
        List.h
        List.c
        test.c)
