#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // Inicia o gerador de números aleatórios

    char resposta;
    do {
        char letra = 'A' + rand() % 26;                         // Sorteia uma letra aleatória entre 'A' e 'Z'

        string dica = (strchr("AEIOU", letra) ? "Vogal" : "Consoante");         // Verifica se a letra é uma vogal ou uma consoante

        cout << "Dica: A letra sorteada é uma " << dica << endl;
        cout << "Letra sorteada: " << letra << endl;
        cout << "Deseja jogar novamente? (S/N): ";
        cin >> resposta;
        resposta = toupper(resposta); // Converte a resposta para maiúscula para aceitar 's' ou 'S'
    } while (resposta == 'S');

    cout << "Obrigado por jogar! Até mais!" << endl;
    return 0;
}