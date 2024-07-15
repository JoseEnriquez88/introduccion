//  Escriba una función llamada al_cuadrado() que calcule el cuadrado del valor que se le transmite y despliegue el resultado.
//  La función deberá ser capaz de elevar al cuadrado números flotantes.

#include <iostream>
#include <conio.h>
using namespace std;

void pedirDatos();
void alCuadrado(float n);

float numero;

int main()
{
	pedirDatos();
	alCuadrado(numero);

	getch();
	return 0;
}

void pedirDatos()
{
	cout << "Digite un numero: ";
	cin >> numero;
}

void alCuadrado(float n)
{
	float cuadrado = 0;

	cuadrado = numero * numero;

	cout << "El cuadrado del numero es: " << cuadrado << endl;
}
