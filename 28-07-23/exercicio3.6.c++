#include <iostream>

using namespace std;

int main() {
    int coordenadaX, coordenadaY;

    cout << "Digite a coordenada X (horizontal): ";                 // Solicita ao usuário que digite as coordenadas X e Y
    cin >> coordenadaX;

    cout << "Digite a coordenada Y (vertical): ";
    cin >> coordenadaY;

    if (coordenadaX >= -100 && coordenadaX <= 100 && coordenadaY >= -50 && coordenadaY <= 50) {             // Verifica se as coordenadas estão dentro dos limites do mapa da cidade de Gotham
        cout << "Localização possível do esconderijo do Coringa." << endl;
    } else {
        cout << "Coordenadas fora dos limites da cidade." << endl;
    }

    return 0;
}