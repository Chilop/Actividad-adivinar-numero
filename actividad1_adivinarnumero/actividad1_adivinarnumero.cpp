// actividad1_adivinarnumero.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <time.h>
#include <cstdlib>
#include <stdlib.h>
#include <iostream>
using namespace std;


int main()
{
	/*
	int option = 0;
	bool exit = false;
	do
	{
		cout << endl << " Elige una de las actividades hechas en el semestre" << endl;
		cout << " 1. Adivinar numero random" << endl << " 2. salir" << endl;
		cin >> option;
		switch (option)
		{

		case 1:
	*/
			// cout << " Seleccionaste Adivinar numero random" << endl << endl;

			srand(time(0)); // srand es usado para generar otro numero aleatorio

			int randomNumber = rand() % 100 + 1; // rand se usa para generar un numero aleatorio entre 1 y 100
			int numAdivinar;
			int attempts = 0;
			int intentosTontos = 0;

			do {
				cout << " Adivina el numero entre 1 y 100: " << endl << endl;
				cin >> numAdivinar;
				attempts++;

				if (numAdivinar < 1 || numAdivinar > 100)
				{
					cout << " porfavor inserta numeros entre 1 y 100" << endl << endl << "No me hagas hacer algo que no quiero" << endl << endl;
					intentosTontos++;
				}
				else if (numAdivinar < randomNumber) {
					cout << " Tu numero es bajo. Sigue adivinando." << endl;
				}
				else if (numAdivinar > randomNumber) {
					cout << " Tu numero es alto. Sigue adivinando." << endl << endl;
				}

				if (attempts == 5) {
					cout << endl << " El numero a adivinar era: " << randomNumber << endl << endl;
				}

				if (intentosTontos == 3) // if de si el usuario pone otros numeros que no son, cierre automaticamente el programa
				{
					cout << "Te lo adverti, y ahora tendras que pagar las consecuencias" << endl << endl;
					break;
				}
			} while (numAdivinar != randomNumber);
			// el ciclo continua hasta que se adivine el numero random

			if (numAdivinar == randomNumber) // este mensaje se muestra si el usuario le acerto al numero
			{
				cout << " *aplausos* adivinaste el numero y aqui esta la cantidad de intentos que te tomo: " << attempts << " intentos." << endl;
			}
/*
			break;

		case 2:
			break;

		default:
			cout << " Porfavor elige una de las opciones " << endl; //para el futuro *añadir una imagen de gru apuntando con una pistola en puntos*	
		}

	} while (exit == true);
*/
	return 0;
}
