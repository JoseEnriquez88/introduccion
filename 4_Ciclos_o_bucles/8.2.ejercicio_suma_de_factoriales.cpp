// Escriba un programa que calcule el valor de: 1!+2!+3!+...+n! (suma de factoriales).

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
  int numero, suma = 0, factorial = 1;

  cout << "Digite el total de elementos a sumar: ";
  cin >> numero;

  for (int i = 1; i <= numero; i++)
  {
    factorial *= i;
    suma += factorial;
  }

  cout << "\nLa suma de factoriales es: " << suma << endl;

  system("pause");
  return 0;
}
