// Bibliotecas

#include<string>

// Se incluye el archivo de "menu_postres.h"
// para heredar la clase `Menu_postres`.

#include"menu_postres.h"

using namespace std;

// Clase Postre_frio
// Esta clase representa un postre frío,derivado de la clase base`Menu_postres`.
// Se le agrega un atributo adicional para manejar la temperatura del postre.
class Postre_frio: public Menu_postres {

  private:
    int temperatura; // Atributo para almacenar la temperatura del postre frío.

  public:
    // Constructores:
    Postre_frio(); // Constructor por defecto.
    Postre_frio(int temp): temperatura(temp) {}; // Constructor con parámetros.

    // Métodos "get" y "set" para acceder y modificar el atributo `temperatura`.
    int get_temperatura();
    void set_temperatura(int temp);
};

// Constructor por defecto para la clase Postre_frio.
Postre_frio::Postre_frio() {
  temperatura = 0;
}

// Funciones "get" y "set" para Postre_frio.

int Postre_frio::get_temperatura() {
  return temperatura;
}

void Postre_frio::set_temperatura(int temp) {
  temperatura = temp;
}

// Clase Postre_caliente
// Esta clase representa un postre caliente, derivada de `Menu_postres`.
// Se agrega un atributo para manejar el tiempo de calentamiento necesario.
class Postre_caliente: public Menu_postres {

  private:
    // Atributo para almacenar el tiempo de calentamiento.
    int tiempo_calentamiento;

  public:
    // Constructores:
    Postre_caliente(); // Constructor por defecto.
    // Constructor con parámetros.
    Postre_caliente(int tiemp): tiempo_calentamiento(tiemp) {};

    // Métodos "get" y "set"
    // para acceder y modificar el atributo `tiempo_calentamiento`.
    int get_tiempo_calentamiento();
    void set_tiempo_calentamiento(int tiemp);
};

// Constructor por defecto para la clase Postre_caliente.
Postre_caliente::Postre_caliente() {
  tiempo_calentamiento = 0;
}

// Funciones "get" y "set" para Postre_caliente.

int Postre_caliente::get_tiempo_calentamiento() {
  return tiempo_calentamiento;
}

void Postre_caliente::set_tiempo_calentamiento(int tiemp) {
  tiempo_calentamiento = tiemp;
}

// Clase Postre_sin_azucar
// Esta clase representa un postre sin azúcar, derivada de `Menu_postres`.
// Se agrega un atributo para manejar la cantidad de azúcar.
class Postre_sin_azucar: public Menu_postres {

  private:
    int cantidad_azucar; // Atributo para almacenar la cantidad de azúcar.

  public:
    // Constructores:
    Postre_sin_azucar(); // Constructor por defecto.
    // Constructor con parámetros.
    Postre_sin_azucar(int azu): cantidad_azucar(azu) {};

    // Métodos "get" y "set" para
    // acceder y modificar el atributo `cantidad_azucar`.
    int get_cantidad_azucar();
    void set_cantidad_azucar(int azu);
};

// Constructor por defecto para la clase Postre_sin_azucar.
Postre_sin_azucar::Postre_sin_azucar() {
  cantidad_azucar = 0;
}

// Funciones "get" y "set" para Postre_sin_azucar.

int Postre_sin_azucar::get_cantidad_azucar() {
  return cantidad_azucar;
}

void Postre_sin_azucar::set_cantidad_azucar(int azu) {
  cantidad_azucar = azu;
}
