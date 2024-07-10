#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main()
{
  char palabra[] = "Jose";
  char palabra2[] = {'J', 'o', 's', 'e'};
  char nombre[30];

  cout << "Digite su nombre: ";
  // gets(nombre);
  cin.getline(nombre, 30, '\n');

  cout << nombre << endl;

  getch();
  return 0;
}