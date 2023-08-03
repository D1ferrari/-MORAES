#include <iostream>
#include <string>
#include <algorithm> 

using namespace std;

int main() {
    const int NUM_ALIADOS = 3;      // Constante para representar o número de aliados a serem digitados
    string aliados[NUM_ALIADOS];    // Armazenar os nomes dos aliados

    for (int i = 0; i < NUM_ALIADOS; i++) {                  // Solicita ao usuário que digite o nome de três aliados do Batman
        cout << "Digite o nome do aliado " << i+1 << ": ";
        cin >> aliados[i];
    }

    sort(aliados, aliados + NUM_ALIADOS);               // Ordena os nomes dos aliados em ordem alfabética

    cout << "Aliados do Batman em ordem alfabética: ";              // Exibe na tela os nomes dos aliados em ordem alfabética
    for (int i = 0; i < NUM_ALIADOS; i++) {
        cout << aliados[i];
        if (i < NUM_ALIADOS - 1) {
            cout << ", ";
        }
    }
    cout << endl;

    return 0;
}
