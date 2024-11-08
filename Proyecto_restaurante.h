/* Bibliotecas */

#include<string>

using namespace std;

//Clase 2 (Menú de Entradas)

class Menu_bebidas{

  private:

    string nombre;
    float precio;
    int cantidad;
    float porcentaje_alcohol;
    string ingredientes;

  public:

    Menu_bebidas();
    Menu_bebidas(string nom, float pre, int can, float por, string ing): nombre(nom), precio(pre), cantidad(can), porcentaje_alcohol(por), ingredientes(ing){};

    string get_nombre();
    float get_precio();
    int get_cantidad();
    float get_porcentaje_alcohol();
    string get_ingredientes();

    void set_nombre(string);
    void set_precio(float);
    void set_cantidad(int);
    void set_porcentaje_alcohol(float);
    void set_ingredientes(string);

};

// Constructor para la clase Menu de Bebidas

Menu_bebidas::Menu_bebidas(){

  nombre = "";
  precio = 0.0;
  cantidad = 0;
  porcentaje_alcohol = 0.0;
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

float Menu_bebidas::get_porcentaje_alcohol(){
  return porcentaje_alcohol;
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
void Menu_bebidas::set_porcentaje_alcohol(float por){
  porcentaje_alcohol = por;
}
void Menu_bebidas::set_ingredientes(string ing){
  ingredientes = ing;
}

//Clase 2 (Menú de Entradas)

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

//Clase 3 (Menú de postres)

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
