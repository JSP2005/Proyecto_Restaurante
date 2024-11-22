/* Bibliotecas */

#include<string>
#include"menu_postres.h"

using namespace std;

// Clase Postre frio

class Postre_frio: public Menu_postres{

  private:

      int temperatura;

  public:

      Postre_frio():
      Postre_frio(int temp): temperatura(temp){};
      int get_temperatura();
      void set_temperatura(int temp);

};

// Constructor para la clase Postre frio

Postre_frio::Postre_frio(){
  temperatura = 0;
}

// Funciones get para la clase Postre frio

int get_temperatura(){
    return temperatura;
}

// Funciones set para la clase Postre frio

void set_temperatura(int temp){
    temperatura = temp;
}

// Clase Postre caliente

class Postre_caliente: public Menu_postres{

  private:

      int tiempo_calentamiento;

  public:

      Postre_caliente():
      Postre_caliente(int tiemp): tiempo_calentamiento(tiemp){};
      int get_tiempo_calentamiento();
      void set_tiempo_calentamiento(int tiemp);

};

// Constructor para la clase Postre caliente

Postre_caliente::Postre_caliente(){
  tiempo_calentamiento = 0;
}

// Funciones get para la clase Postre caliente

int get_tiempo_calentamiento(){
    return tiempo_calentamiento;
}

// Funciones set para la clase Postre caliente

void set_tiempo_calentamiento(int tiemp){
    tiempo_calentamiento = tiemp;
}

// Clase Postre sin azucar

class Postre_sin_azucar: public Menu_postres{

  private:

      int cantidad_azucar;

  public:

      Postre_sin_azucar():
      Postre_sin_azucar(int azu): cantidad_azucar(azu){};
      int get_cantidad_azucar();
      void set_cantidad_azucar(int azu);

};

// Constructor para la clase Postre sin azucar

Postre_sin_azucar::Postre_sin_azucar(){
  cantidad_azucar = 0;
}

// Funciones get para la clase Postre sin azucar

int get_cantidad_azucar(){
    return cantidad_azucar;
}

// Funciones set para la clase Postre sin azucar

void set_cantidad_azucar(int azu){
    cantidad_azucar = azu;
}
