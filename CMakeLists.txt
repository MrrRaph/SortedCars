cmake_minimum_required(VERSION 3.20)
project(structs C)

set(CMAKE_C_STANDARD 99)

add_executable(structs src/main.c includes/car.h src/car.c includes/bubbleSort.h src/bubbleSort.c includes/list.h src/liste.c)
