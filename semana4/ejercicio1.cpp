#include <iostream>

using namespace std;

int main()
{
    int numeros[10];
    int suma = 0;
    int contador_mayores = 0;
    double promedio;
    // Solicitar al usuario ingresar 10 números enteros
    for (int i = 0; i < 10; i++)
    {
        cout << "Ingrese un numero entero: ";
        cin >> numeros[i];
        suma += numeros[i];
    }
    // Calcular el promedio de los números ingresados
    promedio = static_cast<double>(suma) / 10;

    // Contar cuántos números son mayores que el promedio
    for (int i = 0; i < 10; i++)
    {
        if (numeros[i] > promedio)
        {
            contador_mayores++;
        }
    }

    // Mostrar cuántos números son mayores que el promedio
    cout << "Hay " << contador_mayores << " numeros mayores que el promedio." << endl;

    return 0;
}




