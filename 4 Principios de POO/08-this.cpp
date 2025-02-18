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
    // Constructor
    Persona(string nombre, int edad) {
        this->nombre = nombre;
        this->edad = edad;
    }

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

    void saludar() {
        cout << "Hola! Soy " << this->nombre << ", mi edad es " << this->edad << endl;
    }
};

int main() {
    // Reserva memoria
    Persona *P = new Persona("Diana", 24);

    P->establecerNombre("Ximena");
    P->establecerEdad(22);
    P->saludar();

    // Caso especial, hacer llmadas de funciones seguidas (Las funciones deben retornar la referencia al Objeto)
    P->setNombre("Diana").setEdad(23).saludar();
    // Se retorna a la persona a sí misma
    return 0;
}