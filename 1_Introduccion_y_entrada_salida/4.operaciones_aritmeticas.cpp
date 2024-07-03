// Escribe un programa que lea de la entrada estandar dos numeros y muestre en la salida estanda su suma, resta, multiplicacion y division

#include <iostream>
using namespace std;

int main()
{
  int numero1, numero2;
  int suma, resta, multiplicacion;
  float division;

  cout << "digite el primer numero: ";
  cin >> numero1;
  cout << "digite el segundo numero: ";
  cin >> numero2;

  suma = numero1 + numero2;
  resta = numero1 - numero2;
  multiplicacion = numero1 * numero2;
  division = numero1 / numero2;

  cout << "\nla suma de los dos numero que digito es: " << suma;
  cout << "\nla resta de los dos numero que digito es: " << resta;
  cout << "\nla multiplicacion de los dos numero que digito es: " << multiplicacion;
  cout << "\nla division de los dos numero que digito es: " << division;

  return 0;
}