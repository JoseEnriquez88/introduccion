// insertar elementos en una cola

#include <iostream>
#include <stdlib.h>
using namespace std;

struct Nodo
{
  int dato;
  Nodo *siguiente;
};

void insertarCola(Nodo *&, Nodo *&, int);
bool colaVacia(Nodo *);

int main()
{
  Nodo *frente = NULL;
  Nodo *fin = NULL;
  int dato;

  cout << "Digite un numero: ";
  cin >> dato;
  insertarCola(frente, fin, dato);

  return 0;
}

void insertarCola(Nodo *&frente, Nodo *&fin, int n)
{
  Nodo *nuevo_nodo = new Nodo();
  nuevo_nodo->dato = n;
  nuevo_nodo->siguiente = NULL;

  if (colaVacia(frente))
  {
    frente = nuevo_nodo;
  }
  else
  {
    fin->siguiente = nuevo_nodo;
  }
  fin = nuevo_nodo;
  cout << "Elemento agregado a la cola con exito.";
};

bool colaVacia(Nodo *frente)
{
  return (frente == NULL) ? true : false;
};