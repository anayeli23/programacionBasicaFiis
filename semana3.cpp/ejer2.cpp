#include <iostream>
using namespace std;

int main() {
    
    int N, esPrimo;

    cout << "Ingresa un valor entero positivo N: ";
    cin >> N;

    
    esPrimo = (N > 1);

    for (int i = 2; i * i <= N && esPrimo; ++i) {
        if (N % i == 0) {
            esPrimo = 0;
        }
    }


    cout << (esPrimo ? "Es primo." : "No es primo.") << endl;

    return 0;
}