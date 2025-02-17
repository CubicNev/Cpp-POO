/**
 *  Punteros
 *  Autor: Carlos Nevárez - CubicNev
 *  Fecha: 12-Feb-2025
 *
 *  Uso básico de punteros
*/

# include <iostream>

using namespace std;

int main() {
    // Variable tipo caracter
    char letra = 'A';
    // Variable tipo puntero para un carácter
    char *puntero = &letra;

    /* Consultas */
    cout << letra; // Que contiene el valor de la variable letra
    /* Imprimiendo direcciones */
    // cout << &letra; // Dirección de la variable letra (Error)
    // Converir puntero de crácter a puntero de entero
    cout << (int *) &letra << endl; // Se idica que tiene que mostrar la direccion como número
    cout << (int *) puntero << endl;
    // Aaccediendo al valor de la variable letra desde el puntero
    cout << *puntero;
}