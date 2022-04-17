cmake_minimum_required(VERSION 3.10)
project(facade)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

file(GLOB SOURCES "formatters/*.cpp" "formatters/*.h")

add_executable(facade
        file_formats.h
        file_formats.cpp
        FileFormatIdentifier.cpp
        FileFormatIdentifier.h
        FileFormatFacade.cpp
        FileFormatFacade.h
        ${SOURCES}
        main.cpp)
