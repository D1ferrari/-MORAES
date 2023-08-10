#include <iostream>        // Biblioteca

using namespace std;

int main( ) {

    int numero1, numero2;      // Variavel para receber os números informado pelo usuário

    cout << "Informe o primeiro número: " << endl;     // Pede ao usuário para informar o primeiro número
    cin >> numero1;

    cout << "Informe o segundo número: " << endl;      // Pede ao usuário para informar o segundo número
    cin >> numero2;

    double soma = numero1 + numero2;       // Realiza a soma dos números

    cout << "O resultado da operação é: " << soma << endl;    // Mostra o resultado da operação

    return 0;
}