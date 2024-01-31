#include <iostream>

using namespace std;

int sumaPorValor(const int a, const int b)
{
    return a + b;
}

int main()
{
    const int num1 = 3, num2 = 8;
    const int resultado = sumaPorValor(num1, num2);

    cout << "La suma por valor es: " << resultado << endl;

    return 0;
}
