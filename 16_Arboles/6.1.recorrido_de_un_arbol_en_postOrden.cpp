// Recorrido de un arbol en post orden

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
void preOrden(Nodo *);
void inOrden(Nodo *);
void postOrden(Nodo *);

Nodo *arbol = NULL;

int main()
{
  menu();
  return 0;
}

void menu()
{
  int dato, opcion, contador = 0;

  while (opcion != 8)
  {
    cout << "\t.:MENU:." << endl;
    cout << "1. Insertar un nuevo nodo" << endl;
    cout << "2. Mostrar el arbol completo" << endl;
    cout << "3. Buscar un elemento en el arbol" << endl;
    cout << "4. Recorrer arbol en pre-orden" << endl;
    cout << "5. Recorrer arbol en in-orden" << endl;
    cout << "6. Recorrer arbol en post-orden" << endl;
    cout << "8. Salir" << endl;
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
    case 4:
      cout << "\nRecorrido en pre-orden: ";
      preOrden(arbol);
      cout << "\n";
      system("pause");
      break;
    case 5:
      cout << "\nRecorrido en in-orden: ";
      inOrden(arbol);
      cout << "\n";
      system("pause");
      break;
    case 6:
      cout << "\nRecorrido en post-orden: ";
      postOrden(arbol);
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

void mostrarArbol(Nodo *arbol, int cont)
{
  if (arbol == NULL)
  {
    return;
  }
  else
  {
    mostrarArbol(arbol->derecha, cont + 1);
    for (int i = 0; i < cont; i++)
    {
      cout << "   ";
    }
    cout << arbol->dato << endl;
    mostrarArbol(arbol->izquierda, cont + 1);
  }
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

void preOrden(Nodo *arbol)
{
  if (arbol == NULL)
  {

    return;
  }

  cout << arbol->dato << " - ";
  preOrden(arbol->izquierda);
  preOrden(arbol->derecha);
};

void inOrden(Nodo *)
{
  if (arbol == NULL)
  {
    return;
  }

  inOrden(arbol->izquierda);
  cout << arbol->dato << " - ";
  inOrden(arbol->derecha);
};

void postOrden(Nodo *arbol)
{
  if (arbol == NULL)
  {
    return;
  }

  postOrden(arbol->izquierda);
  postOrden(arbol->derecha);
  cout << arbol->dato << " - ";
};
