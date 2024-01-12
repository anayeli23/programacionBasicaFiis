#include <iostream>
using namespace std;

int main() {
    double saldo = 1000.0;

 
    int opcion;
    do {
        cout << "\n--- Cajero Automático ---" << endl;
        cout << "1. Consultar saldo" << endl;
        cout << "2. Retirar dinero" << endl;
        cout << "3. Depositar dinero" << endl;
        cout << "4. Salir" << endl;

        
        cout << "\nIngresa el número de opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Saldo actual: $" << saldo << endl;
                break;
            case 2:
                double cantidadRetirar;
                cout << "Ingresa la cantidad a retirar: $";
                cin >> cantidadRetirar;

                if (cantidadRetirar > 0 && cantidadRetirar <= saldo) {
                    saldo -= cantidadRetirar;
                    cout << "Retiro exitoso. Saldo actual: $" << saldo << endl;
                } else {
                    cout << "Error: Cantidad no válida o saldo insuficiente." << endl;
                }
                break;
            case 3:
                double cantidadDepositar;
                cout << "Ingresa la cantidad a depositar: $";
                cin >> cantidadDepositar;

                if (cantidadDepositar > 0) {
                    saldo += cantidadDepositar;
                    cout << "Depósito exitoso. Saldo actual: $" << saldo << endl;
                } else {
                    cout << "Error: Cantidad no válida." << endl;
                }
                break;
            case 4:
                cout << "Gracias por utilizar el cajero automático. ¡Hasta luego!" << endl;
                break;
            default:
                cout << "Opción no válida. Por favor, elige una opción válida." << endl;
        }

    } while (opcion != 4);

    return 0;
}