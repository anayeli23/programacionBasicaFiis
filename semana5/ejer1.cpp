#include <iostream>
using namespace std;

int main()
{
    int meses;
    cout << "ingrese un numero del 1 al 12" << endl;
    cin >> meses;

    while (meses > 12 || meses <= 0)
    {
        cout << "ingrese un numero del uno al 12" << endl;
        cin >> meses;
    }
    switch (meses)
    {

    case 1:
        cout << "enero";
        break;
    case 2:
        cout << "febrero";
        break;
    case 3:
        cout << "marzo";
        break;
    case 4:
        cout << "abril";
        break;
    case 5:
        cout << "mayo";
        break;
    case 6:
        cout << "junio";
        break;
    case 7:
        cout << "julio";
        break;
    case 8:
        cout << "agosto";
        break;
    case 9:
        cout << "setiembre";
        break;
    case 10:
        cout << "octubre";
        break;
    case 11:
        cout << "noviembre";
        break;
    case 12:
        cout << "diciembre";
        break;
    default:
        cout << "numero errado" << endl;
        break;
        return 0;
    }
}