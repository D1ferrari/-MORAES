#include <iostream>

using namespace std;

int main() {
    int numero;
    int quantidadePares = 0;
    int quantidadeImpares = 0;

    cout << "Digite uma sequência de números inteiros (digite 0 para encerrar):\n";

    do {
        cin >> numero;

        if (numero != 0) {
            if (numero % 2 == 0) {
                // Se o número é divisível por 2, é par.
                quantidadePares++;
            } else {
                // Se o número não é divisível por 2, é ímpar.
                quantidadeImpares++;
            }
        }
    } while (numero != 0);

    cout << "Quantidade de números pares: " << quantidadePares << endl;
    cout << "Quantidade de números ímpares: " << quantidadeImpares << endl;

    return 0;
}
