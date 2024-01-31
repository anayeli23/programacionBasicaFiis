#include <iostream>
using namespace std;

int main() {
    
    double num1, num2, num3, num4;

    
    cout << "Ingresa el primer número: ";
    cin >> num1;

    cout << "Ingresa el segundo número: ";
    cin >> num2;

    cout << "Ingresa el tercer número: ";
    cin >> num3;

    cout << "Ingresa el cuarto número: ";
    cin >> num4;


    double temp;

    
    if (num2 > num1) { temp = num1; num1 = num2; num2 = temp; }
    if (num3 > num1) { temp = num1; num1 = num3; num3 = temp; }
    if (num4 > num1) { temp = num1; num1 = num4; num4 = temp; }


    if (num3 > num2) { temp = num2; num2 = num3; num3 = temp; }
    if (num4 > num2) { temp = num2; num2 = num4; num4 = temp; }
    if (num4 > num3) { temp = num3; num3 = num4; num4 = temp; }

    cout << "Números ordenados de mayor a menor: " << num1 << ", " << num2 << ", " << num3 << ", " << num4 << endl;

    return 0;
}