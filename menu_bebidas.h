/* Bibliotecas */

#include<string>

using namespace std;

//Clase 2 (Menú de Entradas)

class Menu_bebidas{

  private:

    string nombre;
    float precio;
    int cantidad;
    string ingredientes;

  public:

    Menu_bebidas();
    Menu_bebidas(string nom, float pre, int can, string ing): nombre(nom), precio(pre), cantidad(can), ingredientes(ing){};

    string get_nombre();
    float get_precio();
    int get_cantidad();
    string get_ingredientes();

    void set_nombre(string);
    void set_precio(float);
    void set_cantidad(int);
    void set_ingredientes(string);

};

// Constructor para la clase Menu de Bebidas

Menu_bebidas::Menu_bebidas(){

  nombre = "";
  precio = 0.0;
  cantidad = 0;
  ingredientes = "";

}

// Funciones get para la clase Menu de Bebidas

string Menu_bebidas::get_nombre(){
  return nombre;
}

float Menu_bebidas::get_precio(){
  return precio;
}

int Menu_bebidas::get_cantidad(){
  return cantidad;
}

string Menu_bebidas::get_ingredientes(){
  return ingredientes;
}

// Funciones set para la clase Menu de Bebidas

void Menu_bebidas::set_nombre(string nom){
  nombre = nom;
}

void Menu_bebidas::set_precio(float pre){
  precio = pre;
}

void Menu_bebidas::set_cantidad(int can){
  cantidad = can;
}

void Menu_bebidas::set_ingredientes(string ing){
  ingredientes = ing;
}