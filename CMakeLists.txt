cmake_minimum_required(VERSION 4.0)
project(Animales)

set(CMAKE_CXX_STANDARD 20)

add_executable(Animales main.cpp
        Ave.cpp
        Ave.h
        Felino.cpp
        Felino.h
        Canino.cpp
        Canino.h)
