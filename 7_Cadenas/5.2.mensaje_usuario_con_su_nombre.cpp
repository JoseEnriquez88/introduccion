// Crear una cadena que tenga la siguiente frase "Hola que tal", luego crear otra cadena para preguntarle al usuario su nombre,
// por ultimo añadir el nombre al final de la primera cadena y mostrar el mensaje completo "Hola que tal (nombreDelUsuario)"

#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main()
{
  char frase[] = "Hola que tal ";
  char nombreUsuario[50];
  char mensajeFinal[100];

  cout << "Digite su nombre (maximo 50 caracteres): ";
  cin.getline(nombreUsuario, 50, '\n');

  strcpy(mensajeFinal, frase);
  strcat(mensajeFinal, nombreUsuario);

  cout << mensajeFinal << endl;

  system("pause");
  return 0;
}