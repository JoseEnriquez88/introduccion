// Transmision de direcciones

// Ejemplo => Intercambiar el valor de 2 variables

#include <iostream>
#include <stdlib.h>
using namespace std;

void intercambio(float *, float *);

int main()
{
  float num1 = 20.8, num2 = 6.78;

  cout << "Primer numero " << num1 << endl;
  cout << "Segundo numero " << num2 << endl;

  intercambio(&num1, &num2);

  cout << "\nDespues del intercambio:\n";
  cout << "El nuevo valor de numero 1 es: " << num1 << endl;
  cout << "El nuevo valor de numero 2 es: " << num2 << endl;

  return 0;
}

void intercambio(float *dirNum1, float *dirNum2)
{
  float aux;
  aux = *dirNum1;
  *dirNum1 = *dirNum2;
  *dirNum2 = aux;
}
