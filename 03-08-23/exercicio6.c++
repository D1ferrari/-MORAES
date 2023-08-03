#include <iostream>

using namespace std;

int main () {
    const int estrelas= 7;
    float massa[estrelas];
    int contador = 0;

    for (int i = 0; i < estrelas; i++) {        // Usuário digita a quantidade de estrelas e realiza a conta para que retorne as maiores que 3
        cout << "Digite a massa da estrela " << i + 1 << "em massa solar: ";
        cin >> massa[i];
        if (massa[i > 3.0]) {
            contador++;
        }

            // Retorna a quantidade de estrelas para o usuário
        cout << "Quantidade de estrelas com massa superior a 3 vezes a massa do Sol: " << contador << endl;

        return 0;
    }
}