#include <iostream>
#define PI 3.141592 

using namespace std;

int main() {
    float radio, area, perimetro;

    cout << "Ingrese el radio de la circunferencia: ";
    cin >> radio;

    perimetro = 2 * PI * radio;

    area = PI * radio * radio;

    cout << "El perimetro de la circunferencia es: " << perimetro << endl;
    cout << "El area de la circunferencia es: " << area << endl;

    return 0;
}
