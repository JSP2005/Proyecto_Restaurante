/* Bibliotecas */

#include<string>
#include"menu_entradas.h"

using namespace std;

// Clase Entrada fria

class Entrada_fria: public Menu_entradas{

  private:

      int temperatura;

  public:

      Entrada_fria():
      Entrada_fria(int temp): temperatura(temp){};
      int get_temperatura();
      void set_temperatura(int temp);

};

// Constructor para la clase Entrada fria

Entrada_fria::Entrada_fria(){
  temperatura = 0;
}

// Funciones get para la clase Entrada fria

int get_temperatura(){
    return temperatura;
}

// Funciones set para la clase Entrada fria

void set_temperatura(int temp){
    temperatura = temp;
}

// Clase Entrada caliente

class Entrada_caliente: public Menu_entradas{

  private:

      int tiempo_calentamiento;

  public:

      Entrada_caliente():
      Entrada_caliente(int tiemp): tiempo_calentamiento(tiemp){};
      int get_tiempo_calentamiento();
      void set_tiempo_calentamiento(int tiemp);

};

// Constructor para la clase Entrada caliente

Entrada_caliente::Entrada_caliente(){
  tiempo_calentamiento = 0;
}

// Funciones get para la clase Entrada caliente

int get_tiempo_calentamiento(){
    return tiempo_calentamiento;
}

// Funciones set para la clase Entrada caliente

void set_tiempo_calentamiento(int tiemp){
    tiempo_calentamiento = tiemp;
}
