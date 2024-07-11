// Hacer un programa que determine si una palabra es polindroma

#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main()
{
  char palabra[30];
  char palabraInvertida[30];

  cout << "Digite una palabra: ";
  cin.getline(palabra, 30, '\n');

  strcpy(palabraInvertida, palabra);
  strrev(palabraInvertida);

  int comparacion = strcmp(palabraInvertida, palabra);

  if (comparacion == 0)
  {
    cout << "La palabra es palindroma" << endl;
  }
  else
  {
    cout << "La palabra NO es palindroma" << endl;
  }

  system("pause");
  return 0;
}
