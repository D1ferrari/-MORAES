#include <iostream>
#include <cstdlib> // Biblioteca necessária para gerar números aleatórios
#include <ctime>   // Biblioteca necessária para obter o tempo atual como semente para a geração de números aleatórios

using namespace std;

int main() {
    // Gera uma semente para a geração de números aleatórios baseada no tempo atual
    srand(time(0));

    // Gera um número aleatório entre 1 e 100
    int numeroSecreto = rand() % 100 + 1;

    int tentativa;
    int contadorTentativas = 0;

    cout << "Bem-vindo ao jogo de adivinhação!" << endl;
    cout << "Tente adivinhar o número secreto entre 1 e 100." << endl;

    do {
        cout << "Digite sua tentativa: ";
        cin >> tentativa;

        contadorTentativas++;

        if (tentativa > numeroSecreto) {
            cout << "Tente um número menor." << endl;
        } else if (tentativa < numeroSecreto) {
            cout << "Tente um número maior." << endl;
        } else {
            cout << "Parabéns, você acertou! O número secreto era: " << numeroSecreto << endl;
            cout << "Você acertou em " << contadorTentativas << " tentativas." << endl;
        }
    } while (tentativa != numeroSecreto);

    return 0;
}
