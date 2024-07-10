// Hacer un programa que pida al usuario que digite uan cadena de caracteres,
// luego verificar la longitud de la cadena, y si ésta supera a 10 caracteres mostrarla en pantalla,
// caso contrario no mostrarla

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main()
{
  char palabra[20];
  int longitud = 0;

  cout << "Digite una palabra: ";
  cin.getline(palabra, 20, '\n');

  longitud = strlen(palabra);

  if (longitud <= 10)
  {
    cout << "La palabra que digito es menor o igual a diez caracteres y es la siguiente: " << palabra << endl;
  }
  else
  {
    cout << "La palabra que digito supera los diez caracteres." << endl;
  }

  getch();
  return 0;
}