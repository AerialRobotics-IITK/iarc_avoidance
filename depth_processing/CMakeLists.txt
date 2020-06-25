cmake_minimum_required(VERSION 2.8.3)
project(depth_processing)

find_package(catkin_simple REQUIRED)
catkin_simple(ALL_DEPS_REQUIRED)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

find_package(PCL 1.7 REQUIRED)
include_directories(${PCL_LIBRARY_DIRS})

add_definitions(-std=c++17)
set(CMAKE_BUILD_TYPE Release)

cs_add_library(depth_porcessing_lib src/depth_processing.cpp)

cs_install()
cs_export()