#include <iostream>

using namespace std;

bool isPrimo(int numero) {
    if (numero <= 1) {
        return false; // Números menores ou iguais a 1 não são primos
    }

    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return false; // Se encontrarmos um divisor diferente de 1 e do próprio número, não é primo
        }
    }

    return true; // Se nenhum divisor diferente de 1 e do próprio número for encontrado, é primo
}

int main() {
    int numero;

    // Solicita ao usuário que digite um número inteiro
    cout << "Digite um numero inteiro: ";
    cin >> numero;

    // Verifica se o número é primo usando a função isPrimo
    if (isPrimo(numero)) {
        cout << "O numero " << numero << " e um numero primo." << endl;
    } else {
        cout << "O numero " << numero << " nao e um numero primo." << endl;
    }

    return 0;
}