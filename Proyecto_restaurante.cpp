// Bibliotecas

#include <iostream>
#include <string>

// Se incluye el archivo de encabezado "menu_bebidas.h"
// para heredar la clase `Menu`.

#include "menu.h"

using namespace std;

int main() {
    // Límite máximo de objetos para cada categoría (bebidas, entradas, postres)
    const int MAX_ITEMS = 10;

    // Arreglos para almacenar las bebidas, entradas y postres creados
    Menu_bebidas bebidas[MAX_ITEMS];
    Menu_entradas entradas[MAX_ITEMS];
    Menu_postres postres[MAX_ITEMS];

    int num_bebidas = 0; // Contador de bebidas creadas
    int num_entradas = 0; // Contador de entradas creadas
    int num_postres = 0; // Contador de postres creados
    // Variable para almacenar la opción seleccionada en el menú principal
    int opcion_principal;
    bool continuar = true; // Bandera para continuar con el bucle de operaciones

    // Bucle principal del programa que muestra el menú
    // y gestiona las opciones seleccionadas
    while (continuar) {
        // Muestra el menú principal
        cout << "\nMenu Principal:" << endl;
        cout << "NO USES ESPACIOS AL INGRESAR LOS DATOS." << endl;
        cout << "1. Crear bebida" << endl;
        cout << "2. Crear entrada" << endl;
        cout << "3. Crear postre" << endl;
        cout << "4. Mostrar bebidas" << endl;
        cout << "5. Mostrar entradas" << endl;
        cout << "6. Mostrar postres" << endl;
        cout << "7. Salir" << endl;
        cout << "Selecciona una opcion: ";
        cin >> opcion_principal;

        // Verifica si la opción ingresada es válida
        if (cin.fail()) {
            cout << "\nOpcion invalida. Por favor,"
            "selecciona una opcion valida." << endl;
            cin.clear(); // Limpia el error en el flujo de entrada
            cin.ignore(1000, '\n'); // Ignora el resto de la entrada incorrecta
            continue;
        }

        // Manejo de las diferentes opciones seleccionadas
        switch (opcion_principal) {
        case 1: // Crear bebida
            // Verifica si hay espacio para más bebidas
            if (num_bebidas < MAX_ITEMS) {
                string nombre, ingredientes;
                float precio;
                int cantidad;

                cout << "\nNombre de la bebida: ";
                cin >> nombre; // Solicita el nombre de la bebida
                // Verifica si la opción ingresada es válida
                if (cin.fail()) {
                    cout << "\nError: Debes ingresar un nombre valido." << endl;
                    cin.clear();
                    cin.ignore(1000, '\n');
                    continue;
                }
                cout << "Precio($): ";
                cin >> precio; // Solicita el precio de la bebida
                // Verifica si la opción ingresada es válida
                if (cin.fail()) {
                    cout << "\nError: Debes ingresar un numero valido." << endl;
                    cin.clear();
                    cin.ignore(1000, '\n');
                    continue;
                }
                cout << "Cantidad(ml): ";
                cin >> cantidad; // Solicita la cantidad en mililitros
                // Verifica si la opción ingresada es válida
                if (cin.fail()) {
                    cout << "\nError:"
                    "Debes ingresar un numero entero valido." << endl;
                    cin.clear();
                    cin.ignore(1000, '\n');
                    continue;
                }
                cout << "Ingredientes: ";
                cin >> ingredientes; // Solicita los ingredientes de la bebida
                // Verifica si la opción ingresada es válida
                if (cin.fail()) {
                    cout << "\nError: Debes ingresar un nombre valido." << endl;
                    cin.clear();
                    cin.ignore(1000, '\n');
                    continue;
                }

                // Asigna los valores ingresados al objeto correspondiente
                bebidas[num_bebidas].set_nombre(nombre);
                bebidas[num_bebidas].set_precio(precio);
                bebidas[num_bebidas].set_cantidad(cantidad);
                bebidas[num_bebidas].set_ingredientes(ingredientes);
                num_bebidas++; // Incrementa el contador de bebidas

                cout << "\nBebida creada correctamente." << endl;
            } else {
                // Mensaje si se ha alcanzado el límite
                cout << "\nLimite de bebidas alcanzado." << endl;
            }
            break;

        case 2: // Crear entrada
            // Verifica si hay espacio para más entradas
            if (num_entradas < MAX_ITEMS) {
                string nombre, ingredientes;
                float precio;
                int cantidad;

                cout << "\nNombre de la entrada: ";
                cin >> nombre; // Solicita el nombre de la entrada
                // Verifica si la opción ingresada es válida
                if (cin.fail()) {
                    cout << "\nError: Debes ingresar un nombre valido." << endl;
                    cin.clear();
                    cin.ignore(1000, '\n');
                    continue;
                }
                cout << "Precio($): ";
                cin >> precio; // Solicita el precio de la entrada
                // Verifica si la opción ingresada es válida
                if (cin.fail()) {
                    cout << "\nError: Debes ingresar un numero valido." << endl;
                    cin.clear();
                    cin.ignore(1000, '\n');
                    continue;
                }
                cout << "Cantidad(kcal): ";
                cin >> cantidad; // Solicita la cantidad de calorías
                // Verifica si la opción ingresada es válida
                if (cin.fail()) {
                    cout << "\nError:"
                    "Debes ingresar un numero entero valido." << endl;
                    cin.clear();
                    cin.ignore(1000, '\n');
                    continue;
                }
                cout << "Ingredientes: ";
                cin >> ingredientes; // Solicita los ingredientes de la entrada
                // Verifica si la opción ingresada es válida
                if (cin.fail()) {
                    cout << "\nError: Debes ingresar un nombre valido." << endl;
                    cin.clear();
                    cin.ignore(1000, '\n');
                    continue;
                }

                // Asigna los valores ingresados al objeto correspondiente
                entradas[num_entradas].set_nombre(nombre);
                entradas[num_entradas].set_precio(precio);
                entradas[num_entradas].set_cantidad(cantidad);
                entradas[num_entradas].set_ingredientes(ingredientes);
                num_entradas++; // Incrementa el contador de entradas

                cout << "\nEntrada creada correctamente." << endl;
            } else {
                // Mensaje si se ha alcanzado el límite
                cout << "\nLimite de entradas alcanzado." << endl;
            }
            break;

        case 3: // Crear postre
            // Verifica si hay espacio para más postres
            if (num_postres < MAX_ITEMS) {
                string nombre, ingredientes;
                float precio;
                int cantidad;

                cout << "\nNombre del postre: ";
                cin >> nombre; // Solicita el nombre del postre
                // Verifica si la opción ingresada es válida
                if (cin.fail()) {
                    cout << "\nError: Debes ingresar un nombre valido." << endl;
                    cin.clear();
                    cin.ignore(1000, '\n');
                    continue;
                }
                cout << "Precio($): ";
                cin >> precio; // Solicita el precio del postre
                // Verifica si la opción ingresada es válida
                if (cin.fail()) {
                    cout << "\nError: Debes ingresar un numero valido." << endl;
                    cin.clear();
                    cin.ignore(1000, '\n');
                    continue;
                }
                cout << "Cantidad(kcal): ";
                cin >> cantidad; // Solicita la cantidad de calorías
                // Verifica si la opción ingresada es válida
                if (cin.fail()) {
                    cout << "\nError:"
                    "Debes ingresar un numero entero valido." << endl;
                    cin.clear();
                    cin.ignore(1000, '\n');
                    continue;
                }
                cout << "Ingredientes: ";
                cin >> ingredientes; // Solicita los ingredientes del postre
                // Verifica si la opción ingresada es válida
                if (cin.fail()) {
                    cout << "\nError: Debes ingresar un nombre valido." << endl;
                    cin.clear();
                    cin.ignore(1000, '\n');
                    continue;
                }

                // Asigna los valores ingresados al objeto correspondiente
                postres[num_postres].set_nombre(nombre);
                postres[num_postres].set_precio(precio);
                postres[num_postres].set_cantidad(cantidad);
                postres[num_postres].set_ingredientes(ingredientes);
                num_postres++; // Incrementa el contador de postres

                cout << "\nPostre creado correctamente." << endl;
            } else {
                // Mensaje si se ha alcanzado el límite
                cout << "\nLimite de postres alcanzado." << endl;
            }
            break;

        case 4: // Mostrar bebidas
            if (num_bebidas > 0) { // Verifica si hay bebidas para mostrar
                cout << "\nLista de Bebidas:" << endl;
                for (int i = 0; i < num_bebidas; i++) {
                    cout << "\nBebida " << i + 1 << ":" << endl;
                    cout << "Nombre: " << bebidas[i].get_nombre() << endl;
                    cout << "Precio($): " << bebidas[i].get_precio() << endl;
                    cout << "Cantidad(ml): "
                    << bebidas[i].get_cantidad() << endl;
                    cout << "Ingredientes: "
                    << bebidas[i].get_ingredientes() << endl;
                }
            } else {
                // Mensaje si no hay bebidas
                cout << "\nNo hay bebidas para mostrar." << endl;
            }
            break;

        case 5: // Mostrar entradas
            if (num_entradas > 0) { // Verifica si hay entradas para mostrar
                cout << "\nLista de Entradas:" << endl;
                for (int i = 0; i < num_entradas; i++) {
                    cout << "\nEntrada " << i + 1 << ":" << endl;
                    cout << "Nombre: " << entradas[i].get_nombre() << endl;
                    cout << "Precio($): " << entradas[i].get_precio() << endl;
                    cout << "Cantidad(kcal): "
                    << entradas[i].get_cantidad() << endl;
                    cout << "Ingredientes: "
                    << entradas[i].get_ingredientes() << endl;
                }
            } else {
                // Mensaje si no hay entradas
                cout << "\nNo hay entradas para mostrar." << endl;
            }
            break;

        case 6: // Mostrar postres
            if (num_postres > 0) { // Verifica si hay postres para mostrar
                cout << "\nLista de Postres:" << endl;
                for (int i = 0; i < num_postres; i++) {
                    cout << "\nPostre " << i + 1 << ":" << endl;
                    cout << "Nombre: " << postres[i].get_nombre() << endl;
                    cout << "Precio($): " << postres[i].get_precio() << endl;
                    cout << "Cantidad(kcal): "
                    << postres[i].get_cantidad() << endl;
                    cout << "Ingredientes: "
                    << postres[i].get_ingredientes() << endl;
                }
            } else {
                // Mensaje si no hay postres
                cout << "\nNo hay postres para mostrar." << endl;
            }
            break;

        case 7: // Salir
            // Cambia la bandera para salir del bucle principal
            continuar = false;
            cout << "\nGracias por usar el sistema." << endl;
            break;

        default: // Opción inválida
            // Mensaje en caso de que la opción no sea válida
            cout << "\nOpcion no valida."
            "Por favor, elige una opcion entre 1 y 7." << endl;
            break;
        }
    }

        return 0; // Fin del programa

}
