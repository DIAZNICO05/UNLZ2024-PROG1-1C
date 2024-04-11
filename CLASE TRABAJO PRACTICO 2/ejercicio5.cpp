#include <iostream>
#define PI 3.141592 // Definir constante PI

using namespace std;

int main() {
    // Declarar variables
    float radio, area, perimetro;

    // Pedir al usuario que ingrese el radio de la circunferencia
    cout << "Ingrese el radio de la circunferencia: ";
    cin >> radio;

    // Calcular el perímetro (fórmula: 2 * PI * radio)
    perimetro = 2 * PI * radio;

    // Calcular el área (fórmula: PI * radio^2)
    area = PI * radio * radio;

    // Mostrar el resultado
    cout << "El perimetro de la circunferencia es: " << perimetro << endl;
    cout << "El area de la circunferencia es: " << area << endl;

    return 0;
}