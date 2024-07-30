// Matrices dinamicas

// Ejemplo: rellenar una matriz de NxM y mostrar su contenido

#include <iostream>
#include <stdlib.h>
using namespace std;

void pedirDatos();
void mostrarMatriz(int **, int, int);

int **puntero_matriz, filas, columnas;

int main()
{
  pedirDatos();
  mostrarMatriz(puntero_matriz, filas, columnas);

  //! Liberar memoria utilizado en la matriz
  for (int i = 0; i < filas; i++)
  {
    delete[] puntero_matriz[i];
  }
  delete[] puntero_matriz;

  return 0;
}

void pedirDatos()
{
  cout << "Digite numero de filas: ";
  cin >> filas;
  cout << "Digite numero de columnas: ";
  cin >> columnas;

  // !Reservar memeoria para la matriz dinamica
  puntero_matriz = new int *[filas]; //! Reservando memoria para filas

  for (int i = 0; i < filas; i++)
  {
    puntero_matriz[i] = new int[columnas]; //! Reservando memoria para columnas
  }
  cout << "\nDigitando elementos de la matriz: \n";
  for (int i = 0; i < filas; i++)
  {
    for (int j = 0; j < columnas; j++)
    {
      cout << "Digite un numero[" << i << "][" << j << "]: ";
      cin >> *(*(puntero_matriz + i) + j);
    }
  }
}

void mostrarMatriz(int **puntero_matriz, int filas, int columnas)
{
  cout << "\nImprimiendo matriz:\n";
  for (int i = 0; i < filas; i++)
  {
    for (int j = 0; j < columnas; j++)
    {
      cout << *(*(puntero_matriz + i) + j) << " ";
    }
    cout << "\n";
  }
};
