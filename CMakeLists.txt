cmake_minimum_required(VERSION 3.26)
project(u14)

set(CMAKE_CXX_STANDARD 17)

add_executable(u14 main.cpp
        Punkt.cpp
        Line.cpp
        Line.h
        Kreis.cpp
        Kreis.h
        Farbe.cpp
        Farbe.h)
