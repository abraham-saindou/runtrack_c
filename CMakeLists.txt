cmake_minimum_required(VERSION 3.26)
project(runtrack_c C)

set(CMAKE_C_STANDARD 17)

add_executable(runtrack_c main.c

)
target_compile_options(${PROJECT_NAME} PRIVATE
        -Wall -Wextra -Werror
)

