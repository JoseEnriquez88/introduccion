// Hacer un arreglo de estructura llamada atleta para N atletas que contenga los siguientes campos: nombre, país, numero_medallas.
//  y devuelva los datos (Nombre, país) del atleta que ha ganado el mayor número de medallas.

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <limits>
using namespace std;

struct Atleta
{
  char nombre[30];
  char pais[30];
  int numero_medallas;
} atletas[100];

int main()
{
  int numero_atletas, posMayor = 0;
  int mayor = 0;

  cout << "Digite el numero de atletas: ";
  cin >> numero_atletas;

  for (int i = 0; i < numero_atletas; i++)
  {
    cout << "\n";
    cin.ignore();
    cout << i + 1 << ". Digite nombre del atleta: ";
    cin.getline(atletas[i].nombre, 30, '\n');
    cout << i + 1 << ". Digite pais del atleta: ";
    cin.getline(atletas[i].pais, 30, '\n');
    cout << i + 1 << ". Digite numero de medallas del atleta: ";
    cin >> atletas[i].numero_medallas;

    if (atletas[i].numero_medallas > mayor)
    {
      mayor = atletas[i].numero_medallas;
      posMayor = i;
    }
    cout << "\n";
  }

  cout << "\nDatos del atleta con el mayor numero de medallas:\n";
  cout << "Nombre: " << atletas[posMayor].nombre << endl;
  cout << "Pais: " << atletas[posMayor].pais << endl;

  cout << endl;
  system("pause");
  return 0;
}