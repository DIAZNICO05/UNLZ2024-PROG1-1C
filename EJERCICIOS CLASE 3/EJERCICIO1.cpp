#include <iostream>
using namespace std;

int main() {
    int numero1, numero2, numero3;

    // Solicitar al usuario que ingrese tres números enteros
    cout << "Ingrese el primer número entero: ";
    cin >> numero1;
    cout << "Ingrese el segundo número entero: ";
    cin >> numero2;
    cout << "Ingrese el tercer número entero: ";
    cin >> numero3;

    // Determinar el mayor de los tres números usando una estructura if-else
    if (numero1 >= numero2 && numero1 >= numero3) {
        cout << "El mayor de los tres números es: " << numero1 << endl;
    } else if (numero2 >= numero1 && numero2 >= numero3) {
        cout << "El mayor de los tres números es: " << numero2 << endl;
    } else {
        cout << "El mayor de los tres números es: " << numero3 << endl;
    }

    return 0;
}
