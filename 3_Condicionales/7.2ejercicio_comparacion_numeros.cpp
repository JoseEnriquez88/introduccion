/*Escribe un programa que lea de la entrada estándar tres números. Después debe leer un cuarto número e
indicar si el número coincide con alguno de los introducidos con anterioridad.*/

#include <iostream>
using namespace std;

int main()
{
  int num1, num2, num3, num4;

  cout << "Digite el primer numero: ";
  cin >> num1;
  cout << "Digite el segundo numero: ";
  cin >> num2;
  cout << "Digite el tercer numero: ";
  cin >> num3;
  cout << "Digite el cuarto numero: ";
  cin >> num4;

  if (num4 == num1 || num4 == num2 || num4 == num3)
    cout << "El cuarto numero, " << num4 << ", coincide con uno de los numeros introducidos anteriormente." << endl;
  else
    cout << "El cuarto numero, " << num4 << ", no coincide con ninguno de los numeros introducidos anteriormente." << endl;

  return 0;
}
