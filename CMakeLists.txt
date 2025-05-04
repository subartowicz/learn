cmake_minimum_required(VERSION 3.31)
project(learn C)

set(CMAKE_C_STANDARD 23)

add_executable(learn main.c

        swap/swap.c
        swap/swap.h)
