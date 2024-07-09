// Escribe un programa que lea de la entrada estándar un vector de números y
// muestre en la salida estándar los números del vector con sus índices asociados.

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
  int numeros[100], n;

  cout << "Digite la cantidad de numeros de elementos que va a tener el arreglo: ";
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cout << "Digite un numero: ";
    cin >> numeros[i];
  }

  for (int i = 0; i < n; i++)
  {
    cout << i << " -> " << numeros[i] << endl;
  }

  getch();
  return 0;
}