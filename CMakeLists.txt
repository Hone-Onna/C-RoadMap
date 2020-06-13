cmake_minimum_required(VERSION 3.16)
project(croadmap C)

set(CMAKE_C_STANDARD 99)

# Execute single C file
add_executable(croadmap main.c)

# Execute C file other directory
add_executable(croadmap_math math/radius.c)
add_executable(croadmap_math_int math/integer_greater.c)
add_executable(croadmap_math-rep math/repetition_char.c)

# Other executable
#add_executable(croadmap_dem demo_examples/look.c)
