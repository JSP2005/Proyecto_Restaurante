/* Bibliotecas */

#include<string>
#include"menu_bebidas.h"
using namespace std;

// Clase Bebida sin alcohol

class Bebida_sin_alcohol: public Menu_bebidas{

  private:

    int azucar;

  public:

    Bebida_sin_alcohol();
    Bebida_sin_alcohol(int,az): azucar(az){};
    int get_azucar();
    void set_azucar();

};

// Constructor para la clase Bebida sin alcohol

Bebida_sin_alcohol::Bebida_sin_alcohol(){
  azucar = 0;
}

// Funciones get para la clase Bebida sin alcohol

string Bebida_sin_alcohol::get_azucar(){
  return azucar;
}

// Funciones set para la clase Bebida sin alcohol

void Bebida_sin_alcohol::set_azucar(int az){
  azucar = az;

// Clase de Bebida con alcohol

class Bebida_con_alcohol: public Menu_bebidas{

  private:

    float porcentaje_alcohol;

  public:

    Bebida_con_alcohol();
    Bebida_con_alcohol(int alc): porcentaje_alcohol(alc){};
    float get_porcentaje_alcohol();
    void set_porcentaje_alcohol();

};

// Constructor para la clase Bebida con alcohol

Bebida_con_alcohol::Bebida_con_alcohol(){
  porcentaje_alcohol = 0.0;
}

// Funciones get para la clase Bebida con alcohol

string Bebida_con_alcohol::get_porcentaje_alcohol(){
  return porcentaje_alcohol;
}

// Funciones set para la clase Bebida con alcohol

void Bebida_con_alcohol::set_porcentaje_alcohol(float alc){
  porcentaje_alcohol = alc;
}
