#include <iostream>

using namespace std;

int main() {
  
    float pesos, cotizacion_dolar, dolares;


    cout << "Ingrese la cantidad de pesos argentinos: ";
    cin >> pesos;

    cout << "Ingrese la cotizacion del dolar estadounidense: ";
    cin >> cotizacion_dolar;

    dolares = pesos / cotizacion_dolar;

    cout << "La cantidad en dolares es: " << dolares << " USD." << endl;

    return 0;
}
