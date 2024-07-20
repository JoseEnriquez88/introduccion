/*Ejercicio 22: Escriba una funci�n escribeNumeros(int ini, int fin) que devuelva
en la salida est�ndar los n�meros del ini al fin. Escriba una versi�n que escriba los
n�meros en orden ascendente.

		escribeNumeros(ini,fin) = ini                             , si ini=fin
									escribeNumeros(ini,fin-1)       , si fin>ini
*/

#include <iostream>
#include <stdlib.h>
using namespace std;

// Prototipo de Funcion
int escribeNumeros(int, int);

int main()
{
	int ini, fin;

	cout << "Escriba el inicio: ";
	cin >> ini;
	cout << "Escriba el fin: ";
	cin >> fin;

	for (int i = ini; i <= fin; i++)
	{
		cout << escribeNumeros(i, fin) << " ";
	}

	system("pause");
	return 0;
}

int escribeNumeros(int ini, int fin)
{
	if (ini == fin)
	{ // Caso base
		return ini;
	}
	else
	{ // Caso general
		return escribeNumeros(ini, fin - 1);
	}
}
