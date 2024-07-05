// Escriba un programa que calcule el valor de: 1+2+3+...+n

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
  int numero, suma = 0, i;

  cout << "Digite el numero de elementos: ";
  cin >> numero;

  for (i = 1; i >= numero; i++)
  {
    suma += i;
  }

  cout << "\nLa suma es: " << suma << endl;

  getch();
  return 0;
}
