#include <iostream>

using namespace std;

int main() {
    int datas[6];

    cout << "Digite as datas dos jogos da fase de grupos da Copa do Mundo Feminina: " << endl;    // Usuário informa as datas dos jogos, limitado a 6 datas
    for (int i = 0; i < 6; i++) {
        cout << "Data " << i + 1 << ":";
        cin >> datas[i];
    }

    for (int i = 5; i >= 0; i--) {         // Retorna as datas para o usuário
        cout << "Data " << 6 - 1 << ":";
    }

    return 0;

}