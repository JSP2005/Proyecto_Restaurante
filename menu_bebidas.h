// Bibliotecas

#include<string>

using namespace std;

// Clase 2 (Menú de Bebidas)
class Menu_bebidas {

  private:
    // Atributos privados de la clase:
    string nombre;
    float precio;
    int cantidad;
    string ingredientes;

  public:
    // Constructores:
    Menu_bebidas(); // Constructor por defecto.
    // Constructor con parámetros que inicializa
    // los atributos al momento de crear un objeto.
    Menu_bebidas(string nom, float pre, int can, string ing)
    : nombre(nom), precio(pre), cantidad(can), ingredientes(ing) {};

    // Métodos "get" para obtener los valores de los atributos.
    string get_nombre();
    float get_precio();
    int get_cantidad();
    string get_ingredientes();

    // Métodos "set" para asignar valores a los atributos.
    void set_nombre(string);
    void set_precio(float);
    void set_cantidad(int);
    void set_ingredientes(string);
};

// Constructor para la clase Menu_bebidas
// Constructor por defecto:inicializa los atributos con valores predeterminados.
Menu_bebidas::Menu_bebidas() {
  nombre = "";
  precio = 0.0;
  cantidad = 0;
  ingredientes = "";
}

// Funciones "get" para la clase Menu_bebidas
// Permiten acceder al valor de los atributos privados de la clase.

string Menu_bebidas::get_nombre() {
  return nombre;
}

float Menu_bebidas::get_precio() {
  return precio;
}

int Menu_bebidas::get_cantidad() {
  return cantidad;
}

string Menu_bebidas::get_ingredientes() {
  return ingredientes;
}

// Funciones "set" para la clase Menu_bebidas
// Permiten modificar el valor de los atributos privados de la clase.

void Menu_bebidas::set_nombre(string nom) {
  nombre = nom;
}

void Menu_bebidas::set_precio(float pre) {
  precio = pre;
}

void Menu_bebidas::set_cantidad(int can) {
  cantidad = can;
}

void Menu_bebidas::set_ingredientes(string ing) {
  ingredientes = ing;
}
