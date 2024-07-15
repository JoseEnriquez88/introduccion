//  Escriba una plantilla de función llamada maximo() que devuelva el valor máximo de tres argumentos que se
// transmitan a la función cuando sea llamada. Suponga que los tres argumentos serán del mismo tipo de datos.

#include <iostream>
#include <stdlib.h>
using namespace std;

template <class T>
T maximo(T dato1, T dato2, T dato3);

int main()
{
	char dato1 = 'e', dato2 = 'f', dato3 = 'a';

	cout << "El maximo valor es: " << maximo(dato1, dato2, dato3);

	cout << endl;
	system("pause");
	return 0;
}

template <class T>
T maximo(T dato1, T dato2, T dato3)
{
	T max;

	if ((dato1 > dato2) && (dato1 > dato3))
	{
		max = dato1;
	}
	else
	{
		if ((dato2 > dato1) && (dato2 > dato3))
		{
			max = dato2;
		}
		else
		{
			max = dato3;
		}
	}
	return max;
}
