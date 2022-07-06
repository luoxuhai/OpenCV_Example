cmake_minimum_required(VERSION 3.22)
project(OpenCV_Example)

set(CMAKE_CXX_STANDARD 14)

add_executable(OpenCV_Example src/main.cpp)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
target_link_libraries(OpenCV_Example ${OpenCV_LIBS})