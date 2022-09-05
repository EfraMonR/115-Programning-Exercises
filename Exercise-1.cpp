/*Dado un número ingresado por teclado, retorne su raíz cuadrada y el cuadrado*/

#include <iostream>
#include <locale.h>
#include <string>
#include <Windows.h>
#include <math.h> //Agregar para funciones matemáticas

using namespace std;

int main()
{
    float num, ra, po;
    string again = "S";

    while (again == "S" || again == "s")
    {
        system("chcp 65001");
        system("cls"); // Para limpiar la pantalla

        cout << "\n\t Programa que cálcula la raíz y el cuadrado de un número";
        cout << "\n\t --------------------------------------------------------\n\n";
        cout << "\n\t Digite un número\t";
        cin >> num;

        if (num < 0)
        {
            cout << "\n\t El número no tiene raíz real\n";
        }
        else
        {
            ra = sqrt(num); // Raiz cuadrada del número
        }

        po = pow(num, 2); // Cuadrado del número

        cout << "\n\t Imprimir datos y resultados";
        cout << "\n\t --------------------------------------------------------\n\n";
        cout << "\n\t El numéro digitado es: " << num << endl << endl;

        if(num >= 0)
        {
            cout << "\n\t La raíz cuadra es: " << "+/-" << ra << "\n\n";
        }

        cout << "\n\t El cuadrado del número es: " << po << "\n\n";
        cout << "\n\t --------------------------------------------------------\n\n";
        cout << "\n\t ¿Desea continuar procesando? S o N\t";

        cin >> again;
        while(again != "S" && again != "s" && again != "N" && again != "n")
        {
            cout << "\n\t Error, digite por favor S o N \t";
            Sleep(500); 
            cin >> again;
        }
    }
    cout << endl << endl;
    system("pause");
    return 0;
}