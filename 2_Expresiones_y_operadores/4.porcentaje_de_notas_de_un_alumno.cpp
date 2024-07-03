/*La calificacion final de un estudiante es la media ponderada de tres notas: la nota de practicas que cuenta un 30% del total, la nota teorica que cuenta un 60%
y la nota de participacion que cuenta el 10% restante.
Escriba un programa que de la entrada estandar las tres notas de un alumno y escriba en la salida estandar su nota final*/

#include <iostream>
using namespace std;

int main()
{
  float practica, teoria, participacion, nota_final = 0;

  cout << "Digite la nota de practica: ";
  cin >> practica;
  cout << "Digite la nota de teoria: ";
  cin >> teoria;
  cout << "Digite la nota de participacion: ";
  cin >> participacion;

  practica *= 0.30;
  teoria *= 0.60;
  participacion *= 0.10;

  nota_final = practica + teoria + participacion;

  cout << "\nLa nota final es: " << nota_final;

  return 0;
}