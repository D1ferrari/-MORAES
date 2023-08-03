#include <iostream>

using namespace std;

int main() {
    int numero;
    int soma = 0;
    int quantidade = 0;

    cout << "Digite uma sequência de números inteiros (digite 0 para encerrar):\n";          // Solicita ao usuário que digite uma sequência de números inteiros

    do {
        cin >> numero;              // Lê o número digitado pelo usuário.

        if (numero != 0) {                                  // Se o número digitado for diferente de zero (ou seja, não é o final da sequência)
            soma += numero;
            quantidade++;
        }
    } while (numero != 0); // O loop continua enquanto o número digitado for diferente de zero.

    if (quantidade > 0) {                               // Calcula a média dos números digitados

        float media = static_cast<float>(soma) / quantidade;

        cout << "A média dos números digitados é: " << media << endl;                // Imprime a média dos números digitados na tela.
    } else {
        cout << "Nenhum número foi digitado, impossível calcular a média." << endl;     // imprime uma mensagem informando que não é possível calcular a média.
    }

    return 0;
}