// Paso de parametros por referencia

#include <iostream>
#include <stdlib.h>
using namespace std;

void valoresNuevos(int &, int &);

int main()
{
  int num1, num2;

  cout << "Digite dos numeros: ";
  cin >> num1 >> num2;

  valoresNuevos(num1, num2);

  cout << "El nuevo valor del primer numero es: " << num1 << endl;
  cout << "El nuevo valor del segundo numero es: " << num2 << endl;

  cout << endl;
  system("pause");
  return 0;
}

// & => significa la direccion de...

void valoresNuevos(int &xnum, int &ynum)
{
  cout << "El valor del primer numero es: " << xnum << endl;
  cout << "El valor del segundo numero es: " << ynum << endl;

  xnum = 89;
  ynum = 45;
}