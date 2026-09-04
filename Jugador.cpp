#include "Jugador.h"
#include <iostream>

/* * INSTRUCCIÓN: Implementación del Constructor
 * Debes asignar los valores a los atributos privados.
 * Aplica las reglas de validación: Vida (0-100) y Ataque (1-20).
 */
Jugador::Jugador(std::string _nombre, int _vida, int _ataque) {
    // Tu código aquí
}

/* * GETTERS:
 * Implementa estos métodos para que los tests puedan leer los atributos.
 */
int Jugador::getVida() const {
    return 0; // Cambiar por el atributo correcto
}

int Jugador::getAtaque() const {
    return 0; // Cambiar por el atributo correcto
}

std::string Jugador::getNombre() const {
    return ""; // Cambiar por el atributo correcto
}

/* * SETTER:
 * Debe permitir cambiar la vida, pero aplicando la misma
 * validación que en el constructor (0-100).
 */
void Jugador::setVida(int _vida) {
    // Tu código aquí
}

/* * MÉTODO ATACAR:
 * Por ahora, solo debe retornar el valor del atributo ataque.
 */
int Jugador::atacar() const {
    return 0; // Cambiar por el atributo correcto
}

/* * MÉTODO imprimirEstado:
 * Debe mostrar los datos exactamente como pide el README.
 */
void Jugador::imprimirEstado() const {
    // Tu código aquí
}