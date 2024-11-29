// Bibliotecas

#include<string>

using namespace std;

// Clase Menú de postres

class Menu_postres {

  private:
    // Atributos privados de la clase:
    string nombre;
    float precio;
    int cantidad;
    string ingredientes;

  public:
    // Constructores de la clase:
    Menu_postres();
    // Constructor con parámetros que permite inicializar
    // los atributos al momento de crear un objeto.
    Menu_postres(string nom, float pre, int can, string ing)
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

// Constructor por defecto para la clase Menu_postres
// Inicializa los atributos con valores predeterminados.
Menu_postres::Menu_postres() {
  nombre = "";
  precio = 0.0;
  cantidad = 0;
  ingredientes = "";
}

// Funciones "get" para la clase Menu_postres
// Devuelven el valor actual de los atributos.

string Menu_postres::get_nombre() {
  return nombre;
}

float Menu_postres::get_precio() {
  return precio;
}

int Menu_postres::get_cantidad() {
  return cantidad;
}

string Menu_postres::get_ingredientes() {
  return ingredientes;
}

// Funciones "set" para la clase Menu_postres
// Permiten modificar los valores de los atributos.

void Menu_postres::set_nombre(string nom) {
  nombre = nom;
}

void Menu_postres::set_precio(float pre) {
  precio = pre;
}

void Menu_postres::set_cantidad(int can) {
  cantidad = can;
}

void Menu_postres::set_ingredientes(string ing) {
  ingredientes = ing;
}
