#include <iostream>
#include <cmath>
using namespace std;

void cuboNumero()
{
  int num;
  cout << "Ingrese un numero: ";
  cin >> num;
  int cubo = pow(num, 3);
  cout << "El cubo de " << num << " es: " << cubo << endl;
}

void parOImpar()
{
  int num;
  cout << "Ingrese un numero: ";
  cin >> num;
  if (num % 2 == 0)
    cout << num << " es un numero par." << endl;
  else
    cout << num << " es un numero impar." << endl;
}

int main()
{
  int opcion;

  do
  {
    cout << "\nMENU:" << endl;
    cout << "1. Cubo de un numero" << endl;
    cout << "2. Numero par o impar" << endl;
    cout << "3. Salir" << endl;
    cout << "Ingrese una opcion: ";
    cin >> opcion;

    switch (opcion)
    {
    case 1:
      cuboNumero();
      break;
    case 2:
      parOImpar();
      break;
    case 3:
      cout << "Saliendo del programa." << endl;
      break;
    default:
      cout << "Opcion no valida. Por favor ingrese una opcion valida." << endl;
      break;
    }

  } while (opcion != 3);

  return 0;
}
