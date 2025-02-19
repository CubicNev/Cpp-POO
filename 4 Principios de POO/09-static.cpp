/**
 *  Clase Persona
 *  Autor: Carlos Nevárez - CubicNev
 *  Fecha: 18-Feb-2025
 *
 *  Definición de una clase Persona con nombre y edad, con la función saludar.
 *  Se agrega un constructor y un destructor
 *  Se integra encapsulación
 *  Se agrega puntero this
*/

# include <iostream>
# include <string>

using namespace std;

class Persona {
private:
    // Propiedades
    string nombre;
    int edad;

public:
    static int numero_personas;

    // Declara constructor
    Persona(string nombre, int edad);

    // Destructor
    ~Persona() {
        cout << this->nombre << " salio del chat" << endl;
    }

    // Comportamiento
    void establecerNombre(string nombre ) {
        this->nombre = nombre;
    }

    void establecerEdad(int edad) {
        this->edad = edad;
    }

    Persona &setNombre(string nombre) { // Retona referencia
        this->nombre = nombre;
        return *this;
    }

    Persona &setEdad(int edad) { // Retona referencia
        this->edad = edad;
        return *this;
    }

    // Declara comportamiento para definirlo posteriormente
    void saludar();
};

// Asigna valor inicial al contador
int Persona::numero_personas = 0;

// Asigna comportamiento a la funcion saludar()
void Persona::saludar() {
    cout << "Hola! Soy " << nombre << ", mi edad es " << edad << endl;
}

// Crea comportamiento del constructor pero dando la posibilidad de acceder a los miembros estáticos de la clase.
Persona::Persona(string nombre, int edad) {
    this->nombre = nombre;
    this->edad = edad;
    numero_personas++;
}

int main() {
    // Reserva memoria
    Persona *P = new Persona("Diana", 24);

    cout << "Numero de persona: " << Persona::numero_personas << endl;

    Persona *P2 = new Persona("Ximena", 22);

    cout << "Numero de persona: " << Persona::numero_personas << endl;

    P->establecerNombre("Juana");
    P2->setNombre("Paola").setEdad(23);

    return 0;
}