#include <iostream>
#include <string>

using namespace std;

int main() {
    // Declarar variables para almacenar los datos personales
    string nombres, apellido, direccion, localidad, provincia, pais, telefono;
    int edad;

    // Solicitar al usuario que ingrese sus datos personales
    cout << "Ingrese sus nombres: ";
    getline(cin, nombres);
    
    cout << "Ingrese su apellido: ";
    getline(cin, apellido);
    
    cout << "Ingrese su edad: ";
    cin >> edad;
    cin.ignore(); // Limpiar el buffer de entrada
    
    cout << "Ingrese su direccion: ";
    getline(cin, direccion);
    
    cout << "Ingrese su localidad: ";
    getline(cin, localidad);
    
    cout << "Ingrese su provincia: ";
    getline(cin, provincia);
    
    cout << "Ingrese su pais: ";
    getline(cin, pais);
    
    cout << "Ingrese su telefono: ";
    getline(cin, telefono);

    // Imprimir los datos personales del usuario
    cout << "\n--- Datos Personales ---\n";
    cout << "Nombres: " << nombres << endl;
    cout << "Apellido: " << apellido << endl;
    cout << "Edad: " << edad << " años" << endl;
    cout << "Dirección: " << direccion << endl;
    cout << "Localidad: " << localidad << endl;
    cout << "Provincia: " << provincia << endl;
    cout << "País: " << pais << endl;
    cout << "Teléfono: " << telefono << endl;

    return 0;
}