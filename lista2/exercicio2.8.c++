#include <iostream>

using namespace std;

// Função para verificar se um número é triangular.
bool isTriangular(int numero) {
    int soma = 0;
    int i = 1;

    // Loop para calcular a soma dos números consecutivos a partir de 1.
    while (soma < numero) {
        soma += i;
        i++;
    }

    // Se a soma for igual ao número, ele é triangular.
    return soma == numero;
}

int main() {
    int numero;

    // Solicita ao usuário que digite um número inteiro positivo.
    cout << "Digite um número inteiro positivo: ";
    cin >> numero;

    // Verifica se o número digitado é positivo.
    if (numero <= 0) {
        cout << "O número deve ser positivo." << endl;
    } else {
        // Chama a função 'isTriangular' para verificar se o número é triangular.
        if (isTriangular(numero)) {
            cout << numero << " é um número triangular." << endl;
        } else {
            cout << numero << " não é um número triangular." << endl;
        }
    }

    return 0;
}
