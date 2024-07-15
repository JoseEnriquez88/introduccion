// Plantillas de funcion

// Ejemplo: sacar el valor absoluto de un numero

#include <iostream>
#include <stdlib.h>
using namespace std;

template <class TIPOD>
void mostrarAbsoluto(TIPOD);

int main()
{
  int num1 = 4;
  float num2 = 56.67;
  double num3 = 123.5678;

  mostrarAbsoluto(num1);
  mostrarAbsoluto(num2);
  mostrarAbsoluto(num3);

  cout << endl;
  system("pause");
  return 0;
}

template <class TIPOD>
void mostrarAbsoluto(TIPOD numero)
{
  if (numero < 0)
  {
    numero = numero * -1;
  }
  cout << "El valor absoluto del numero es: " << numero << endl;
};
