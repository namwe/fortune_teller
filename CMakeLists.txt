cmake_minimum_required(VERSION 3.16)
project(genie)

set(CMAKE_CXX_STANDARD 20)

add_executable(genie main.cpp Player.cpp Player.h Nationality.cpp Nationality.h Fortune.cpp Fortune.h)