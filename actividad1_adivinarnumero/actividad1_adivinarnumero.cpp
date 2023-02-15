// actividad1_adivinarnumero.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <time.h>
#include <cstdlib>
#include <stdlib.h>
#include <iostream>
using namespace std;


int main()
{
	int randomnumber, numeroelegido, adivinacion, attempts = 0, forzarApagado = 0;
	bool proceso = true;
	srand((unsigned)time(NULL));
	randomnumber = 1 + rand() % (101);
	cout << "Voy a elegir un numero al azar entre el 1 y el 100" << endl << endl << "Vas a tratar de adivinar el numero *pulgar arriba*" << endl;

	while (proceso == false);
	{
		cout << "elige un numero" << endl;
		cin >> adivinacion;
		attempts = attempts + 1;

		if (adivinacion >= 1 && adivinacion <= 100)
		{
			if (adivinacion > randomnumber)
			{
				cout << "El numero que buscas es MENOR que tu prediccion" << endl;
			}
			else if (adivinacion < randomnumber)
			{
				cout << "El numero que buscas es MAYOR que tu prediccion" << endl;
			}
			else if (attempts >= 5)
			{
				cout << "El numero que elegi fue: " << randomnumber << endl;
			}
			else
			{
				cout << "adivinaste el numero!" << endl;
				proceso = true;
			}
		}
		else
		{
			cout << "Ingrese un numero dentro del rango de 1 y 100" << endl << "NO ME OBLIGUES A HACER ALGO QUE NO QUIERO" << endl << endl;
			forzarApagado = forzarApagado + 1;
		}
		if (forzarApagado >= 5)
		{
			proceso = true;
			cout << endl << endl << "Te lo adverti" << endl;
		}

	}
}
