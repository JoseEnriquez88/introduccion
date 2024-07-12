// Realizar un programa que lea un arreglo de estructuras los datos de N empleados
//  de la empresa y que imprima los datos del empleado con mayor y menor salario.

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <limits>
using namespace std;

struct Empleado
{
  char nombre[20];
  float salario;
} empleados[100];

int main()
{
  int n_empleados, posMayor = 0, posMenor = 0;
  float mayor = 0, menor = 999999;

  cout << "Digite el numero de empleados: ";
  cin >> n_empleados;

  for (int i = 0; i < n_empleados; i++)
  {
    cin.ignore();
    cout << i + 1 << ". Digite su nombre: ";
    cin.getline(empleados[i].nombre, 20, '\n');
    cout << i + 1 << ". Digite su salario: ";
    cin >> empleados[i].salario;

    if (empleados[i].salario > mayor)
    {
      mayor = empleados[i].salario;
      posMayor = i;
    }
    if (empleados[i].salario < menor)
    {
      menor = empleados[i].salario;
      posMenor = i;
    }
    cout << "\n";
  }

  cout << "\nDatos del empleado con el mayor salario:\n";
  cout << "Nombre: " << empleados[posMayor].nombre << endl;
  cout << "Salario: " << empleados[posMayor].salario << endl;

  cout << "\nDatos del empleado con el menor salario:\n";
  cout << "Nombre: " << empleados[posMenor].nombre << endl;
  cout << "Salario: " << empleados[posMenor].salario << endl;

  cout << endl;
  system("pause");
  return 0;
}