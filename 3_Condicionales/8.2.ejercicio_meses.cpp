/*Mostrar los meses del año, pidiéndole al usuario un número entre (1-12), y mostrar el mes al que corresponde.*/

#include <iostream>
using namespace std;

int main()
{
  int mes;

  cout << "Digite un mes en numero (1-12): ";
  cin >> mes;

  switch (mes)
  {
  case 1:
    cout << "El mes que digito es Enero.";
    break;
  case 2:
    cout << "El mes que digito es Febrero.";
    break;
  case 3:
    cout << "El mes que digito es Marzo.";
    break;
  case 4:
    cout << "El mes que digito es Abril.";
    break;
  case 5:
    cout << "El mes que digito es Mayo.";
    break;
  case 6:
    cout << "El mes que digito es Junio.";
    break;
  case 7:
    cout << "El mes que digito es Julio.";
    break;
  case 8:
    cout << "El mes que digito es Agosto.";
    break;
  case 9:
    cout << "El mes que digito es Septiembre.";
    break;
  case 10:
    cout << "El mes que digito es octubre.";
    break;
  case 11:
    cout << "El mes que digito es Noviembre.";
    break;
  case 12:
    cout << "El mes que digito es Diciembre.";
    break;
  default:
    cout << "\nDigite solo un numero entre el 1 y el 12.";
    break;
  }

  return 0;
}