#include <iostream>

using namespace std;

int main() {
    int numero;
    int maior = INT_MIN; // Valor inicial do maior é o menor valor possível para um inteiro.
    int menor = INT_MAX; // Valor inicial do menor é o maior valor possível para um inteiro.

    cout << "Digite uma sequência de números inteiros (digite 0 para encerrar):\n";

    do {
        cin >> numero;

        if (numero != 0) {
            if (numero > maior) {
                maior = numero;
            }

            if (numero < menor) {
                menor = numero;
            }
        }
    } while (numero != 0);

    if (maior != INT_MIN && menor != INT_MAX) {
        cout << "Maior valor digitado: " << maior << endl;
        cout << "Menor valor digitado: " << menor << endl;
    } else {
        cout << "Nenhum número válido foi digitado, pois a sequência está vazia." << endl;
    }

    return 0;
}