#include <iostream>

using namespace std;

bool ehNumeroPerfeito(int numero) {
    int somaDivisores = 0;

    for (int i = 1; i <= numero / 2; i++) {
        if (numero % i == 0) {
            somaDivisores += i;
        }
    }

    return somaDivisores == numero;
}

int main() {
    int numero;

    cout << "Digite um numero inteiro positivo: ";
    cin >> numero;

    if (numero <= 0) {
        cout << "O numero deve ser positivo." << endl;
    } else {
        if (ehNumeroPerfeito(numero)) {
            cout << numero << " é um número perfeito." << endl;
        } else {
            cout << numero << " não é um número perfeito." << endl;
        }
    }

    return 0;
}

}