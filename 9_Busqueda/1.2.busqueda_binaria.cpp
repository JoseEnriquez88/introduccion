// Busqueda binaria

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
  int numeros[] = {1, 2, 3, 4, 5};
  int inf, sup, mitad, dato;
  char band = 'F';

  dato = 4; // Dato a buscar
  inf = 0;
  sup = 4;
  mitad = (inf + sup) / 2;

  while (inf <= sup)
  {
    if (numeros[mitad] == dato)
    {
      band = 'V';
      break;
    }
    else if (numeros[mitad] > dato)
    {
      sup = mitad - 1;
    }
    else
    {
      inf = mitad + 1;
    }
    mitad = (inf + sup) / 2;
  }

  if (band == 'V')
  {
    cout << "El numero ha sido encontrado en la posicion: " << mitad << endl;
  }
  else
  {
    cout << "El numero NO ha sido encontrado." << endl;
  }

  cout << endl;
  system("pause");
  return 0;
}
