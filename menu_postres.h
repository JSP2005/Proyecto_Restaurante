/* Bibliotecas */

#include<string>

using namespace std;

//Clase 4 (Menú de postres)

class Menu_postres{

  private:

    string nombre;
    float precio;
    int cantidad;
    string ingredientes;

  public:

    Menu_postres();
    Menu_postres(string nom, float pre, int can, string ing): nombre(nom), precio(pre), cantidad(can), ingredientes(ing){};

    string get_nombre();
    float get_precio();
    int get_cantidad();
    string get_ingredientes();

    void set_nombre(string);
    void set_precio(float);
    void set_cantidad(int);
    void set_ingredientes(string);

};

// Constructor para la clase Menu de postres

Menu_postres::Menu_postres(){

  nombre = "";
  precio = 0.0;
  cantidad = 0;
  ingredientes = "";

}

// Funciones get para la clase Menu de postres

string Menu_postres::get_nombre(){
  return nombre;
}

float Menu_postres::get_precio(){
  return precio;
}

int Menu_postres::get_cantidad(){
  return cantidad;
}

string Menu_postres::get_ingredientes(){
  return ingredientes;
}

// Funciones set para la clase Menu de postres

void Menu_postres::set_nombre(string nom){
  nombre = nom;
}

void Menu_postres::set_precio(float pre){
  precio = pre;
}

void Menu_postres::set_cantidad(int can){
  cantidad = can;
}

void Menu_postres::set_ingredientes(string ing){
  ingredientes = ing;
}
