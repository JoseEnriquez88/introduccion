// Pedir al usuario 2 cadenas de caracteres de numeros, uno entero y el otro real,
// convertirlos a sus respectivos valores y por ultimo sumarlos

#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main()
{
  char primerosCaracteres[30];
  char segundosCaracteres[30];
  int numeroEntero;
  float numeroReal, suma = 0;

  cout << "Digite un numero entero: ";
  cin.getline(primerosCaracteres, 30, '\n');
  cout << "Digite un numero real: ";
  cin.getline(segundosCaracteres, 30, '\n');

  numeroEntero = atoi(primerosCaracteres);
  numeroReal = atof(segundosCaracteres);

  suma = numeroEntero + numeroReal;

  cout << "\nLos numeros que digito son los siguientes: " << endl;
  cout << "Numero entero: " << numeroEntero << endl;
  cout << "Numero real: " << numeroReal << endl;
  cout << "\nLa suma de ambos numeros es la siguiente: " << suma << endl;

  system("pause");
  return 0;
}