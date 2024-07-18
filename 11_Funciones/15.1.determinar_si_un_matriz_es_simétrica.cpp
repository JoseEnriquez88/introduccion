/*Desarrollar una funcion que determine si una matriz es simetrica o no.

Una matriz es simetrica: A = A^t

- La matriz debe ser cuadrada. _--
- Aij = Aji

|2  5  9|			|2  5  9|
|5  8 -1|     ->    |5  8 -1|
|9 -1 10|			|9 -1 10|

*/

#include <iostream>
#include <stdlib.h>
using namespace std;

void pedirDatos();
void comprobarSimetria(int m[][100], int, int);

int m[100][100], nfilas, ncol;

int main()
{
	pedirDatos();
	comprobarSimetria(m, nfilas, ncol);

	system("pause");
	return 0;
}

void pedirDatos()
{
	cout << "Digite el numero de filas: ";
	cin >> nfilas;
	cout << "Digite el numero de columnas: ";
	cin >> ncol;

	for (int i = 0; i < nfilas; i++)
	{
		for (int j = 0; j < ncol; j++)
		{
			cout << "Digite m[" << i << "][" << j << "]: ";
			cin >> m[i][j];
		}
	}
}

void comprobarSimetria(int m[][100], int nfilas, int ncol)
{
	int cont = 0;

	if (nfilas == ncol)
	{
		for (int i = 0; i < nfilas; i++)
		{
			for (int j = 0; j < ncol; j++)
			{
				if (m[i][j] == m[j][i])
				{
					cont++;
				}
			}
		}
	}

	if (cont == nfilas * ncol)
	{
		cout << "\nLa matriz es Simetrica";
	}
	else
	{
		cout << "\nLa matriz NO es simetrica";
	}
}
