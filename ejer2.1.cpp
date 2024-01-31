#include <iostream>
using namespace std;
void sumaPorReferencia(int &a, int &b, int &resultado)
{
    resultado = a + b;
}

int main()
{
    int num1 = 2, num2 = 8, resultado;
    sumaPorReferencia(num1, num2, resultado);

    cout << "La suma por referencia es: " << resultado << endl;

    return 0;
}
