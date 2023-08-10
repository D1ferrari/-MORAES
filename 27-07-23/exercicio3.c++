#include <iostream>

using namespace std;

int main() {
    int numero;
    long long fatorial = 1; // Usamos long long para evitar estouro em fatoriais grandes

    cout << "Digite um numero inteiro: ";           // Solicita ao usuário que digite um número inteiro
    cin >> numero;

    if (numero < 0) {                                          // Verifica se o número é negativo
        cout << "O fatorial nao esta definido para numeros negativos." << endl;         // Verifica se há erro
        return 1; 
    }

    for (int i = 1; i <= numero; i++) {                         // Calcula o fatorial do número
        fatorial *= i;
    }

    cout << "O fatorial de " << numero << " e: " << fatorial << endl;      // Exibe o resultado da operação

    return 0;
}