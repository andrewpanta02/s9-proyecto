#include "Jugador.h"
#include <iostream>

/* * INSTRUCCIÓN: Implementación del Constructor
 * Debes asignar los valores a los atributos privados.
 * Aplica las reglas de validación: Vida (0-100) y Ataque (1-20).
 */
Jugador::Jugador(std::string _nombre, int _vida, int _ataque) {
    // Tu código aquí

    nombre = _nombre;

    if (_vida < 0) {
        vida = 0;
    } else if (_vida > 100) {
        vida = 100;
    } else {
        vida = _vida;
    }

    if (_ataque < 1) {
        ataque = 1;
    } else if (_ataque > 20) {
        ataque = 20;
    } else {
        ataque = _ataque;
    }
}

/* * GETTERS:
 * Implementa estos métodos para que los tests puedan leer los atributos.
 */
int Jugador::getVida() const {
    return vida;
}

int Jugador::getAtaque() const {
    return ataque;
}

std::string Jugador::getNombre() const {
    return nombre;
}

/* * SETTER:
 * Debe permitir cambiar la vida, pero aplicando la misma
 * validación que en el constructor (0-100).
 */
void Jugador::setVida(int _vida) {
    // Tu código aquí

    if (_vida < 0) {
        vida = 0;
    } else if (_vida > 100) {
        vida = 100;
    } else {
        vida = _vida;
    }
}

/* * MÉTODO ATACAR:
 * Por ahora, solo debe retornar el valor del atributo ataque.
 */
int Jugador::atacar() const {
    return ataque;
}

/* * MÉTODO imprimirEstado:
 * Debe mostrar los datos exactamente como pide el README.
 */
void Jugador::imprimirEstado() const {
    // Tu código aquí

    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Vida: " << vida << std::endl;
    std::cout << "Ataque: " << ataque << std::endl;
}

