cmake_minimum_required(VERSION 3.26)
project(u14)

set(CMAKE_CXX_STANDARD 17)

add_executable(u14 "main.cpp"
        "Geometrische Objekte/Punkt.cpp"
        "Geometrische Objekte/Line.cpp"
        "Geometrische Objekte/Line.h"
        "Geometrische Objekte/Kreis.cpp"
        "Geometrische Objekte/Kreis.h"
)
