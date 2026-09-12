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

    // Esta prueba tiene que ser ajustado
    Enemigo e("Bug", -10, 99);
    std::cout << "Revisando limites de Enemigo (Esperando: Vida 0, Ataque 20): " << std::endl;
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


    /* -----------------------------------------------------------
     * FASE 4: SISTEMA DE DAÑO
     * Probamos que Jugador y Enemigo puedan recibir daño.
     * ----------------------------------------------------------- */
    std::cout << "\n=== FASE 4: SISTEMA DE DAÑO ===" << std::endl;

    // Creamos nuevos personajes para comenzar el combate con vida completa.
    Jugador jugadorCombate("Carla", 100, 15);
    Enemigo enemigoCombate("Ogro", 50, 10);

    std::cout << "\nEstado inicial del combate:" << std::endl;
    jugadorCombate.imprimirEstado();
    enemigoCombate.imprimirEstado();

    // El jugador ataca al enemigo
    std::cout << "\n" << jugadorCombate.getNombre()
              << " ataca al " << enemigoCombate.getNombre()
              << " por " << jugadorCombate.atacar() << " de daño." << std::endl;

    enemigoCombate.recibirDanio(jugadorCombate.atacar());

    std::cout << "Estado del enemigo despues del ataque:" << std::endl;
    enemigoCombate.imprimirEstado();

    // El enemigo ataca al jugador
    std::cout << "\n" << enemigoCombate.getNombre()
              << " ataca a " << jugadorCombate.getNombre()
              << " por " << enemigoCombate.atacar() << " de daño." << std::endl;

    jugadorCombate.recibirDanio(enemigoCombate.atacar());

    std::cout << "Estado del jugador despues del ataque:" << std::endl;
    jugadorCombate.imprimirEstado();


    /* -----------------------------------------------------------
     * FASE 5: COMBATE FINAL
     * El jugador y el enemigo se atacan hasta que uno llegue a 0 de vida.
     * ----------------------------------------------------------- */
    std::cout << "\n=== FASE 5: COMBATE FINAL ===" << std::endl;

    Jugador jugadorFinal("Carla", 100, 15);
    Enemigo enemigoFinal("Ogro", 50, 10);

    int turno = 1;

    while (jugadorFinal.getVida() > 0 && enemigoFinal.getVida() > 0) {

        std::cout << "\n--- Turno " << turno << " ---" << std::endl;

        // El jugador ataca
        std::cout << jugadorFinal.getNombre()
                  << " ataca al " << enemigoFinal.getNombre()
                  << " por " << jugadorFinal.atacar()
                  << " de daño." << std::endl;

        enemigoFinal.recibirDanio(jugadorFinal.atacar());

        std::cout << "Vida del enemigo: "
                  << enemigoFinal.getVida() << std::endl;

        // Revisamos si el enemigo sigue vivo
        if (enemigoFinal.getVida() <= 0) {
            break;
        }

        // El enemigo ataca
        std::cout << enemigoFinal.getNombre()
                  << " ataca a " << jugadorFinal.getNombre()
                  << " por " << enemigoFinal.atacar()
                  << " de daño." << std::endl;

        jugadorFinal.recibirDanio(enemigoFinal.atacar());

        std::cout << "Vida del jugador: "
                  << jugadorFinal.getVida() << std::endl;

        turno++;
    }

    // Determinar el ganador
    std::cout << "\n=== RESULTADO DEL COMBATE ===" << std::endl;

    if (jugadorFinal.getVida() > 0) {
        std::cout << "Ganador: " << jugadorFinal.getNombre() << std::endl;
    } else {
        std::cout << "Ganador: " << enemigoFinal.getNombre() << std::endl;
    }

    return 0;
}