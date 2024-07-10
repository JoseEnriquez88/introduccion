// Pedir al usuario que digite 2 cadenas de caracteres, e indicar si ambas cadenas son iguales,
// en caso de no serlo, indicar cual es mayor alfabeticamente

#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main()
{
  char palabra1[20];
  char palabra2[20];

  cout << "Digite la primera palabra: ";
  cin.getline(palabra1, 20, '\n');
  cout << "Digite la segunda palabra: ";
  cin.getline(palabra2, 20, '\n');

  int comparacion = strcmp(palabra1, palabra2);

  if (comparacion == 0)
  {
    cout << "Ambas cadenas son iguales.";
  }
  else if (comparacion > 0)
  {
    cout << "La primera palabra es mayor alfabéticamente que la segunda palabra." << endl;
  }
  else
  {
    cout << "La segunda palabra es mayor alfabéticamente que la primera palabra." << endl;
  }

  system("pause");
  return 0;
}