cmake_minimum_required(VERSION 3.21)
project(projeto2_aula C)

set(CMAKE_C_STANDARD 17)

include(FetchContent)

FetchContent_Declare(
        libprg
       # GIT_REPOSITORY https://github.com/emersonmello/libprg.git
       # GIT_TAG origin/main
        # or GIT_TAG 0.0.1

        # You can reference a local directory instead
        URL file:///${CMAKE_CURRENT_SOURCE_DIR}/../libprg-xfcoguevara99
)
FetchContent_MakeAvailable(libprg)

add_executable(projeto2_aula main.c
        calculadora.c
        calculadora.h)

# linking libprg
target_link_libraries(projeto2_aula PUBLIC libprg)