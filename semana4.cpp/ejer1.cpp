#include <iostream>
using namespace std;

int main() {
    // Declarar variables
    int dias, anios, meses, diasRestantes;

    // Solicitar al usuario que ingrese el número de días
    cout << "Ingresa el número de días: ";
    cin >> dias;

    // Calcular años
    anios = dias / 365;
    
    // Calcular meses
    int diasEnMes[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};  // Corregir aquí
    meses = 0;
    while (dias >= diasEnMes[meses]) {
        dias -= diasEnMes[meses];
        ++meses;
    }

    // Calcular días restantes
    diasRestantes = dias;

    // Mostrar resultado
    cout << dias << " días son equivalentes a " << anios << " años, " << meses << " meses y " << diasRestantes << " días." << endl;

    if (meses == 0) {
        cout << "No hay meses completos en este periodo." << endl;
    } else {
        cout << "El periodo recae mayormente en el mes de ";
        switch (meses) {
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
                cout << "septiembre"; 
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
        }
        cout << "." << endl;
    }

    return 0;
}