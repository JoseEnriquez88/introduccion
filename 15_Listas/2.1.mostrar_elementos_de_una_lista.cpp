// Mostrar elementos en una lista enlazada

#include <iostream>
#include <stdlib.h>
using namespace std;

struct Nodo
{
  int dato;
  Nodo *siguiente;
};

void menu();

void insertarLista(Nodo *&, int);
void mostrarLista(Nodo *);

Nodo *lista = NULL;

int main()
{
  menu();
  return 0;
}

void menu()
{

  int opcion, dato;
  while (opcion != 3)
  {
    cout << "\t.:MENU:." << endl;
    cout << "1. Insertar elemento a la lista.\n";
    cout << "2. Mostrar elementos de la lista.\n";
    cout << "3. Salir.\n";
    cout << "Opcion: ";
    cin >> opcion;

    switch (opcion)
    {
    case 1:
      cout << "\nDigite un numero: ";
      cin >> dato;
      insertarLista(lista, dato);
      cout << "\n";
      system("pause");
      break;
    case 2:
      mostrarLista(lista);
      cout << "\n";
      system("pause");
      break;
    }
    system("cls");
  }
}

void insertarLista(Nodo *&lista, int n)
{
  Nodo *nuevo_nodo = new Nodo();
  nuevo_nodo->dato = n;

  Nodo *aux1 = lista;
  Nodo *aux2;

  while ((aux1 != NULL) && (aux1->dato < n))
  {
    aux2 = aux1;
    aux1 = aux1->siguiente;
  }

  if (lista == aux1)
  {
    lista = nuevo_nodo;
  }
  else
  {
    aux2->siguiente = nuevo_nodo;
  }
  nuevo_nodo->siguiente = aux1;

  cout << "\tElemento " << n << " insertado a la lista.";
};

void mostrarLista(Nodo *lista)
{
  Nodo *actual = new Nodo();
  actual = lista;

  while (actual != NULL)
  {
    cout << actual->dato << " -> ";
    actual = actual->siguiente;
  }
};
