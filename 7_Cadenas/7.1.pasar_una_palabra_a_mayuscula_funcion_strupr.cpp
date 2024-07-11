// Pasar una palabra a mayuscula - Funcion strupr()

#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main()
{
  char palabra[] = "Jose";

  strupr(palabra);

  cout << palabra << endl;

  system("pause");
  return 0;
}