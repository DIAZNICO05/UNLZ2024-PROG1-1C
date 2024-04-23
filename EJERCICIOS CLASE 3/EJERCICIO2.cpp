#include <iostream>
#include <ctime>
using namespace std;

int main() {

    time_t t = time(NULL);
    tm* timePtr = localtime(&t);
    int añoActual = 1900 + timePtr->tm_year;

    int añoNacimiento;

   
    cout << "Ingrese su año de nacimiento: ";
    cin >> añoNacimiento;

    int edad = añoActual - añoNacimiento;

    if (edad >= 18) {
        cout << "La persona es mayor de edad." << endl;
    } else {
        cout << "La persona es menor de edad." << endl;
    }

    return 0;
}
