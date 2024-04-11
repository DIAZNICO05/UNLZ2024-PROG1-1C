#include <iostream>

using namespace std;

int main() {
    double longitud, ancho;

    // Solicitar al usuario la longitud y el ancho del rectángulo
    cout << "Ingrese la longitud del rectángulo: ";
    cin >> longitud;

    cout << "Ingrese el ancho del rectángulo: ";
    cin >> ancho;

    // Calcular el área y el perímetro del rectángulo
    double area = longitud * ancho;
    double perimetro = 2 * (longitud + ancho);

    // Imprimir los resultados
    cout << "\n--- Resultados ---" << endl;
    cout << "Área del rectángulo: " << area << endl;
    cout << "Perímetro del rectángulo: " << perimetro << endl;

    return 0;
}
