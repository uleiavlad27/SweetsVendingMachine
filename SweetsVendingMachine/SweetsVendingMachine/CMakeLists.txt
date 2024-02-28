cmake_minimum_required(VERSION 3.24)
project(SweetsVendingMachine)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(SweetsVendingMachine
        FileRepository.cpp
        FileRepository.h
        main.cpp
        Produs.cpp
        Produs.h
        Repository.cpp
        Repository.h
        Service.cpp
        Service.h
        Tests.cpp
        Tests.h
        UI.cpp
        UI.h)
