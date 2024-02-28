cmake_minimum_required(VERSION 3.15)
project(school CXX)


option(WARNING_AS_ERRORS "Threat compiler warnings as errors" ON)

add_library(
  project_options
  INTERFACE 
)

add_subdirectory(school)

add_executable(main)

target_sources(
  main
  PRIVATE
      main.cpp
)


target_link_libraries(
  main
  PRIVATE
      project_options
      school 
)

target_compile_features(
  project_options
  INTERFACE
      cxx_std_17
)


target_compile_options(
  project_options
  INTERFACE
      -Wall
      -Wextra
      -Wpedantic
)

if(WARNING_AS_ERRORS)
  target_compile_options(
    project_options
    INTERFACE
        -Werror
  )
  
endif()
