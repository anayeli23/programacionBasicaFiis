#include <iostream>

using namespace std;

int main()
{

    int produccionMinima = 100;
    int produccionSemana;
    double incentivo;

    cout << "Ingrese la producción semanal del operario: ";
    cin >> produccionSemana;

    if (produccionSemana > produccionMinima)
    {
        incentivo = 0.05 * (produccionSemana - produccionMinima);
        cout << "El incentivo es de: $" << incentivo << endl;
    }
    else
    {
        cout << "No hay incentivo, la producción no supera el mínimo requerido." << endl;
    }

    return 0;
}