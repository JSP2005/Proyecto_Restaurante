// Bibliotecas

#include<string>

// Se incluye el archivo de encabezado "menu_entradas.h"
// para heredar la clase `Menu_entradas`.
#include"menu_entradas.h"

using namespace std;

// Clase Entrada_fria
// Esta clase representa una entrada fría,
// derivada de la clase base `Menu_entradas`.
// Se agrega un atributo adicional para manejar la temperatura de la entrada.
class Entrada_fria: public Menu_entradas {

  private:
    // Atributo para almacenar la temperatura de la entrada fría.
    int temperatura;

  public:
    // Constructores:
    Entrada_fria(); // Constructor por defecto.
    Entrada_fria(int temp): temperatura(temp) {}; // Constructor con parámetros.

    // Métodos "get" y "set" para acceder y modificar el atributo `temperatura`.
    int get_temperatura();
    void set_temperatura(int temp);
};

// Constructor por defecto para la clase Entrada_fria.
Entrada_fria::Entrada_fria() {
  temperatura = 0;
}

// Funciones "get" y "set" para Entrada_fria.

int Entrada_fria::get_temperatura() {
  return temperatura;
}

void Entrada_fria::set_temperatura(int temp) {
  temperatura = temp;
}

// Clase Entrada_caliente
// Esta clase representa una entrada caliente,
// derivada de la clase base `Menu_entradas`.
// Se agrega un atributo adicional para manejar el tiempo de calentamiento.
class Entrada_caliente: public Menu_entradas {

  private:
    // Atributo para almacenar el tiempo de calentamiento.
    int tiempo_calentamiento;

  public:
    // Constructores:
    Entrada_caliente(); // Constructor por defecto.
    // Constructor con parámetros.
    Entrada_caliente(int tiemp): tiempo_calentamiento(tiemp) {};

    // Métodos "get" y "set" para
    //acceder y modificar el atributo `tiempo_calentamiento`.
    int get_tiempo_calentamiento();
    void set_tiempo_calentamiento(int tiemp);
};

// Constructor por defecto para la clase Entrada_caliente.
Entrada_caliente::Entrada_caliente() {
  tiempo_calentamiento = 0;
}

// Funciones "get" y "set" para Entrada_caliente.

int Entrada_caliente::get_tiempo_calentamiento() {
  return tiempo_calentamiento;
}

void Entrada_caliente::set_tiempo_calentamiento(int tiemp) {
  tiempo_calentamiento = tiemp;
}
