// Convertir dos cadenas de minusculas a MAYUSCULAS. Compararla, y decir si son iguales o no

#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main()
{
  char primerPalabra[30];
  char segundaPalabra[30];

  cout << "Digite la primera palabra: ";
  cin.getline(primerPalabra, 30, '\n');
  cout << "Digite la segunda palabra: ";
  cin.getline(segundaPalabra, 30, '\n');

  strupr(primerPalabra);
  strupr(segundaPalabra);

  int comparacion = strcmp(primerPalabra, segundaPalabra);

  if (comparacion == 0)
  {
    cout << "Las palabras son iguales. La palabra es: " << endl;
    cout << primerPalabra << endl;
  }
  else
  {
    cout << "\nLas palabras NO son iguales. Las palabras son: " << endl;
    cout << "\nPrimera palabra: " << primerPalabra << endl;
    cout << "Segunda palabra: " << segundaPalabra << endl;
  }

  system("pause");
  return 0;
}