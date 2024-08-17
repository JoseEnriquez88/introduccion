// Insertar nodo en un arbol binario de busqueda

#include <iostream>
#include <stdlib.h>
using namespace std;

struct Nodo
{
  int dato;
  Nodo *derecha;
  Nodo *izquierda;
};

void menu();

Nodo *crearNodo(int);
void insertarNodo(Nodo *&, int);

Nodo *arbol = NULL;

int main()
{
  menu();
  return 0;
}

void menu()
{
  int dato, opcion = 0;

  while (opcion != 2)
  {
    cout << "\t.:MENU:." << endl;
    cout << "1. Insertar un nuevo nodo" << endl;
    cout << "2. Salir" << endl;
    cout << "Opcion: ";
    cin >> opcion;

    switch (opcion)
    {
    case 1:
      cout << "\nDigite un numero: ";
      cin >> dato;
      insertarNodo(arbol, dato);
      cout << "\n";
      system("pause");
      break;
    }
    system("cls");
  }
}

Nodo *crearNodo(int n)
{
  Nodo *nuevo_nuedo = new Nodo();
  nuevo_nuedo->dato = n;
  nuevo_nuedo->derecha = NULL;
  nuevo_nuedo->izquierda = NULL;

  return nuevo_nuedo;
};

void insertarNodo(Nodo *&arbol, int n)
{
  if (arbol == NULL)
  {
    Nodo *nuevo_nodo = crearNodo(n);
    arbol = nuevo_nodo;
  }
  else
  {
    int valorRaiz = arbol->dato;
    if (n < valorRaiz)
    {
      insertarNodo(arbol->izquierda, n);
    }
    else
    {
      insertarNodo(arbol->derecha, n);
    }
  }
};
