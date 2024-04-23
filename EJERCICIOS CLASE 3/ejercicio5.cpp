#include <iostream>
using namespace std;

int main() {
     char caracter;

     cout << "ingrese un caracter";
     cin>> caracter;
     
     switch (caracter) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        cout << "el caracter ingresado es una vocal" << endl;
        break;
        default:
           if ((caracter >= 'a' & caracter <= 'z') || (caracter >= 'A' & caracter <= 'Z'))
                cout << "El caracter ingresado es una consonante." << endl;
            else
                cout << "El caracter ingresado no es una letra del alfabeto." << endl;
    }

    return 0;
}
    