// Escribe la siguiente expresion como expresion en c++: a+b/c/d+e/f
#include <iostream>
using namespace std;

int main()
{
  // float a, b, c, d, e, f, resultado = 0;

  // cout << "Digite el valor de A: ";
  // cin >> a;
  // cout << "Digite el valor de B: ";
  // cin >> b;
  // cout << "Digite el valor de C: ";
  // cin >> c;
  // cout << "Digite el valor de D: ";
  // cin >> d;
  // cout << "Digite el valor de E: ";
  // cin >> e;
  // cout << "Digite el valor de F: ";
  // cin >> f;

  // resultado = (a + (b / c)) / (d + (e + f));

  // cout.precision(2);
  // cout << "\n\nEl resultado es: " << resultado << endl;

  // return 0;

  // Ejercicio 2: Escribe la siguiente expresion matemaricva como expresion en c++: a+b/c-d
  float a, b, c, d, resultado = 0;

  cout << "Digite el valor de A: ";
  cin >> a;
  cout << "Digite el valor de B: ";
  cin >> b;
  cout << "Digite el valor de C: ";
  cin >> c;
  cout << "Digite el valor de D: ";
  cin >> d;

  resultado = a + (b / (c - d));

  cout.precision(2);
  cout << "\n\nEl resultado es: " << resultado << endl;
  
  return 0;
}