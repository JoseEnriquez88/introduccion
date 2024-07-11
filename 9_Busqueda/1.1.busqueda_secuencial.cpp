// Busqueda secuencial

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
  int arreglo[] = {3, 4, 2, 1, 5};
  int i, dato;
  char band = 'F';

  dato = 4; // => este es el numero a buscar
  i = 0;
  {
    while (band == 'F' && i < 5)
    {
      if (arreglo[i] == dato)
      {
        band = 'V';
      }
      i++;
    }

    if (band == 'F')
    {
      cout << "El numero a buscar no existe en el arreglo.";
    }
    else if (band == 'V')
    {
      cout << "El numero a sido encontrado en la pos: " << i - 1 << endl;
    }

    cout << endl;
    system("pause");
    return 0;
  }
}
