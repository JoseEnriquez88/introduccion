// Ordenamiento por seleccion

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
  int numeros[] = {3, 2, 1, 5, 4};
  int i, j, aux, min;

  for (i = 0; i < 5; i++)
  {
    min = i;
    for (j = i + 1; j < 5; j++)
    {
      if (numeros[j] < numeros[min])
      {
        min = j;
      }
    }
    aux = numeros[i];
    numeros[i] = numeros[min];
    numeros[min] = aux;
  }

  cout << "Orden ascendente: ";
  for (i = 0; i < 5; i++)
  {
    cout << numeros[i] << " ";
  }

  cout << "\nOrden descendente: ";
  for (j = 4; j >= 0; j--)
  {
    cout << numeros[j] << " ";
  }

  cout << endl;
  system("pause");
  return 0;
}