CMAKE_MINIMUM_REQUIRED(VERSION 3.15)
project(insertion_sort)

add_executable(insertion_sort)

target_sources(
    insertion_sort
    PRIVATE
        insertion_sort.hpp
	insertion_sort.cpp 
	main.cpp
)

#Tarcisio's suggestion
target_compile_features(
    insertion_sort
    PRIVATE
        cxx_std_20
)



