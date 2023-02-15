// actividad1_adivinarnumero.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <time.h>
#include <cstdlib>
#include <stdlib.h>
#include <iostream>
using namespace std;

int* numeroalmacenado;
int randomnumber, numeroelegido, adivinacion, attempts = 0, forzarApagado = 0;
int proceso = 0;

int main()
{
	cout << "Voy a elegir un numero al azar entre el 1 y el 100" << endl << endl << "Vas a tratar de adivinar el numero *pulgar arriba*" << endl;
	srand(time(NULL));
	randomnumber = 1 + rand() % (101);
	numeroalmacenado = &randomnumber;
	numeroelegido = *numeroalmacenado;
	cout << numeroelegido << endl;

	do
	{
		cout << "elige un numero" << endl;
		cin >> adivinacion;
		attempts++;

		if (attempts >= 5)
		{
			cout << "El numero que elegi fue: " << numeroelegido << endl;
		}
		if (adivinacion > numeroelegido)
		{
			cout << "El numero que buscas es MENOR que tu prediccion" << endl;
		}
		else if (adivinacion < numeroelegido)
		{
			cout << "El numero que buscas es MAYOR que tu prediccion" << endl;
		}
	} while (proceso == 0);
	{
		
	{

	} {
		cout << "Ingrese un numero dentro del rango de 1 y 100" << endl << "NO ME OBLIGUES A HACER ALGO QUE NO QUIERO" << endl << endl;
		forzarApagado++;
		if (forzarApagado >= 5)
		{
			proceso = 1;

			cout << endl << endl << "Te lo adverti" << endl;
		}
		}
	}

}