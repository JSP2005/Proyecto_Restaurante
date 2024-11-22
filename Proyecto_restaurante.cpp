/* Bibliotecas */

#include<iostream>
#include<string>
#include"menu.h"

using namespace std;

// Main del programa

int main() {
    // Crear el menú 1 con parámetros
    Menu menu1("Jugo de Naranja", 25.5, 100, "Naranjas frescas",
               "Ensalada Cesar", 50.0, 50, "Lechuga, pollo, croutons",
               "Tiramisu", 80.0, 30, "Mascarpone, cafe, cacao");

    // Crear el menú 2 con parámetros
    Menu menu2("Agua Mineral", 15.0, 200, "Agua pura",
               "Sopa de Lentejas", 35.0, 40, "Lentejas, zanahorias, cebolla",
               "Helado de Vainilla", 45.0, 60, "Leche, vainilla, azúcar");

    // Crear el menú 3 con parámetros
    Menu menu3("Limonada", 22.0, 150, "Limon, azucar, agua",
               "Tacos de Pastor", 55.0, 80, "Carne de cerdo, piña, cilantro",
               "Flan", 60.0, 50, "Leche, huevo, azucar");

    // Mostrar las opciones del menú 1
    cout << "\nMenu 1: \n" << endl;
    menu1.mostrar_bebida();
    cout << "\n" << endl;
    menu1.mostrar_entrada();
    cout << "\n" << endl;
    menu1.mostrar_postre();
    cout << endl;

    // Mostrar las opciones del menú 2
    cout << "Menu 2: \n" << endl;
    menu2.mostrar_bebida();
    cout << "\n" << endl;
    menu2.mostrar_entrada();
    cout << "\n" << endl;
    menu2.mostrar_postre();
    cout << endl;

    // Mostrar las opciones del menú 3
    cout << "Menu 3: \n" << endl;
    menu3.mostrar_bebida();
    cout << "\n" << endl;
    menu3.mostrar_entrada();
    cout << "\n" << endl;
    menu3.mostrar_postre();
    cout << endl;

    return 0;
}
