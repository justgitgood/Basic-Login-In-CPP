
# Minimum required version of CMake
cmake_minimum_required(VERSION 3.10)

# Project name and version
project(Login VERSION 1.0 LANGUAGES CXX)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(${PROJECT_SOURCE_DIR}/headers)

# Source files
set(SOURCES
    source/main.cpp
    source/login.cpp
    source/filehandler.cpp
)

# Add the executable
add_executable(${PROJECT_NAME} ${SOURCES})