/*Escriba un programa que lea de la entrada estándar un carácter e indique en la salida estándar si el carácter es una vocal minúscula, 
es una vocal mayúscula o no es una vocal.*/

#include <iostream>
using namespace std;

int main()
{
    char caracter;

    cout << "Digite un caracter: ";
    cin >> caracter;

    switch (caracter)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << "El caracter " << caracter << " es una vocal minuscula." << endl;
            break;
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            cout << "El caracter " << caracter << " es una vocal mayuscula." << endl;
            break;
        default:
            cout << "El caracter " << caracter << " no es una vocal." << endl;
            break;
    }

    return 0;
}
