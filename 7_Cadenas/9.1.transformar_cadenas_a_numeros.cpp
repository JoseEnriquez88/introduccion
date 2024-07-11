// Transformar una cadena a numeros - Funcion atoi() y atof();

#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main()
{
  char cad[] = "123";
  char cad2[] = "123.456";
  int numeroEntero;
  float numeroReal;

  numeroEntero = atoi(cad);
  numeroReal = atof(cad2);

  cout << numeroEntero << endl;
  cout << numeroReal << endl;

  system("pause");
  return 0;
}