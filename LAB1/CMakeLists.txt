cmake_minimum_required(VERSION 3.15)
project(LAB1)

set(CMAKE_CXX_STANDARD 17)

add_executable(LAB1 main.cpp Message.cpp Message.h DurationLogger.cpp DurationLogger.h MessageStore.cpp MessageStore.h)