#ifndef JUGADOR_H
#define JUGADOR_H

#include <iostream>
#include <string>

class Jugador {
private:
    /* * ATRIBUTOS PRIVADOS:
     * Nadie fuera de esta clase puede modificarlos directamente.
     * Esto es el "Encapsulamiento".
     */
    std::string nombre;
    int vida;
    int ataque;

public:
    /* * CONSTRUCTOR:
     * Se llama automáticamente al crear el objeto.
     * AQUÍ es donde debes validar que:
     * - La vida esté entre 0 y 100.
     * - El ataque esté entre 1 y 20.
     */
    Jugador(std::string _nombre, int _vida, int _ataque);

    /* * MÉTODOS GETTERS:
         * Estos métodos permiten que agentes externos (como los tests automáticos)
         * puedan LEER el valor de los atributos sin modificarlos.
         */
    int getVida() const;
    int getAtaque() const;
    std::string getNombre() const;

    // Setters (Usados en "SetVida con valor válido" y "SetVida no negativa")
    // Instrucción: Aquí también deben aplicar validación (0-100)
    void setVida(int _vida);
    //
    void setAtaque(int _ataque);
    // Métodos de acción (Usado en TEST_CASE "Ataque")
    // Por ahora, solo debe retornar el valor del atributo ataque.
    int atacar() const;

    /* * ACCIONES:
     * Imprime el estado actual siguiendo el formato del README.
     */
    void imprimirEstado() const;

    /*
     * TIP PARA ALUMNOS:
     * No olviden que la lógica (los 'if' y los 'cout') va en Jugador.cpp.
     * Aquí en el .h solo declaramos "qué" existe, no "cómo" funciona.
     */
};

#endif // JUGADOR_H