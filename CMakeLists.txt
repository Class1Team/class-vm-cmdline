cmake_minimum_required(VERSION 3.29)
project(class_vm_cmdline)

set(CMAKE_CXX_STANDARD 23)

add_executable(class_vm_cmdline main.cpp
        readini.h
        main.cpp)
