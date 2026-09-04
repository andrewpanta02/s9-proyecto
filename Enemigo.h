#ifndef ENEMIGO_H
#define ENEMIGO_H

#include <iostream>
#include <string>

class Enemigo {
private:
    /*
     * ATRIBUTOS PRIVADOS:
     * Nadie fuera de esta clase puede modificarlos directamente.
     * Esto es el "Encapsulamiento".
     */
    std::string nombre;
    int vida;
    int ataque;

public:
    /*
     * CONSTRUCTOR:
     * Se llama automáticamente al crear el objeto.
     * Debe validar que:
     * - La vida esté entre 0 y 100.
     * - El ataque esté entre 1 y 20.
     */
    Enemigo(std::string _nombre, int _vida, int _ataque);

    /*
     * MÉTODOS GETTERS:
     * Permiten leer los valores de los atributos privados.
     */
    int getVida() const;
    int getAtaque() const;
    std::string getNombre() const;

    /*
     * SETTER:
     * Modifica la vida y aplica validación de 0 a 100.
     */
    void setVida(int _vida);

    /*
     * MÉTODO ATACAR:
     * Retorna el valor actual del atributo ataque.
     */
    int atacar() const;

    /*
     * MÉTODO imprimirEstado:
     * Imprime las estadísticas del enemigo.
     */
    void imprimirEstado() const;
};

#endif // ENEMIGO_H
