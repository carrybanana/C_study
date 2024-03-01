cmake_minimum_required(VERSION 3.28)
project(SeqList C)

set(CMAKE_C_STANDARD 11)

add_executable(SeqList
        SeqList.h
        SeqList.c
        test.c
        Contact.h
        Contact.c)
