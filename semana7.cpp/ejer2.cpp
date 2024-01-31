#include <iostream>
using namespace std;

int multiplicacionPorValor(int x, int y)
{
    return x * y;
}

int main()
{
    int num1 = 4, num2 = 6;
    int resultado = multiplicacionPorValor(num1, num2);

    cout << "La multiplicación por valor es: " << resultado << endl;

    return 0;
}
