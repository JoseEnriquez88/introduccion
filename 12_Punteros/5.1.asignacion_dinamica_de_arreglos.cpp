// Asignacion dinamica de arreglos

// mew => reserva el numero de bytes solicitado por la declaracion
// delete => libera un bloque de nytes reservado con anterioridad

// Ejemplo => perdir al usuario n calificaciones y almacenarlos en un arreglo dinamico

#include <iostream>
#include <stdlib.h> // con esta libreria funciona new y delete
using namespace std;

void pedirNotas();
void mostrarNotas();

int numCalificaciones, *calificacion;

int main()
{
  pedirNotas();
  mostrarNotas();

  delete[] calificacion; // liberando el espacio en bytes utilizado anteriormente

  return 0;
}

void pedirNotas()
{
  cout << "Digite el numero de calificaciones: ";
  cin >> numCalificaciones;

  calificacion = new int[numCalificaciones];
  for (int i = 0; i < numCalificaciones; i++)
  {
    cout << "Ingrese una nota: ";
    cin >> calificacion[i];
  }
};

void mostrarNotas()
{
  cout << "\n\nMostrando notas del usuario:\n";
  for (int i = 0; i < numCalificaciones; i++)
  {
    cout << calificacion[i] << endl;
  }
};
