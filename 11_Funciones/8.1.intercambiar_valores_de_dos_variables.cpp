// Intercambiar el valor de 2 variables utilizando paso de parámetros por referencia.

#include <iostream>
#include <stdlib.h>
using namespace std;

void intercambiar(int &, int &);

int main()
{
  int num1 = 10, num2 = 15;

  cout << "El valor del numero 1 es: " << num1 << endl;
  cout << "El valor del numero 2 es: " << num2 << endl;

  intercambiar(num1, num2);

  cout << "\nEl nuevo valor de numero 1 es: " << num1 << endl;
  cout << "El nuevo valor de numero 2 es: " << num2 << endl;

  cout << endl;
  system("pause");
  return 0;
}

void intercambiar(int &num1, int &num2)
{
  int aux;
  aux = num1;
  num1 = num2;
  num2 = aux;
};
