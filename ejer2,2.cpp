#include <iostream>
using namespace std;
void multiplicacionPorReferencia(int &x, int &y, int &resultado)
{
    resultado = x * y;
}

int main()
{
    int num1 = 8, num2 = 3, resultado;
    multiplicacionPorReferencia(num1, num2, resultado);

    cout << "La multiplicación por referencia es: " << resultado << endl;

    return 0;
}
