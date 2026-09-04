## 🕹️ Semana 9 — Encapsulamiento en C++

## 🎮 Descripción
En esta etapa, sentaremos las bases de nuestro RPG creando las clases
Jugador y Enemigo. Aprenderás a proteger los datos internos
(Encapsulamiento) para asegurar que las estadísticas sean realistas.
## 📁 Estructura
Tu proyecto debe crear/completar los siguientes:

Jugador.h / Jugador.cpp 
Enemigo.h / Enemigo.cpp
main.cpp (Donde crearás una instancia de cada uno)
CMakeLists.txt: Configuración de compilación.
## 🧩 Requisitos

### Clase `Jugador` y  `Enemigo`

#### Atributos (privados)
std::string nombre
int vida (Rango válido: 0 – 100)
int ataque (Rango válido: 1 – 20)

#### Métodos públicos
.Método, Constructor - Tipo, Clase(...) - Descripción, Valida que la vida y el ataque estén en los rangos permitidos al crear el objeto.
.Método, Getters - Tipo, getNombre(), getVida(), getAtaque() - Descripción, Retornan los valores de los atributos privados.
.Método, Setter - Tipo, setVida(int) - Descripción, Modifica la vida, pero debe aplicar la misma validación (0-100) que el constructor.
.Método, Acción - Tipo, atacar() - Descripción, Retorna el valor actual de ataque del personaje.
.Método, Estado - Tipo, imprimirEstado() - Descripción, Imprime las estadísticas con el formato exacto de la "Salida Esperada".

- Si un valor recibido es menor al mínimo o mayor al máximo, tu código debe ajustarlo automáticamente
al límite más cercano. Por ejemplo: si se intenta asignar -20 de vida, el objeto debe guardar 0.
#### Salida Esperada

Al ejecutar tu main.cpp, la consola debe mostrar:

--- Estadisticas del Jugador ---
Nombre: Carla
Vida: 100
Ataque: 15

--- Estadisticas del Enemigo ---
Nombre: Ogro
Vida: 50
Ataque: 10

### Compilacion
Usa el menú desplegable de CLion (junto al botón Play) para cambiar entre 'Juego1'
(tu programa) y 'ejecutable_tests' (las pruebas).

Asegúrate de agregar Jugador.cpp
y Enemigo.cpp dentro del comando
add_executable en tu CMakeLists.txt
para que el compilador los reconozca.