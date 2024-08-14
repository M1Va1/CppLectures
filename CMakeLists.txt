cmake_minimum_required(VERSION 3.10)
project(MyProjects)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add subdirectories
add_subdirectory(template/homework_printer/solution)
add_subdirectory(template/homework_vec/solution)
add_subdirectory(template/homework_vec/bonus/solution)
add_subdirectory(template/homework_pair/solution)
add_subdirectory(template/usage_example)
