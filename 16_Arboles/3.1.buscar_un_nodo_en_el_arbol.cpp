// Buscar un nodo en el arbol

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
void mostrarArbol(Nodo *, int);
bool busqueda(Nodo *, int);

Nodo *arbol = NULL;

int main()
{
  menu();
  return 0;
}

void menu()
{
  int dato, opcion, contador = 0;

  while (opcion != 6)
  {
    cout << "\t.:MENU:." << endl;
    cout << "1. Insertar un nuevo nodo" << endl;
    cout << "2. Mostrar el arbol completo" << endl;
    cout << "3. Buscar un elemento en el arbol" << endl;
    cout << "6. Salir" << endl;
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
    case 2:
      cout << "\nMostrando el arbol completo:\n\n";
      mostrarArbol(arbol, contador);
      cout << "\n";
      system("pause");
      break;
    case 3:
      cout << "\nDigite el elemento a buscar: ";
      cin >> dato;
      if (busqueda(arbol, dato) == true)
        cout << "\nElemento " << dato << " a sido encontrado en el arbol\n";
      else
        cout << "\nElemento no encontrado.";
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
      insertarNodo(arbol->izquierda, n);
    insertarNodo(arbol->derecha, n);
  }
};

void mostrarArbol(Nodo *arbol, int cont)
{
  if (arbol == NULL)
    return;
  mostrarArbol(arbol->derecha, cont + 1);

  for (int i = 0; i < cont; i++)
  {
    cout << "   ";
  }
  cout << arbol->dato << endl;
  mostrarArbol(arbol->izquierda, cont + 1);
};

bool busqueda(Nodo *arbol, int n)
{
  if (arbol == NULL)
    return false;
  if (arbol->dato == n)
    return true;
  if (n < arbol->dato)
    return busqueda(arbol->izquierda, n);
  return busqueda(arbol->derecha, n);
};
