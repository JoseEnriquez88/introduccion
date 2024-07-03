// Escibe la suigiente expresion como expresion en C++_ a/b + 1
#include <iostream>
using namespace std;

int main()
{
  float a, b, resultado = 0;
  cout << "Digite el valor de a: ";
  cin >> a;
  cout << "Digite el valor de b: ";
  cin >> b;

  resultado = (a / b) + 1;

  cout << "\n\nEl resultado es: " << resultado<<endl;

  return 0;
};