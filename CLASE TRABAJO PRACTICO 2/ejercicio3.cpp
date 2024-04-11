#include <iostream>

using namespace std;

int main() {
    // Declarar variables
    float pesos, cotizacion_dolar, dolares;

    // Pedir al usuario que ingrese la cantidad de pesos
    cout << "Ingrese la cantidad de pesos argentinos: ";
    cin >> pesos;

    // Pedir al usuario que ingrese la cotización del dólar
    cout << "Ingrese la cotizacion del dolar estadounidense: ";
    cin >> cotizacion_dolar;

    // Convertir pesos a dólares
    dolares = pesos / cotizacion_dolar;

    // Mostrar el resultado
    cout << "La cantidad en dolares es: " << dolares << " USD." << endl;

    return 0;
}