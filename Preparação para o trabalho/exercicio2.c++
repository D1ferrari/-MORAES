#include <iostream>
#include <cctype>

using namespace std;

bool verificarLetraNoAlfabeto(char letra) { // Verifica se a letra esta no alfabeto
    return isalpha(letra); // Usa a função isalpha para verificar se é uma letra
}

int main () {

    char letra; // Declaração da variavel para armazenar a entrada do usuario
    cout << "Digite uma letra: "; //Solicita ao usuario que digite uma letra 
    cin >> letra; // Lê a entrada do usuario e armazena na variavel 'letra'

    if (isalpha(letra)) {   // Verifica se a letra esta no alfabeto
        cout << "A letra informada está no alfabeto."; // Exibe esta  mensagem se a letra estiver no alfabeto
    } else {
        cout << "A letra informada não está no alfabeto."; // Exibe esta mensagem se a letra não estiver no alfabeto
    }

    return 0; 
}