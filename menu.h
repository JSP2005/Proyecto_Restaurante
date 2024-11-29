#ifndef MENU_H
#define MENU_H

// Bibliotecas
#include <iostream>
#include <string>
#include "menu_bebidas.h"
#include "menu_entradas.h"
#include "menu_postres.h"

using namespace std;

// Clase Menu
class Menu {
  private:
      // Objetos de las clases derivadas
      Menu_bebidas bebida;
      Menu_entradas entrada;
      Menu_postres postre;

  public:
    // Constructor por defecto
    Menu() {}

    // Constructor con parámetros
    Menu(string nombre_bebida, float precio_bebida, int cantidad_bebida,
         string ingredientes_bebida, string nombre_entrada,
         float precio_entrada, int cantidad_entrada,
         string ingredientes_entrada, string nombre_postre,
         float precio_postre, int cantidad_postre, string ingredientes_postre) {
        // Inicializa los atributos de las bebidas
        bebida.set_nombre(nombre_bebida);
        bebida.set_precio(precio_bebida);
        bebida.set_cantidad(cantidad_bebida);
        bebida.set_ingredientes(ingredientes_bebida);

        // Inicializa los atributos de las entradas
        entrada.set_nombre(nombre_entrada);
        entrada.set_precio(precio_entrada);
        entrada.set_cantidad(cantidad_entrada);
        entrada.set_ingredientes(ingredientes_entrada);

        // Inicializa los atributos de los postres
        postre.set_nombre(nombre_postre);
        postre.set_precio(precio_postre);
        postre.set_cantidad(cantidad_postre);
        postre.set_ingredientes(ingredientes_postre);
    }

    // Métodos para gestionar bebidas
    void set_bebida(string nombre,
                    float precio, int cantidad, string ingredientes) {
        bebida.set_nombre(nombre);
        bebida.set_precio(precio);
        bebida.set_cantidad(cantidad);
        bebida.set_ingredientes(ingredientes);
    }

    void mostrar_bebida() {
        cout << "Bebida: " << bebida.get_nombre() << endl;
        cout << "Precio: " << bebida.get_precio() << endl;
        cout << "Cantidad: " << bebida.get_cantidad() << endl;
        cout << "Ingredientes: " << bebida.get_ingredientes() << endl;
    }

    // Métodos para gestionar entradas
    void set_entrada(string nombre,
                     float precio, int cantidad, string ingredientes) {
        entrada.set_nombre(nombre);
        entrada.set_precio(precio);
        entrada.set_cantidad(cantidad);
        entrada.set_ingredientes(ingredientes);
    }

    void mostrar_entrada() {
        cout << "Entrada: " << entrada.get_nombre() << endl;
        cout << "Precio: " << entrada.get_precio() << endl;
        cout << "Cantidad: " << entrada.get_cantidad() << endl;
        cout << "Ingredientes: " << entrada.get_ingredientes() << endl;
    }

    // Métodos para gestionar postres
    void set_postre(string nombre,
                    float precio, int cantidad, string ingredientes) {
        postre.set_nombre(nombre);
        postre.set_precio(precio);
        postre.set_cantidad(cantidad);
        postre.set_ingredientes(ingredientes);
    }

    void mostrar_postre() {
        cout << "Postre: " << postre.get_nombre() << endl;
        cout << "Precio: " << postre.get_precio() << endl;
        cout << "Cantidad: " << postre.get_cantidad() << endl;
        cout << "Ingredientes: " << postre.get_ingredientes() << endl;
    }
};

#endif
