#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingrese un numero del 1 al 7: ";
    cin >> numero;

    switch(numero) {
        case 1:
            cout << "Lunes" << endl;
            break;
        case 2:
            cout << "Martes" << endl;
            break;
        case 3:
            cout << "Miércoles" << endl;
            break;
        case 4:
            cout << "Jueves" << endl;
            break;
        case 5:
            cout << "Viernes" << endl;
            break;
        case 6:
            cout << "Sábado" << endl;
            break;
        case 7:
            cout << "Domingo" << endl;
            break;
        default:
            cout << "Número ingresado no válido. Por favor, ingrese un número del 1 al 7." << endl;
    }

    return 0;
}
