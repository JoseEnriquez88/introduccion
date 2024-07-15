// Ejemplo, encontrar el mayor de dos numeros

#include <iostream>
#include <stdlib.h>
using namespace std;

// Prototipo de funcion
int encontrarMaximo(int x, int y);

int main()
{
  int n1, n2, mayor;

  cout << "Digite dos numeros: ";
  cin >> n1 >> n2;

  mayor = encontrarMaximo(n1, n2);

  cout << "El mayor de los dos numeros es: " << mayor << endl;

  cout << endl;
  system("pause");
  return 0;
}

// Definicion de funcion
int encontrarMaximo(int x, int y)
{
  int numMaximo;

  if (x > y)
  {
    numMaximo = x;
  }
  else
  {
    numMaximo = y;
  }

  return numMaximo;
}
