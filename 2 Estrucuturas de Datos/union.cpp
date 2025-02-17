/**
 *  Union
 *  Autor: Carlos Nevárez - CubicNev
 *  Fecha: 17-Feb-2025
 *
 *  Implementación de union
*/

# include <iostream>
# include <string>

using namespace std;

int main() {
    union numero_letra {
        int numero;
        char letra;
    };

    numero_letra x = {'A'};

    cout << " x como número: " << x.numero << endl;
    cout << " x como letra: " << x.letra << endl;

    return 0;
}