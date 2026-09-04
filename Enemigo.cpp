#include "Enemigo.h"
#include <iostream>

/*
 * IMPLEMENTACIÓN DEL CONSTRUCTOR:
 * Asigna los valores a los atributos privados.
 * Aplica las reglas de validación:
 * Vida (0-100) y Ataque (1-20).
 */
Enemigo::Enemigo(std::string _nombre, int _vida, int _ataque) {
    nombre = _nombre;

    // Validación de vida: 0 - 100
    if (_vida < 0) {
        vida = 0;
    } else if (_vida > 100) {
        vida = 100;
    } else {
        vida = _vida;
    }

    // Validación de ataque: 1 - 20
    if (_ataque < 1) {
        ataque = 1;
    } else if (_ataque > 20) {
        ataque = 20;
    } else {
        ataque = _ataque;
    }
}

/*
 * GETTERS:
 * Retornan los valores de los atributos privados.
 */
int Enemigo::getVida() const {
    return vida;
}

int Enemigo::getAtaque() const {
    return ataque;
}

std::string Enemigo::getNombre() const {
    return nombre;
}

/*
 * SETTER:
 * Modifica la vida aplicando la validación de 0 a 100.
 */
void Enemigo::setVida(int _vida) {
    if (_vida < 0) {
        vida = 0;
    } else if (_vida > 100) {
        vida = 100;
    } else {
        vida = _vida;
    }
}

/*
 * MÉTODO ATACAR:
 * Retorna el valor actual del atributo ataque.
 */
int Enemigo::atacar() const {
    return ataque;
}

/*
 * MÉTODO imprimirEstado:
 * Imprime las estadísticas del enemigo.
 */
void Enemigo::imprimirEstado() const {
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Vida: " << vida << std::endl;
    std::cout << "Ataque: " << ataque << std::endl;
}
