// Hacer una estructura llamada alumno, en la cual se tendrán los siguientes Campos: Nombre, edad, promedio,
// pedir datos al usuario para 3 alumnos, comprobar cuál de los 3 tiene el mejor promedio y posteriormente
// imprimir los datos del alumno.

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <limits>
using namespace std;

struct Alumno
{
  char nombre[50];
  int edad;
  float promedio;
} alumno[3];

int main()
{
  int mayor = 0, pos = 0;

  for (int i = 0; i < 3; i++)
  {
    cout << "Nombre del alumno: ";
    cin.getline(alumno[i].nombre, 50, '\n');
    cout << "Edad del alumno: ";
    cin >> alumno[i].edad;
    cout << "Promedio del alumno: ";
    cin >> alumno[i].promedio;
    cin.ignore();

    if (alumno[i].promedio > mayor)
    {
      mayor = alumno[i].promedio;
      pos = i;
    }
    cout << "\n";
  }

  cout << "\nAlumno con el mejor promedio: \n";
  cout << "Nombre: " << alumno[pos].nombre << endl;
  cout << "Edad: " << alumno[pos].edad << endl;
  cout << "Promedio: " << alumno[pos].promedio << endl;

  cout << endl;
  system("pause");
  return 0;
}