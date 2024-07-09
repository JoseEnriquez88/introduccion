// Escribe un programa que defina un vector de números y calcule la multiplicación acumulada de sus elementos.

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
  int numeros[] = {1, 2, 3, 4, 5};
  int multiplicacion = 1, i;

  for (i = 0; i < 5; i++)
  {
    multiplicacion *= numeros[i];
  }

  cout << "La multiplicacion de los elementos del vector es: " << multiplicacion << endl;

  getch();
  return 0;
}