#include <iostream>
using namespace std;

int main()
{
    float nota1, nota2, nota3;

    cout << "Ingresa la primera nota: ";
    cin >> nota1;

    cout << "Ingresa la segunda nota: ";
    cin >> nota2;

    cout << "Ingresa la tercera nota: ";
    cin >> nota3;

    float promedio = (nota1 + nota2 + nota3) / 3;

    cout << "El promedio es: " << promedio << endl;

    return 0;
}