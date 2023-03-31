cmake_minimum_required(VERSION 3.24)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled part1/main.cpp part1/s21_graph.h part1/load.cpp s21_graph_algorithms.h s21_graph.h)
