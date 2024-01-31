#include <iostream>
using namespace std;

int main()
{
    const int totalPreguntas = 20;
    int respuestasCorrectas = 4, respuestasIncorrectas = -2, respuestasEnBlanco = 0;

    cout << "Ingrese las respuestas del postulante:\n";

    for (int i = 1; i <= totalPreguntas; ++i)
    {
        char respuesta;
        cout << "Pregunta " << i << ": ";
        cin >> respuesta;

        switch (respuesta)
        {
        case 'c':
        case 'C':
            respuestasCorrectas += 4;
            break;

        case 'i':
        case 'I':
            respuestasIncorrectas -= 2;
            break;

        default:

            break;
        }
    }

    // Calculando puntaje total
    int puntajeTotal = respuestasCorrectas + respuestasIncorrectas;

    // Mostrar puntaje total
    cout << "\n--- Resultados ---\n";
    cout << "Respuestas Correctas: " << respuestasCorrectas << " puntos\n";
    cout << "Respuestas Incorrectas: " << respuestasIncorrectas << " puntos\n";
    cout << "Respuestas en Blanco: " << respuestasEnBlanco << " puntos\n";
    cout << "Puntaje Total: " << puntajeTotal << " puntos\n";

    return 0;
}
