#define CATCH_CONFIG_MAIN  // Catch2 provides the main() here
#include "catch.hpp"
#include "../Jugador.h"

TEST_CASE("Pruebas de Encapsulamiento y Logica - Jugador", "[Jugador]") {

    // Preparación: Creamos un objeto base para las secciones
    Jugador j("Tester", 50, 10);

    SECTION("1. Constructor: Limite Superior (Vida 999 -> 100, Ataque 50 -> 20)") {
        Jugador jBug("Bug", 999, 50);
        REQUIRE(jBug.getVida() == 100);
        REQUIRE(jBug.getAtaque() == 20);
    }

    SECTION("2. Constructor: Limite Inferior (Vida -20 -> 0, Ataque 0 -> 1)") {
        Jugador jWeak("Weak", -20, 0);
        REQUIRE(jWeak.getVida() == 0);
        REQUIRE(jWeak.getAtaque() == 1);
    }

    SECTION("3. Setter: Validacion de Vida (0 - 100)") {
        j.setVida(150); // Intento exceder el máximo
        REQUIRE(j.getVida() == 100);

        j.setVida(-50); // Intento bajar del mínimo
        REQUIRE(j.getVida() == 0);

        j.setVida(75);  // Valor válido
        REQUIRE(j.getVida() == 75);
    }

    SECTION("4. Metodo Atacar: Retorna valor correcto") {
        REQUIRE(j.atacar() == 10);
    }
}