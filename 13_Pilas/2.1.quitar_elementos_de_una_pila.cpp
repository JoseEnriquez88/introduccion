// Quitando elementos a una pila

#include <iostream>
#include <stdlib.h>
using namespace std;

struct Nodo
{
  int dato;
  Nodo *siguiente;
};

void agregarPila(Nodo *&, int); //! PUSH
void sacarPila(Nodo *&, int &); //! POP

int main()
{
  Nodo *pila = NULL;
  int dato;

  cout << "Digite un numero: ";
  cin >> dato;
  agregarPila(pila, dato);

  cout << "\nDigite otro numero: ";
  cin >> dato;
  agregarPila(pila, dato);

  cout << "\nQuitando elementos de una pila: ";
  while (pila != NULL)
  {
    sacarPila(pila, dato);
    if (pila != NULL)
    {
      cout << dato << " , ";
    }
    else
    {
      cout << dato << ".";
    }
  }

  return 0;
}

void agregarPila(Nodo *&pila, int n)
{
  Nodo *nuevo_nodo = new Nodo();
  nuevo_nodo->dato = n;
  nuevo_nodo->siguiente = pila;
  pila = nuevo_nodo;

  cout << "\nElemento " << n << " agregado a la pila." << endl;
};

void sacarPila(Nodo *&pila, int &n)
{
  Nodo *aux = pila;
  n = aux->dato;
  pila = aux->siguiente;
  delete aux;
};
