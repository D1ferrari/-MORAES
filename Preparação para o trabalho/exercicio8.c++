#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

char gerarLetraAleatoria (){  // função para gerar uma letra aleatoria do alfabeto
    return 'A' + rand() % 26; // Gera um numero aleatorio ente 0 e 25 e o converte em uma letra maiuscula

}

 int main() {
    srand(time(0)); // Inicializa a semente para gera geração de numeros aleatorios
    int quantidadeLetras;
    int acertos = 0;
    int erros = 0;

    cout << "Digite a quantidade de letras a serem sorteadas: ";
    cin >> quantidadeLetras; //Solicita ao jogador a quantidade de letras a serem sorteadas

    for (int i = 0; i < quantidadeLetras; i++) {
        char letrasorteada = gerarLetraAleatoria(); //Sorteia uma letra aleatoria
        char chute;
    
    cout << "Tente adivinhar a letra sorteada (A-Z): ";
    cin >> chute; // Solicita ao jogador que chute a letra

    if (chute == letrasorteada) {
        acertos++; // Incrementa a quantidade de acertos se o chute estiver correto
    } else {
        erros++; // Incrementa a quantidade de erros de o chute estiver errado

    }
    }



    cout << "Acertos: " << acertos << endl; // exibe a quantidade de acertos do jogador
    cout << "Erros: " << erros << endl; // exibe a quantidade de erros do jogador

    return 0;

 }