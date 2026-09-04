# tests/CMakeLists.txt

# Cambiamos runTests por ejecutable_tests para que coincida con tu "Run command"
add_executable(ejecutable_tests
        test_jugador.cpp
        ../Jugador.cpp
        ../Enemigo.cpp
)

# Esto permite que test_jugador.cpp encuentre a Jugador.h usando "../Jugador.h"
target_include_directories(ejecutable_tests PRIVATE ..)

# Vinculamos la librería de pruebas
target_link_libraries(ejecutable_tests PRIVATE Catch2::Catch2)

# Esto es útil si quieres correr los tests manualmente en la terminal con 'ctest'
add_test(NAME JugadorTests COMMAND ejecutable_tests)