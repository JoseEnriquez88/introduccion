// Escriba un fragmento de programa que intercambie los valores de dos variables

#include <iostream>
using namespace std;

// int main()
// {
//   int x, y, aux;

//   cout << "Digite el valor de x: ";
//   cin >> x;
//   cout << "Digite el valor de y: ";
//   cin >> y;

//   aux = x;
//   x = y;
//   y = aux;

//   cout << "El nuevo valor de x es: " << x << endl;
//   cout << "El nuevo valor de y es: " << y << endl;

//   return 0;
// }

// #############################################################################################################################
/*Ejercio 2: Escriba un programa que lea la nota final de cuatro alumnos y calucle la nota final media de los cuatros alumnos*/

int main()
{
  float nota1, nota2, nota3, nota4;

  cout << "Ingrese la nota final del primer alumno: ";
  cin >> nota1;
  cout << "Ingrese la nota final del segundo alumno: ";
  cin >> nota2;
  cout << "Ingrese la nota final del tercer alumno: ";
  cin >> nota3;
  cout << "Ingrese la nota final del cuarto alumno: ";
  cin >> nota4;

  float media = (nota1 + nota2 + nota3 + nota4) / 4;

  cout << "\nLa nota final media de los cuatro alumnos es: " << media << endl;

  return 0;
}
