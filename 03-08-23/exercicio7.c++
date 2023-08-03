#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    const int numConstelacoes = 5;
    string constelacoes[numConstelacoes] = {"Orion", "Ursa Maior", "Cassiopeia", "Andromeda", "Scorpius"};
    string constelacaoBuscada;

    // Solicita a constelação que o usuário deseja buscar
    cout << "Digite o nome de uma constelação para verificar se está presente: ";
    cin >> constelacaoBuscada;

    // Verifica se a constelação buscada está presente no vetor
    bool constelacaoEncontrada = sfind(begin(constelacoes), end(constelacoes), constelacaoBuscada) != end(constelacoes);

    // Exibe o resultado da busca
    if (constelacaoEncontrada) {
        cout << "A constelação \"" << constelacaoBuscada << "\" está presente no vetor.\n";
    } else {
        cout << "A constelação \"" << constelacaoBuscada << "\" não está presente no vetor.\n";
    }

    return 0;
}
