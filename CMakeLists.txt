cmake_minimum_required(VERSION 3.17)
project(testISO8583 C)

set(CMAKE_C_STANDARD 99)

add_executable(testISO8583 src/main.c  src/ISO8583.h src/ISO8583.c src/bitmap.h "src/bitmap.c")