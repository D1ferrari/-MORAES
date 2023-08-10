#include <iostream>

using namespace std;

void imprimirFibonacci(int n) {                     // Função para imprimir a sequência de Fibonacci até o valor fornecido.
    int primeiro = 0, segundo = 1, proximo;

    cout << "Sequência de Fibonacci até " << n << ": ";

    cout << primeiro << " " << segundo << " ";          // Imprime os dois primeiros números da sequência (0 e 1).

    while ((primeiro + segundo) <= n) {                        // Calcula e imprime os números subsequentes da sequência até atingir o valor fornecido (n).
        proximo = primeiro + segundo;
        cout << proximo << " ";
        primeiro = segundo;
        segundo = proximo;
    }

    cout << endl;
}

int main() {
    int numero;

    cout << "Digite um número inteiro: ";                   // Solicita ao usuário que digite um número inteiro.
    cin >> numero;

    imprimirFibonacci(numero);

    return 0;
}