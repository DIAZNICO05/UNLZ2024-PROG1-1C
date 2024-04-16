#include <iostream>

using namespace std;

int main() {
    double longitud, ancho;

    
    cout << "Ingrese la longitud del rectángulo: ";
    cin >> longitud;

    cout << "Ingrese el ancho del rectángulo: ";
    cin >> ancho;

    double area = longitud * ancho;
    double perimetro = 2 * (longitud + ancho);

   
    cout << "\n--- Resultados ---" << endl;
    cout << "Área del rectángulo: " << area << endl;
    cout << "Perímetro del rectángulo: " << perimetro << endl;

    return 0;
}
