#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Declarar variables
    float lado, area, perimetro;

    // Pedir al usuario que ingrese la longitud del lado del triángulo equilátero
    cout << "Ingrese la longitud del lado del triangulo equilatero: ";
    cin >> lado;

    // Calcular el perímetro (la suma de todos los lados)
    perimetro = 3 * lado;

    // Calcular el área (fórmula para un triángulo equilátero: (lado^2 * sqrt(3)) / 4)
    area = (pow(lado, 2) * sqrt(3)) / 4;

    // Mostrar el resultado
    cout << "El perimetro del triangulo equilatero es: " << perimetro << endl;
    cout << "El area del triangulo equilatero es: " << area << endl;

    return 0;
}