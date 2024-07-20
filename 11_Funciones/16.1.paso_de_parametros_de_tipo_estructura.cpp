// Paso de parametros de tipo estructura

#include <iostream>
#include <stdio.h>
using namespace std;

struct Persona
{
  char nombre[30];
  int edad;
} persona1;

void pedirDatos();
void mostrarDatos(Persona);

int main()
{
  pedirDatos();
  mostrarDatos(persona1);

  system("pause");
  return 0;
}

void pedirDatos()
{
  cout << "Digite su nombre: ";
  cin.getline(persona1.nombre, 30, '\n');
  cout << "Digite su edad: ";
  cin >> persona1.edad;
};

void mostrarDatos(Persona person)
{
  cout << "\n\nNombre: " << person.nombre << endl;
  cout << "Edad: " << person.edad << endl;
};