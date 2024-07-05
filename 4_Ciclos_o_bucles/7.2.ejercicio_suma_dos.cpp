// Escriba un programa que calcule valor de: 1+3+5+...2+2n-1

#include <iostream>
using namespace std;

int main()
{
  int numero, suma = 0;

  cout << "Ingrese un numero: ";
  cin >> numero;

  for (int i = 1; i <= numero; i++)
  {
    if (i % 2 != 0)
    {
      suma += i;
    }
  }

  cout << "La suma de los primeros " << numero << " números impares es: " << suma << endl;

  return 0;
}
