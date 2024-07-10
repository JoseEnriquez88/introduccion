// Comparar cadenas - Funcion strcmp()

#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main()
{
  char palabra1[] = "Hola";
  char palabra2[] = "Hola";

  int comparacion = strcmp(palabra1, palabra2);

  if (comparacion == 0)
  {
    cout << "Ambas cadenas son iguales.";
    cout << "La palabra que se encuentra en ambas cadenas es: " << palabra1 << endl;
  }
  else
  {
    cout << "Ambas cadenas son diferentes:" << endl;
    cout << "Primer cadena: " << palabra1 << endl;
    cout << "Segunda cadena: " << palabra2 << endl;
  }

  system("pause");
  return 0;
}