#include <iostream>

using namespace std;


bool isPrimo(int numero) {    // Função para verificar se um número é primo.

    if (numero <= 1) {     // Números menores ou iguais a 1 não são primos, retornamos 'false'.
        return false;
    }

 
    for (int i = 2; i * i <= numero; i++) {   // Percorremos todos os números de 2 até a raiz quadrada do 'numero'.
    
        if (numero % i == 0) {     // Se encontrarmos um divisor 'i' do 'numero', ele não é primo, retornamos 'false'.
            return false;
        }
    }

 
    return true;   // Se nenhum divisor é encontrado, o número é considerado primo, retornamos 'true'.
}

int main() {
    int numero;


    cout << "Digite um número inteiro: ";   // Solicita ao usuário que digite um número inteiro.
    cin >> numero;

    if (isPrimo(numero)) {    // Chama a função 'isPrimo' passando o número digitado como argumento,
        cout << numero << " é um número primo." << endl;
    } else {
        cout << numero << " não é um número primo." << endl;
    }

    return 0;
}