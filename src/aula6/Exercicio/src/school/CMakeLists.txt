cmake_minimum_required(VERSION 3.15)
project(school CXX)


add_library(school)

target_sources(
  school
  PUBLIC
      calculus.hpp
      course.hpp
      datastructures.hpp
      functions.hpp 
      student.hpp
  PRIVATE
      calculus.cpp
      course.cpp
      datastructures.cpp
      functions.cpp
      student.cpp
)

target_include_directories(
  school
  PUBLIC
      ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(
  school
  PRIVATE
    project_options  
)
