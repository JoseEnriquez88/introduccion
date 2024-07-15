//  Escriba una función llamada mult() que acepte dos números en punto flotante como parámetros,
// multiplique estos dos números y despliegue el resultado.

#include <iostream>
#include <stdlib.h>
using namespace std;

void pedirDatos();
void mulplicarDatos(float x, float y);

float num1, num2;

int main()
{

  pedirDatos();
  mulplicarDatos(num1, num2);

  cout << endl;
  system("pause");
  return 0;
}

void pedirDatos()
{
  cout << "Digite dos numeros: ";
  cin >> num1 >> num2;
};

void mulplicarDatos(float x, float y)
{
  float multiplicacion = x * y;
  cout << "La multiplicacion es: " << multiplicacion << endl;
};