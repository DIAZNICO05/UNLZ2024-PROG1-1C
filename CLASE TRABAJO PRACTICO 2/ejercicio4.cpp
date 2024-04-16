#include <iostream>
#include <cmath>

using namespace std;

int main() {
   
    float lado, area, perimetro;

    cout << "Ingrese la longitud del lado del triangulo equilatero: ";
    cin >> lado;

    perimetro = 3 * lado;

    area = (pow(lado, 2) * sqrt(3)) / 4;

    cout << "El perimetro del triangulo equilatero es: " << perimetro << endl;
    cout << "El area del triangulo equilatero es: " << area << endl;

    return 0;
}
