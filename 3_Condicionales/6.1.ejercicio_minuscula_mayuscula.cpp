/*Escriba un programa que lea de la entrada estandar un caracter e indique en la salida estandar si el caracter es una vocal minuscula o no.*/

#include <iostream>
using namespace std;

int main()
{
  char caracter;

  cout << "Digite un caracter: ";
  cin >> caracter;

  switch (caracter)
  {
  case 'a':
  case 'e':
  case 'i':
  case 'o':
  case 'u':
    cout << "El caracter es una vocal minuscula";
    break;
  default:
    cout << "El caracter NO es una vocal minuscula";
    break;
  }

  return 0;
}