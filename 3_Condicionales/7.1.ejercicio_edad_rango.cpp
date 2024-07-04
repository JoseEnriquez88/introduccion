/*Escriba un programa que solicite una edad (un entero) e indique en la salida estándar si la edad introducida está en el rango [18-25].*/

#include <iostream>
using namespace std;

int main()
{
  int edad;

  cout << "Digite una edad: ";
  cin >> edad;

  if (edad >= 18 && edad <= 25)
  {
    cout << "La edad: " << edad << ", se encuentra dentro del rango 18-25." << endl;
  }
  else
  {
    cout << "La edad: " << edad << ", NO se encuentra dentro del rango 18-25." << endl;
  }

  return 0;
}