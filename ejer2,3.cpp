#include <iostream>
using namespace std;
void intercambioPorReferencia(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int num1 = 3, num2 = 11;
    intercambioPorReferencia(num1, num2);

    cout << "Después del intercambio por referencia: num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}
