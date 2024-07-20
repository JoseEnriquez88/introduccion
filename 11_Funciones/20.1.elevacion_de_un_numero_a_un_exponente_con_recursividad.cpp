/*Escriba una funci�n recursiva que calcule un n�mero elevado a una
potencia entera mayor o igual que cero: x^y.

	potencia(x,y) = x                  , y=1
						x*potencia(x,y-1)  , y>1
*/

#include <iostream>
#include <stdlib.h>
using namespace std;

int potencia(int, int);

int main()
{
	int base, exponente;

	cout << "Digite numero base: ";
	cin >> base;
	cout << "Digite exponente: ";
	cin >> exponente;

	cout << "\nResultado: " << potencia(base, exponente) << endl;

	system("pause");
	return 0;
}

int potencia(int x, int y)
{
	int pot;
	if (y == 1)
	{ // Caso base
		pot = x;
	}
	else
	{ // Caso general
		pot = x * potencia(x, y - 1);
	}
	return pot;
}
