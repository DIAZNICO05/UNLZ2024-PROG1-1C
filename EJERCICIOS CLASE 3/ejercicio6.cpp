#include <iostream>

using namespace std;

int main() {
    float num1, num2;
    char operacion;

    
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << "Ingrese la operacion a realizar (+, -, *, /): ";
    cin >> operacion;
    
    switch (operacion) {
        case '+':
            cout << "El resultado de la suma es: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "El resultado de la resta es: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "El resultado de la multiplicacion es: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "El resultado de la division es: " << num1 / num2 << endl;
            } else {
                cout << "No se puede dividir por cero." << endl;
            }
            break;
        default:
            cout << "Operacion no valida." << endl;
    }

    return 0;
}
