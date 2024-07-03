// Escribe la suigiente expresion como expresion en C++_ a/b + 1
#include <iostream>
using namespace std;

int main()
{
  // float a, b, resultado = 0;
  // cout << "Digite el valor de a: ";
  // cin >> a;
  // cout << "Digite el valor de b: ";
  // cin >> b;

  // resultado = (a / b) + 1;

  // cout.precision(2); /*PRECISION sirve para redondear a dos digitos los numeros decimales */
  // cout << "\n\nEl resultado es: " << resultado << endl;

  // return 0;

  // Ejercicio 2: Escribe la siguiente expresion matemaricva como expresion en c++: a+b/c+d

  float a, b, c, d, resultado = 0;
  cout << "Digite el valor de A: ";
  cin >> a;
  cout << "Digite el valor de B: ";
  cin >> b;
  cout << "Digite el valor de C: ";
  cin >> c;
  cout << "Digite el valor de D: ";
  cin >> d;

  resultado = (a + b) / (c + d);
  
  cout.precision(2);
  cout << "\n\nEl resultado es: " << resultado << endl;
};