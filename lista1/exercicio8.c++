#include <iostream>

using namespace std;

bool isPalindromo(int numero) {                     // Função para verificar se um número é palíndromo.
    int original = numero;
    int inverso = 0;

    while (numero > 0) {                            // Inverte o número.
        int digito = numero % 10;
        inverso = inverso * 10 + digito;
        numero /= 10;
    }

    return original == inverso;                         // Compara o número original com o inverso para verificar se é palíndromo.
}

int main() {
    int numero;

    cout << "Digite um número inteiro: ";                       // Solicita ao usuário que digite um número inteiro.
    cin >> numero;

    if (isPalindromo(numero)) {                         // Verifica se o número é palíndromo chamando a função isPalindromo.
        cout << numero << " é um número palíndromo." << endl;
    } else {
        cout << numero << " não é um número palíndromo." << endl;
    }

    return 0;
}