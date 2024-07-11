// Pedir nombre al usuario en MAYUSCULA, si su nombre comienza por la letra A, convertir su nombre a minusculas,
// caso contrartio no convertirlo

#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

int main()
{
  char nombre[50], letra = 'A';

  cout << "Digite su nombre en mayuscula: ";
  cin.getline(nombre, 50, '\n');

  for (int i = 0; i < 1; i++)
  {
    if (nombre[i] == letra)
    {
      strlwr(nombre);
      cout << "\nEl nombre empieza con la letra A:" << endl;
      cout << nombre << endl;
    }
    else
    {
      cout << "El nombre NO empieza con la letra A." << endl;
      cout << nombre << endl;
    }
  }

  system("pause");
  return 0;
}