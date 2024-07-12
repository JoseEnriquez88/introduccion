// Utilizar las 2 estructuras del problema 5, pero ahora pedir los datos para N alumnos,
// y calcular cuál de todos tiene el mejor promedio, e imprimir sus datos.

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <limits>
using namespace std;

struct Promedio
{
  float nota1;
  float nota2;
  float nota3;
};

struct Alumno
{
  char nombre[20];
  char sexo[10];
  int edad;
  struct Promedio prom;
} alumno1;

int main()
{
  float promedio_alumno;

  cout << "Nombre: ";
  cin.getline(alumno1.nombre, 20, '\n');
  cout << "Sexo: ";
  cin.getline(alumno1.sexo, 10, '\n');
  cout << "Edad: ";
  cin >> alumno1.edad;

  cout << ".:Notas del Examen:." << endl;
  cout << "Nota1: ";
  cin >> alumno1.prom.nota1;
  cout << "Nota2: ";
  cin >> alumno1.prom.nota2;
  cout << "Nota3: ";
  cin >> alumno1.prom.nota3;

  promedio_alumno = (alumno1.prom.nota1 + alumno1.prom.nota2 + alumno1.prom.nota3) / 3;

  cout << "\n\nMostrando Datos" << endl;
  cout << "Nombre: " << alumno1.nombre << endl;
  cout << "Sexo: " << alumno1.sexo << endl;
  cout << "Edad: " << alumno1.edad << endl;
  cout << "Promedio: " << promedio_alumno << endl;

  cout << endl;
  system("pause");
  return 0;
}
