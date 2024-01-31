#include <iostream>
using namespace std;
void intercambioPorValor(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int num1 = 8, num2 = 12;
    intercambioPorValor(num1, num2);

    cout << "Después del intercambio por valor: num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}
