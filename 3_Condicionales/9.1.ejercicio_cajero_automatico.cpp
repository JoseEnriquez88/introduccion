// Hacer un programa que simule un cajero automático con un saldo inicial de 1000 Dólares.

#include <iostream>
using namespace std;

int main()
{
  int saldoInicial = 1000, opcion;
  float extra, saldo = 0, retiro;

  cout << "\tBienvenido a su cajero virtual" << endl;
  cout << "1. Ingresar dinero" << endl;
  cout << "2. Retirar dinero" << endl;
  cout << "3. Salir" << endl;
  cout << "\nOpcion: ";
  cin >> opcion;

  switch (opcion)
  {
  case 1:
    cout << "Digite la cantidad de dinero a ingresar: ";
    cin >> extra;
    saldo = saldoInicial + extra;
    cout << "Dinero en la cuenta: " << saldo;
    break;
  case 2:
    cout << "Digite la cantidad de dinero que va a retirar: ";
    cin >> retiro;
    if (retiro > saldoInicial)
    {
      cout << "No posee esa cantidad de dinero en la cuenta.";
    }
    else
    {
      saldo = saldoInicial - retiro;
      cout << "Dinero en cuenta: " << saldo;
    }
  case 3:
    break;
  }

  return 0;
}