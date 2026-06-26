cmake_minimum_required(VERSION 3.28)
project(cpp23_template LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(main main.cpp calculator.cpp io.cpp)

target_compile_options(main PRIVATE
-pedantic-errors
-Wall
-Wextra
-Wsign-conversion
-Weffc++
-Werror
)

