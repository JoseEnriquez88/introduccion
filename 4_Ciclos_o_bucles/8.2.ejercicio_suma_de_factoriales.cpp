// Escriba un programa que calcule el valor de: 1!+2!+3!+...+n! (suma de factoriales).

#include <iostream>
using namespace std;

int main()
{
  int numero;
  long long sumaFactoriales = 0;
  long long factorial = 1;

  cout << "Ingrese un numero: ";
  cin >> numero;

  for (int i = 1; i <= numero; ++i)
  {
    factorial *= i;
    sumaFactoriales += factorial;
  }

  cout << "La suma de los factoriales desde 1 hasta " << numero << " es: " << sumaFactoriales << endl;

  return 0;
}
