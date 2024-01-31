
      #include <iostream>
using namespace std;
int main()
{
    int Partido_Ganado = 0;
    int Partido_Empatado = 0;
    int Partido_Perdido = 0;
    char respuesta;
    int puntajeTotal;

    for (int i = 0; i < 20; i++)
    {
        cout << "Ingrese el resultado del partido " << i + 1 << "(G=ganado E=empatado P=perdido): ";
        cin >> respuesta;

        if (respuesta == 'a')
        {
            Partido_Ganado++;
        }
        else if (respuesta == 'b')
        {
            Partido_Empatado++;
        }
        else if (respuesta == 'c')
        {
            Partido_Perdido++;
        }
    }

    puntajeTotal = Partido_Ganado * 3 + Partido_Empatado * 1;

    cout << "El puntaje total del equipo de futbol  es 4: " << puntajeTotal << std::endl;

    return 0;
}