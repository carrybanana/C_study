cmake_minimum_required(VERSION 3.28)
project(SList C)

set(CMAKE_C_STANDARD 11)

add_executable(SList
        SList.h
        SList.c
        test.c)
