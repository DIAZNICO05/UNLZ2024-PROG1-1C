#include <iostream>

using namespace std;

int main() {
    const float velocidad_sonido = 343; 

    int tiempo_transcurrido;

    cout << "Ingrese el tiempo transcurrido entre el relampago y el trueno en segundos: ";
    cin >> tiempo_transcurrido;

    float distancia = velocidad_sonido * tiempo_transcurrido;

    cout << "La distancia a la que se encuentra la tormenta es: " << distancia << " metros." << endl;

    return 0;
}
