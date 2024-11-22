/* Bibliotecas */

#include<string>

using namespace std;

//Clase 3 (Menú de Entradas)

class Menu_entradas{

  private:

    string nombre;
    float precio;
    int cantidad;
    string ingredientes;

  public:

    Menu_entradas();
    Menu_entradas(string nom, float pre, int can, string ing): nombre(nom), precio(pre), cantidad(can), ingredientes(ing){};

    string get_nombre();
    float get_precio();
    int get_cantidad();
    string get_ingredientes();

    void set_nombre(string);
    void set_precio(float);
    void set_cantidad(int);
    void set_ingredientes(string);

};

// Constructor para la clase Menu de Entradas

Menu_entradas::Menu_entradas(){

  nombre = "";
  precio = 0.0;
  cantidad = 0;
  ingredientes = "";

}

// Funciones get para la clase Menu de Entradas

string Menu_entradas::get_nombre(){
  return nombre;
}

float Menu_entradas::get_precio(){
  return precio;
}

int Menu_entradas::get_cantidad(){
  return cantidad;
}

string Menu_entradas::get_ingredientes(){
  return ingredientes;
}

// Funciones set para la clase Menu de Entradas

void Menu_entradas::set_nombre(string nom){
  nombre = nom;
}

void Menu_entradas::set_precio(float pre){
  precio = pre;
}

void Menu_entradas::set_cantidad(int can){
  cantidad = can;
}

void Menu_entradas::set_ingredientes(string ing){
  ingredientes = ing;
}
