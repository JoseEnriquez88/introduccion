// Pedir al usuario una cadena de caracteres, almacenarla en un arreglo y copiar todo su contenido hacia otro
// arreglo de caracteres

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main()
{
  char cadena[30];
  char cadenaCopiada[30];

  cout << "Digite una palabra: ";
  cin.getline(cadena, 30, '\n');

  strcpy(cadenaCopiada, cadena);

  cout << "La palabra se copio a otra cadena y es la siguiente: " << cadenaCopiada << endl;

  getch();
  return 0;
}