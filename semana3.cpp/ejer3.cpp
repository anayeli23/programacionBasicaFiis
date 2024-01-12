#include <iostream>
using namespace std;
int main()
{

    double velocidadKmh, velocidadMps;

    cout << "Ingresa la velocidad del automóvil en kilómetros por hora: ";
    cin >> velocidadKmh;

    velocidadMps = velocidadKmh / 3.6;

    cout << "La velocidad del automóvil en metros por segundo es: " << velocidadMps << " m/s" << endl;

    return 0;
}