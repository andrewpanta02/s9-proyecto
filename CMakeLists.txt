cmake_minimum_required(VERSION 3.16)
project(S9_Juego1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

enable_testing()

# ------------------------
# Catch2 v2 (Para tus pruebas automatizadas)
# ------------------------
include(FetchContent)
FetchContent_Declare(
        Catch2
        GIT_REPOSITORY https://github.com/catchorg/Catch2.git
        GIT_TAG v2.13.10
)
FetchContent_MakeAvailable(Catch2)

# ------------------------
# Aplicación Principal
# ------------------------
add_executable(Juego1
        main.cpp
        Jugador.cpp
        Jugador.h
        Enemigo.cpp
        Enemigo.h
)

# ------------------------
# Tests
# ------------------------
# Esto buscará la carpeta 'tests'
add_subdirectory(tests)