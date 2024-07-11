// Metodo burbuja

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
  int numeros[] = {4, 1, 2, 3, 5};
  int i, j, aux;

  for (i = 0; i < 5; i++)
  {
    for (j = 0; j < 5; j++)
    {
      if (numeros[j] > numeros[j + 1])
      {
        aux = numeros[j];
        numeros[j] = numeros[j + 1];
        numeros[j + 1] = aux;
      }
    }
  }

  cout << "Orden ascendente: ";
  for (i = 0; i < 5; i++)
  {
    cout << numeros[i] << " ";
  }

  cout << "\nOrden descendente: ";
  for (i = 4; i >= 0; i--)
  {
    cout << numeros[i] << " ";
  }

  cout << endl;
  system("pause");
  return 0;
}
