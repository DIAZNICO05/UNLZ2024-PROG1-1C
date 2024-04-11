#include <iostream>

using namespace std;

int main() {
    // Declarar constante para la velocidad del sonido
    const float velocidad_sonido = 343; // metros por segundo

    // Declarar variable para el tiempo transcurrido en segundos
    int tiempo_transcurrido;

    // Pedir al usuario que ingrese el tiempo transcurrido en segundos
    cout << "Ingrese el tiempo transcurrido entre el relampago y el trueno en segundos: ";
    cin >> tiempo_transcurrido;

    // Calcular la distancia utilizando la fórmula: distancia = velocidad_sonido * tiempo_transcurrido
    float distancia = velocidad_sonido * tiempo_transcurrido;

    // Mostrar la distancia calculada
    cout << "La distancia a la que se encuentra la tormenta es: " << distancia << " metros." << endl;

    return 0;
}