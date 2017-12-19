cmake_minimum_required(VERSION 3.5)
project(MBRgenerator)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Werror")

set(SOURCE_FILES src/main.c src/mbr_win7.h)
add_executable(MBRgenerator ${SOURCE_FILES})

