// El paso de parámetros de tipo vector se ilustra en el programa del vídeo de tipo vector se especifica de la misma forma
//  que se define una variable de tipo vector, salvo que no es necesario especificar su tamaño. Como a través de una variable
//  de tipo vector no es posible saber cuántos elementos almacena el vector, se utiliza otro parámetro para recibir el número
// de elementos que almacena el vector.

#include <iostream>
#include <stdlib.h>
using namespace std;

void cuadrado(int v[], int);
void muestra(int v[], int);

int main()
{
  const int TAM = 5;
  int vec[TAM] = {1, 2, 3, 4, 5};

  cuadrado(vec, TAM);
  muestra(vec, TAM);

  system("pause");
  return 0;
}

void cuadrado(int vec[], int tam)
{
  for (int i = 0; i < tam; i++)
  {
    vec[i] *= vec[i];
  }
};

void muestra(int vec[], int tam)
{
  for (int i = 0; i < tam; i++)
  {
    cout << vec[i] << " " << endl;
  }
};
