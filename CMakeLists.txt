cmake_minimum_required(VERSION 3.10)
project(EmbeddedSensorLogger)

# Set C++ standard to 17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED on)

# Set the source files
set(SRC_FILES
    src/logger.cpp
    src/main.cpp
    src/sensor.cpp
    src/simulator.cpp
)

# Main executable
add_executable(EmbeddedSensorLogger ${SRC_FILES})

# Add include directory
target_include_directories(EmbeddedSensorLogger PUBLIC include/)
