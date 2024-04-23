#include <iostream>
using namespace std;

int main() {
    int año;

    cout << "Ingrese un año: ";
    cin >> año;

    if ((año % 4 == 0 & año % 100 != 0) || año % 400 == 0) {
        cout << "El año " << año << " es bisiesto." << endl;
    } else {
        cout << "El año " << año << " no es bisiesto." << endl;
    }

    return 0;
}
