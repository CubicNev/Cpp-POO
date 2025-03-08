/**
 *  Ejemplo de herencia.
 *  Autor: Carlos Nevárez - CubicNev
 *  Fecha: 27-Feb-2025
 *
*/

# include <iostream>
# include <string>

using namespace std;

// Definicion clase Animal
class Animal {
protected:
    // Atributos
    static int numero_animales;
    string alimento;
public:
    // Metodos
    Animal();
    ~Animal();
    static int obtenerNumeroAnimales();
    string obtenerAlimento() {
        return alimento;
    };
    void comer() {
        cout << "Este animal esta comiendo " << alimento << "... nom nom" << endl;
    };
};

int Animal::numero_animales = 0;

Animal::Animal() {
    cout << "Nuevo animal..." << endl;
    numero_animales += 1;
}

Animal::~Animal() {
    cout << "Borrando animal..." << endl;
    numero_animales -= 1;
}

int Animal::obtenerNumeroAnimales() {
    return numero_animales;
}

// Definición clase Herviboro, hereda de Animal
class Herviboro : public Animal {
public:
    Herviboro() : Animal() {
        this->alimento = "plantas";
    }

    void pastar() {
        cout << "Este animal esta pastando..." << endl;
    }
};

// Definición clase Carnivoro, hereda de Animal
class Carnivoro : public Animal {
public:
    Carnivoro() : Animal() {
        this->alimento = "carne";
    }

    void cazar() {
        cout << "Este animal esta cazando..." << endl;
    }
};

int main() {
    Animal *a = new Animal();
    Herviboro *h = new Herviboro();
    Carnivoro *c = new Carnivoro();

    cout << "Numero animales: " << Animal::obtenerNumeroAnimales() << endl;

    a->comer();

    h->pastar();

    c->cazar();

    delete a;
    cout << "Numero de animales: " << Animal::obtenerNumeroAnimales() << endl;
}
