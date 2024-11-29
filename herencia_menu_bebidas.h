// Bibliotecas

#include<string>

// Se incluye el archivo de encabezado "menu_bebidas.h"
// para heredar la clase `Menu_bebidas`.
#include"menu_bebidas.h"

using namespace std;

// Clase Bebida_sin_alcohol
// Representa una bebida sin alcohol, derivada de la clase base `Menu_bebidas`.
// Añade un atributo adicional para almacenar la cantidad de azúcar en la bebida
class Bebida_sin_alcohol: public Menu_bebidas {

  private:
    int azucar; // Cantidad de azúcar en la bebida.

  public:
    // Constructores:
    Bebida_sin_alcohol(); // Constructor por defecto.
    Bebida_sin_alcohol(int az); // Constructor con parámetros.

    // Métodos "get" y "set" para acceder y modificar el atributo `azucar`.
    int get_azucar();
    void set_azucar(int az);
};

// Constructor por defecto para la clase Bebida_sin_alcohol.
Bebida_sin_alcohol::Bebida_sin_alcohol() {
  azucar = 0;
}

// Constructor parametrizado para la clase Bebida_sin_alcohol.
Bebida_sin_alcohol::Bebida_sin_alcohol(int az) {
  azucar = az;
}

// Funciones "get" y "set" para Bebida_sin_alcohol.

int Bebida_sin_alcohol::get_azucar() {
  return azucar;
}

void Bebida_sin_alcohol::set_azucar(int az) {
  azucar = az;
}

// Clase Bebida_con_alcohol
// Representa una bebida con alcohol, derivada de la clase base `Menu_bebidas`.
// Añade un atributo adicional
// para almacenar el porcentaje de alcohol en la bebida.
class Bebida_con_alcohol: public Menu_bebidas {

  private:
    float porcentaje_alcohol; // Porcentaje de alcohol en la bebida.

  public:
    // Constructores:
    Bebida_con_alcohol(); // Constructor por defecto.
    Bebida_con_alcohol(float alc); // Constructor con parámetros.

    // Métodos "get" y "set" para
    // acceder y modificar el atributo `porcentaje_alcohol`.
    float get_porcentaje_alcohol();
    void set_porcentaje_alcohol(float alc);
};

// Constructor por defecto para la clase Bebida_con_alcohol.
Bebida_con_alcohol::Bebida_con_alcohol() {
  porcentaje_alcohol = 0.0;
}

// Constructor parametrizado para la clase Bebida_con_alcohol.
Bebida_con_alcohol::Bebida_con_alcohol(float alc) {
  porcentaje_alcohol = alc;
}

// Funciones "get" y "set" para Bebida_con_alcohol.

float Bebida_con_alcohol::get_porcentaje_alcohol() {
  return porcentaje_alcohol;
}

void Bebida_con_alcohol::set_porcentaje_alcohol(float alc) {
  porcentaje_alcohol = alc;
}
