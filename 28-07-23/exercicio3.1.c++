#include <iostream>
#include <string>

using namespace std;

int main() {
    string nomeComissario;                          // Variável para armazenar o nome do comissário

    cout << "Digite o nome do comissário: ";                // Solicita ao usuário que digite o nome do comissário
    getline(cin, nomeComissario);                   // Lê o nome do comissário (incluindo espaços) da entrada do usuário

    cout << "Comissário " << nomeComissario << ", acione o Bat-Sinal!" << endl;           // Exibe a mensagem com o Bat-Sinal, utilizando o nome do comissário digitado

    return 0;
}