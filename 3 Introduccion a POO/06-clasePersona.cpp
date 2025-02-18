/**
 *  Clase Persona
 *  Autor: Carlos Nevárez - CubicNev
 *  Fecha: 18-Feb-2025
 *
 *  Definición de una clase Persona con nombre y edad, con la función saludar.
 *  Se agrega un constructor y un destructor
*/

# include <iostream>
# include <string>

using namespace std;

class Persona {
public:
    // Propiedades
    string nombre;
    int edad;

    //Constructor
    Persona(string n) {
        // Inicializa
        nombre = n;
    }
    // Destructor
    ~Persona() {
        cout << nombre << " salio del chat" << endl;
    }

    // Comportamiento
    void saludar() {
        cout << "Hola! Soy " << nombre << endl;
    }
};

int main() {
    // Reserva memoria
    Persona *P = new Persona("Diana");
    Persona *P2 = new Persona("Ximena");

    P->saludar();
    P2->saludar();

    // Limpia memoria
    delete P2;

    return 0;
}