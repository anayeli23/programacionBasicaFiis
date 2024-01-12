#include <iostream>
using namespace std;

int main() {
    char nota; 

    cout << "Ingresa la nota alfanumérica (A, B, C, D, E): ";
    cin >> nota;

    cout << "El rango de notas correspondiente es: ";
    switch (nota) {
        case 'A':
            cout << "19-18";
            break;
        case 'B':
            cout << "17-14";
            break;
        case 'C':
            cout << "14-11";
            break;
        case 'D':
            cout << "10-5";
            break;
        case 'E':
            cout << "5-0";
            break;
        default:
            cout << "Nota no válida." << endl;
            break;
    }

    cout << endl;

    return 0;
}