#include <iostream>             // Biblioteca
#include <cstdlib>              // Biblioteca
#include <ctime>                // Biblioteca

using namespace std;

int main() {
    char resposta;

    srand(time(0));                     // Gera números aleatórios com o tempo atual

    do {
        char letra = 'A' + rand() % 26;         // Sorteia uma letra aleatória entre 'A' e 'Z'

        cout << "Letra sorteada: " << letra << endl;
        cout << "Deseja jogar novamente? (S/N): ";
        cin >> resposta;

        resposta = toupper(resposta);           // Converte a resposta para maiúscula para aceitar 's' ou 'S'
    } while (resposta == 'S');

    cout << "Obrigado por jogar! Até mais!" << endl;    // Retorna a frase final

    return 0;
}