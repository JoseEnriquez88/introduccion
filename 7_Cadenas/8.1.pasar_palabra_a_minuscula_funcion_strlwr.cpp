// Pasar una palabra a minusculas - Funcion strlwr()

#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

int main()
{

  char palabra[] = "PROGRAMACION";

  strlwr(palabra);

  cout << palabra << endl;

  system("pause");
  return 0;
}