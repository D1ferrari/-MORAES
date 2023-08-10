#include <iostream>

using namespace std;

int main() {
    int distanciaInimigo;

    cout << "Digite a distância do inimigo detectado (em metros): ";                 // Solicita ao usuário que digite a distância do inimigo detectado em metros
    cin >> distanciaInimigo;

    if (distanciaInimigo <= 100) {                      // Verifica a distância e exibe a mensagem apropriada
        cout << "Perigo muito próximo! Prepare-se para o combate!" << endl;
    } else {
        cout << "Inimigo detectado, mas ainda não é uma ameaça iminente." << endl;
    }

    return 0;
}
