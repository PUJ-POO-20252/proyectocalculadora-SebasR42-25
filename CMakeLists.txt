cmake_minimum_required(VERSION 4.0)
project(Proyecto_1)

set(CMAKE_CXX_STANDARD 20)

add_executable(Proyecto_1 main.cpp
        matematicas.cpp
        matematicas.h
        matriz_utils.cpp
        matriz_utils.h
        Transponer.cpp
        Transponer.h
)
