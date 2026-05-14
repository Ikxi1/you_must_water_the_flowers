cmake_minimum_required(VERSION 4.2)
project(you_must_water_the_flowers C)

set(CMAKE_C_STANDARD 90)

add_executable(you_must_water_the_flowers source/main.c)

target_link_libraries(you_must_water_the_flowers raylib)
