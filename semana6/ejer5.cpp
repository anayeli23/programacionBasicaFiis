#include <iostream>

using namespace std;

int main()
{

    int numero_Alumnos;
    double costo_Alumno, costo_Total;

    cout << "Ingrese el número de alumnos: ";
    cin >> numero_Alumnos;

    if (numero_Alumnos >= 100)
    {
        costo_Alumno = 65.00;
    }
    else if (numero_Alumnos >= 99)
    {
        costo_Alumno = 70.00;
    }
    else if (numero_Alumnos >= 49)
    {
        costo_Alumno = 95.00;
    }
    else
    {
        costo_Alumno = 0;
        // el costo por alumno para el caso de menos de 49 alumnos
        costo_Total = 4000.00;
    }