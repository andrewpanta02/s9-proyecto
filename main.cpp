#include <iostream>
#include <string>

// INSTRUCCIÓN: Incluye aquí tus archivos de cabecera (.h)
#include "Jugador.h"
#include "Enemigo.h"

int main() {
    /* -----------------------------------------------------------
     * FASE 1: VALORES VÁLIDOS (Caso Ideal)
     * Aquí verificamos que tu código funcione con datos normales.
     * ----------------------------------------------------------- */
    Jugador jugador1("Carla", 100, 15);
    Enemigo enemigo1("Ogro", 50, 10);

    std::cout << "=== FASE 1: CASO IDEAL ===" << std::endl;
    std::cout << "Estadisticas del Jugador" << std::endl;
    jugador1.imprimirEstado();

    std::cout << "\nEstadisticas del Enemigo" << std::endl;
    enemigo1.imprimirEstado();


    /* -----------------------------------------------------------
     * FASE 2: ENCAPSULAMIENTO (Validación de Límites)
     * Probamos si tu constructor protege los datos (Vida 0-100, Ataque 1-20).
     * ----------------------------------------------------------- */
    std::cout << "\n=== FASE 2: PRUEBA DE LIMITES ===" << std::endl;

    // Si tu lógica es correcta: 999 -> 100 y -50 -> 1
    Jugador jugadorBug("Bug", 999, -50);

    std::cout << "Revisando limites (Esperado: Vida 100, Ataque 1):" << std::endl;
    jugadorBug.imprimirEstado();

    //Esta prueba tiene que ser ajustado
    Enemigo e("Bug", -10, 99);
    std::cout << "Revisando limites de Enemigo (Esperando: Vida , Ataque): " << std::endl;
    e.imprimirEstado();


    /* -----------------------------------------------------------
     * FASE 3: MÉTODOS DE ACCIÓN (Getters, Setters y Ataque)
     * Estas pruebas son las que usará el examen automático (Tests).
     * ----------------------------------------------------------- */
    std::cout << "\n=== FASE 3: GETTERS, SETTERS Y ACCIONES ===" << std::endl;

    // Probar el Setter con validación
    std::cout << "Modificando vida a -20 (Esperado: 0)..." << std::endl;
    jugador1.setVida(-20);
    std::cout << "Vida actual: " << jugador1.getVida() << std::endl;

    // Probar el método atacar
    std::cout << "Poder de ataque de " << jugador1.getNombre() << ": "
              << jugador1.atacar() << std::endl;

    /*
     * RETO FINAL:
     * Si todo lo anterior funciona, intenta crear un nuevo Jugador
     * pidiendo los datos al usuario con 'std::cin'.
     */

    return 0;
}