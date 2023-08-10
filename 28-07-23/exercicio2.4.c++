#include <iostream>

using namespace std;

int main() {
    int numero;
    int soma = 0;

    // Solicita ao usuário que digite um número inteiro positivo.
    cout << "Digite um número inteiro positivo: ";
    cin >> numero;

    // Verifica se o número digitado é positivo.
    if (numero <= 0) {
        cout << "O número deve ser positivo." << endl;
    } else {
        int digito;
        int numeroOriginal = numero;

        // Loop para somar os dígitos do número.
        while (numero > 0) {
            // Obtém o último dígito do número usando o operador de resto (%).
            digito = numero % 10;
            // Adiciona o dígito à soma.
            soma += digito;
            // Remove o último dígito do número (avançando uma posição à direita).
            numero /= 10;
        }

        cout << "A soma dos dígitos de " << numeroOriginal << " é: " << soma << endl;
    }

    return 0;
}