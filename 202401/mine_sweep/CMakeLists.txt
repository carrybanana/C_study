cmake_minimum_required(VERSION 3.27)
project(mine_sweep C)

set(CMAKE_C_STANDARD 11)

add_executable(mine_sweep
        game.c
        game.h
        test.c)
