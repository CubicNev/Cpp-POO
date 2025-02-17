/**
 *  Clase Persona
 *  Autor: Carlos Nevárez - CubicNev
 *  Fecha: 17-Feb-2025
 *
 *  Definición de una clase Persona con nombre y edad, con la función saludar.
*/

# include <iostream>
# include <string>

using namespace std;

class Persona {
public:
    // Propiedades
    string nombre = "Diana";
    int edad = 26;

    // Comportamiento
    void saludar() {
        cout << "Hola! Soy " << nombre << endl;
    }
};

int main() {
    // Forma estatica
    Persona p = Persona();
    cout << p.nombre << endl;
    p.saludar();

    // Forma dinámica
    Persona *P = new Persona();
    cout << P->nombre << endl;
    P->saludar();

    // Nueva persona
    Persona *P2 = new Persona();
    P2->nombre = "Ximena";
    P2->saludar();

    return 0;
}