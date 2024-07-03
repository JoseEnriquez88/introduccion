/*3. Realice un programa que lea de la entrada estandar los siguientes datos de una persona:

    Edad: datao de tipo entero.
    Sexo: datao de tipo caracter.
    Altur en metros: dato de tipo real.

Tras leer los datos, el programa debe mostrarlos en la salida estandar*/

#include <iostream>
using namespace std;

int main()
{
  int edad;
  char sexo[10];
  float altura;

  cout << "Digite su edad: ";
  cin >> edad;
  cout << "Digite su sexo: ";
  cin >> sexo;
  cout << "Digite su altura: ";
  cin >> altura;

  cout << "\n\nSus datos son los siguientes:";
  cout << "\nEdad: " << edad;
  cout << "\nSexo: " << sexo;
  cout << "\nAltura: " << altura;

  return 0;
}