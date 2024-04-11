#include <iostream>

using namespace std;

int main() {
    // Declarar variables
    float centimetros, metros;

    // Pedir al usuario que ingrese la cantidad en centímetros
    cout << "Ingrese la longitud en centimetros: ";
    cin >> centimetros;

    // Convertir centímetros a metros (1 metro = 100 centímetros)
    metros = centimetros / 100;

    // Mostrar el resultado
    cout << "La longitud en metros es: " << metros << " metros." << endl;

    return 0;
}