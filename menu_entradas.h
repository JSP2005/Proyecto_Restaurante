// Bibliotecas

#include<string>

using namespace std;

// Clase Menú de Entradas
class Menu_entradas {

  private:
    // Atributos privados de la clase:
    string nombre;
    float precio;
    int cantidad;
    string ingredientes;

  public:
    // Constructores de la clase:
    Menu_entradas(); // Constructor por defecto.
    // Constructor con parámetros que permite inicializar
    // los atributos al crear un objeto.
    Menu_entradas(string nom, float pre, int can, string ing)
        : nombre(nom), precio(pre), cantidad(can), ingredientes(ing) {};

    // Métodos "get" para obtener los valores de los atributos.
    string get_nombre();
    float get_precio();
    int get_cantidad();
    string get_ingredientes();

    // Métodos "set" para modificar los valores de los atributos.
    void set_nombre(string);
    void set_precio(float);
    void set_cantidad(int);
    void set_ingredientes(string);
};

// Constructor por defecto para la clase Menu_entradas
// Inicializa los atributos con valores predeterminados.
Menu_entradas::Menu_entradas() {
  nombre = "";
  precio = 0.0;
  cantidad = 0;
  ingredientes = "";
}

// Funciones "get" para la clase Menu_entradas
// Permiten obtener el valor de los atributos privados.

string Menu_entradas::get_nombre() {
  return nombre;
}

float Menu_entradas::get_precio() {
  return precio;
}

int Menu_entradas::get_cantidad() {
  return cantidad;
}

string Menu_entradas::get_ingredientes() {
  return ingredientes;
}

// Funciones "set" para la clase Menu_entradas
// Permiten modificar el valor de los atributos privados.

void Menu_entradas::set_nombre(string nom) {
  nombre = nom;
}

void Menu_entradas::set_precio(float pre) {
  precio = pre;
}

void Menu_entradas::set_cantidad(int can) {
  cantidad = can;
}

void Menu_entradas::set_ingredientes(string ing) {
  ingredientes = ing;
}
