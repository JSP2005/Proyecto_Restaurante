/* Bibliotecas */

#include<iostream>
#include<string>
#include"Proyecto_restaurante.h"

using namespace std;

// Main del programa

int main(){

  // Constructor de objetos de la clase Menu Bebidas
  Menu_bebidas bebida_1("Naranjada", 30, 300, 0, "Concentrado de naranja, agua mineral, azucar");
  // Llamada a los métodos del objeto 1 de la clase Menu Bebidas
  cout << "\n";
  cout << "El nombre de la bebida es:" << bebida_1.get_nombre() << endl;
  cout << "El precio de la bebida es:" << bebida_1.get_precio() << " $" << endl;
  cout << "La cantidad de bebida es:" << bebida_1.get_cantidad() << " ml" << endl;
  cout << "El porcentaje de alcohol es:" << bebida_1.get_porcentaje_alcohol() << " %" << endl;
  cout << "Los ingredientes de la bebida son:" << bebida_1.get_ingredientes() << endl;

  // Constructor de objetos de la clase Menu Entradas
  Menu_entradas entrada_1("Papas a la francesa", 80, 150, "Papas, especies, queso y tocino");
  // Llamada a los métodos del objeto 1 de la clase Menu Entradas
  cout << "\n";
  cout << "El nombre de la entrada es:" << entrada_1.get_nombre() << endl;
  cout << "El precio de la entrada es:" << entrada_1.get_precio() << " $" << endl;
  cout << "La cantidad de gramos en la entrada son:" << entrada_1.get_cantidad() << " g" << endl;
  cout << "Los ingredientes de la entrada son:" << entrada_1.get_ingredientes() << endl;

  // Constructor de objetos de la clase Menu Postres
  Menu_postres postre_1("Cheesecake", 85, 160, "Queso cremna, mantequilla, huevo, azucar, galleta molida");
  // Llamada a los métodos del objeto 1 de la clase Menu Postres
  cout << "\n";
  cout << "El nombre del postre es:" << postre_1.get_nombre() << endl;
  cout << "El precio del postre es:" << postre_1.get_precio() << " $" << endl;
  cout << "La cantidad de gramos en el postre son:" << postre_1.get_cantidad() << " g" << endl;
  cout << "Los ingredientes del postre son:" << postre_1.get_ingredientes() << endl;
}
