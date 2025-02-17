/**
 *  Struct
 *  Autor: Carlos Nevárez - CubicNev
 *  Fecha: 17-Feb-2025
 *
 *  Implementación de un struct
*/

# include <iostream>
# include <string>

using namespace std;

struct Persona {
    string nombre;
    int edad;
};

int main() {
    // Declaración de variable
    Persona p0;

    // Inicialización de variable
    Persona p1 = Persona();
    p1.nombre = "Diana";
    p1.edad = 26;
    cout << p1.nombre << endl;
    cout << p1.edad << endl;

    // Inicialización con memoria dinámica
    Persona *p2 = new Persona(); // genera un puntero, durante la ejeución crea una nueva persona
    p2->nombre = "Carlos";
    p2->edad = 24;
    cout << p2->nombre << endl;
    cout << p2->edad << endl;

    cout << "p2 = " << (int *) p2 << endl;
    cout << "&p2->nombre = " << (int *) &p2->nombre << endl;
    cout << "&p2->edad = " << (int *) &p2->edad << endl;
    cout << "sizeof p2 = " << sizeof(p2) << "bytes" << endl;
    cout << "sizeof &p2->nombre = " << sizeof(&p2->nombre) << "bytes" << endl;
    cout << "sizeof &p2->edad = " << sizeof(&p2->edad) << "bytes" << endl;
    cout << "sizeof Persona = " << sizeof(Persona) << "bytes" <<endl;

    return 0;
}