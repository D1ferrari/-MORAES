#include <iostream>

using namespace std;

// Função para verificar se um número é primo.
bool isPrimo(int numero) {
    // Números menores ou iguais a 1 não são primos, retornamos 'false'.
    if (numero <= 1) {
        return false;
    }

    // Percorremos todos os números de 2 até a raiz quadrada do 'numero'.
    // Não é necessário verificar números maiores que a raiz quadrada, pois
    // seus pares já foram verificados na primeira metade do intervalo.
    for (int i = 2; i * i <= numero; i++) {
        // Se encontrarmos um divisor 'i' do 'numero', ele não é primo, retornamos 'false'.
        if (numero % i == 0) {
            return false;
        }
    }

    // Se nenhum divisor é encontrado, o número é considerado primo, retornamos 'true'.
    return true;
}

int main() {
    int numero;

    // Solicita ao usuário que digite um número inteiro.
    cout << "Digite um número inteiro: ";
    cin >> numero;

    // Exibe os números primos menores ou iguais ao número digitado.
    cout << "Números primos menores ou iguais a " << numero << ": ";
    for (int i = 2; i <= numero; i++) {
        // Chama a função 'isPrimo' para verificar se o número 'i' é primo.
        if (isPrimo(i)) {
            // Se o número é primo, é exibido na tela.
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
