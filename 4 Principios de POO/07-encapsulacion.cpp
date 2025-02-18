/**
 *  Clase Persona
 *  Autor: Carlos Nevárez - CubicNev
 *  Fecha: 18-Feb-2025
 *
 *  Definición de una clase Persona con nombre y edad, con la función saludar.
 *  Se agrega un constructor y un destructor
 *  Se integra encapsulación y constructor in-line
*/

# include <iostream>
# include <string>

using namespace std;

class Persona {
private:
    // Propiedades
    string nombre;
    int edad;

    // Constructor estándar
    /*
    Persona(string n) {
        // Inicializa
        nombre = n;
    }*/
public:
    // Constructor in-line: Solo se usa cuando solo se tiene un constructor y se usa para asignar valores más repido
    Persona(string n, int e) : nombre(n), edad(e) {}

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
    Persona *P = new Persona("Diana", 24);
    Persona *P2 = new Persona("Ximena", 22);

    P->saludar();
    P2->saludar();

    return 0;
}