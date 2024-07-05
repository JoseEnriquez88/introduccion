// Escriba un programa que calcule x^y, donde tanto x como y son enteros positivos, sin utilizar la función pow.

#include <iostream>
using namespace std;

int calcularPotencia(int base, int exponente)
{
  if (exponente == 0)
  {
    return 1;
  }
  else if (exponente > 0)
  {
    int resultado = 1;
    for (int i = 1; i <= exponente; ++i)
    {
      resultado *= base;
    }
    return resultado;
  }
  else
  {
    double resultado = 1.0;
    for (int i = 1; i <= -exponente; ++i)
    {
      resultado *= base;
    }
    return 1 / resultado;
  }
}

int main()
{
  int x, y;
  cout << "Ingrese el valor de x: ";
  cin >> x;
  cout << "Ingrese el valor de y: ";
  cin >> y;

  int resultado = calcularPotencia(x, y);
  cout << x << "^" << y << " = " << resultado << endl;

  return 0;
}
