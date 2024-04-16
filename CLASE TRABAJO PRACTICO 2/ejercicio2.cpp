#include <iostream>

using namespace std;

int main() {

    float centimetros, metros;

    cout << "Ingrese la longitud en centimetros: ";
    cin >> centimetros;

   
    metros = centimetros / 100;

    
    cout << "La longitud en metros es: " << metros << " metros." << endl;

    return 0;
}
