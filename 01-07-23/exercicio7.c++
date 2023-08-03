#include <iostream>

using namespace std;

int main() {
    int golsmarcados[5];
    int golsSofridos[5];

    for (int i = 0; i < 5; i++){
        cout << "Digite o número de gols marcados na partida " << i + 1 << ": ";
        cin >> golsmarcados[i];

        cout << "Digite o número de gols sofridos na partida " << i + 1 << ": ";
        cin >> golsSofridos[i];
    }

    cout << "Saldo de gols em cada partida: " << endl;
    for (int i = 0; i < 5; i++){
        int saldoGols = golsmarcados[i] - golsSofridos[i];
        cout << "Partida " << i + 1 << ": " << saldoGols << endl;
    }

    return 0;
}