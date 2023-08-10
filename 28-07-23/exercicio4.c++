#include <iostream>

bool isPrimo(int numero, int divisor) {             // Recebe dois argumentos: o "numero" a ser verificado e o "divisor"
    if (divisor == 1) {
        return true;
    }

    if (numero % divisor == 0) {                    // Verifica se o "numero" é divisível pelo "divisor".
        return false;
    }

    return isPrimo(numero, divisor - 1);
}

int main() {
    int numero;

    std::cout << "Digite um número inteiro: ";                  // Solicita ao usuário que digite um número inteiro.
    std::cin >> numero;

    if (numero < 2) {                                                   // Verifica se o número é menor que 2.
        std::cout << "O número não é primo." << std::endl;
    } else {

        bool resultado = isPrimo(numero, numero - 1);                  // Chama a função "isPrimo" para verificar se o número é primo ou não.

        if (resultado) {                                        // Verifica o resultado e imprime na tela se o número é primo ou não.
            std::cout << numero << " é um número primo." << std::endl;
        } else {
            std::cout << numero << " não é um número primo." << std::endl;
        }
    }

    return 0;
}