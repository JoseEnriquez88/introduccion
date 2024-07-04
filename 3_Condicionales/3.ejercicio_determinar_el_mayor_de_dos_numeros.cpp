/*Escriba un programa que lea los dos numeros y determine cual de ellos es el mayor*/

#include <iostream>
using namespace std;

int main()
{
  int num1, num2;

  cout << "Digite el primer numero: ";
  cin >> num1;
  cout << "Digite el segundo numero: ";
  cin >> num2;

  if (num1 == num2)
  {
    cout << "\nAmbos numero son iguales.";
  }
  else if (num1 > num2)
  {
    cout << "\nEl primer numero, " << num1 << ", es mayor al segundo numero, " << num2 << "." << endl;
  }
  else
  {

    cout << "\nEl segundo numero, " << num2 << ", es mayor al primer numero, " << num1 << "." << endl;
  }

  return 0;
}