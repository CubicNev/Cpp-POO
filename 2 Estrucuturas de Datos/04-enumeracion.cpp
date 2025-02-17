/**
 *  Enum
 *  Autor: Carlos Nevárez - CubicNev
 *  Fecha: 17-Feb-2025
 *
 *  Implementación de enum
*/

# include <iostream>
# include <string>

using namespace std;

int main() {

    enum dias_semana {lunes, martes, miercoles};
    dias_semana dia = martes;
    cout << dia << endl;

    enum week {monday='m', tuesday='t', wednesday='w'};
    week day = monday;
    cout << (char) day << endl;

    return 0;
}