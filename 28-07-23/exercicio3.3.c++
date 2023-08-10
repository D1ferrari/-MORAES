#include <iostream>
#include <string>

using namespace std;

int main() {
    int quantidadeHerois;                 // Variáveis para armazenar a quantidade de heróis e vilões capturados
    int quantidadeViloes;

    cout << "Digite a quantidade de heróis capturados pelo Batman: ";           // Solicita ao usuário que digite a quantidade de heróis capturados
    cin >> quantidadeHerois;

    cout << "Digite a quantidade de vilões capturados pelo Batman: ";               // Solicita ao usuário que digite a quantidade de vilões capturados
    cin >> quantidadeViloes;

    if (quantidadeHerois > quantidadeViloes) {                          // Verifica quem capturou mais, se heróis ou vilões, e exibe a mensagem correspondente
        cout << "Batman capturou mais heróis!" << endl;
    } else if (quantidadeHerois < quantidadeViloes) {
        cout << "Batman capturou mais vilões!" << endl;
    } else {
        cout << "Batman capturou a mesma quantidade de heróis e vilões!" << endl;
    }

    return 0;
}

