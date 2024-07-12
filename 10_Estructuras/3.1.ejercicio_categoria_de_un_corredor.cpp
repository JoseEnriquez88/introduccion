// Hacer una estructura llamada corredor, en la cual se tendrán los siguientes campos: Nombre, edad, sexo, club,
// pedir datos al usuario para un corredor, y asignarle una categoría de competición:
// - Juvenil menor o = 18 años
// - Señor menor o = 40 años
// - Veterano mayor a 40 años
// Posteriormente imprimir todos los datos del corredor, incluida su categoría de competición.

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <limits>
using namespace std;

struct Corredor
{
  char nombre[40];
  int edad;
  char sexo[50];
  char club[50];
} corredor;

int main()
{
  char categoria[20];

  cout << "Nombre: ";
  cin.getline(corredor.nombre, 40, '\n');
  cout << "Edad: ";
  cin >> corredor.edad;
  cin.ignore();
  cout << "Sexo: ";
  cin.getline(corredor.sexo, 50, '\n');
  cout << "Club: ";
  cin.getline(corredor.club, 50, '\n');

  if (corredor.edad <= 18)
  {
    strcpy(categoria, "Juvenil");
  }
  else if (corredor.edad <= 40)
  {
    strcpy(categoria, "Senior");
  }
  else
  {
    strcpy(categoria, "Veterano");
  }

  cout << "\nDatos del corredor:\n";
  cout << "Nombre: " << corredor.nombre << endl;
  cout << "Edad: " << corredor.edad << endl;
  cout << "Sexo: " << corredor.sexo << endl;
  cout << "Club: " << corredor.club << endl;
  cout << "Categoria: " << categoria << endl;

  cout << endl;
  system("pause");
  return 0;
}
