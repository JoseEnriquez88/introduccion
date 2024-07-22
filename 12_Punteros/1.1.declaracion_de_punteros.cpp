// Declaracion de punteros

/* &n => la direccion de n
 *n => la variable cuya direccion esta alamcenada en n
 */

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
  int num, *dir_num;

  num = 20;
  dir_num = &num;

  cout << "Numero: " << *dir_num << endl;
  cout << "Direccion de memoria: " << dir_num << endl;

  return 0;
}