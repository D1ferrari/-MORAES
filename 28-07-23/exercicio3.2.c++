#include <iostream>
#include <string>

using namespace std;

int main() {
    int velocidade;                         // Variáveis para armazenar a velocidade e altitude desejadas
    int altitude;

    cout << "Digite a velocidade desejada (em km/h) para o voo do Batwing: ";               // Solicita ao usuário que digite a velocidade desejada para o voo
    cin >> velocidade;

    cout << "Digite a altitude desejada (em metros) para o voo do Batwing: ";               // Solicita ao usuário que digite a altitude desejada para o voo
    cin >> altitude;

    cout << "Batwing decolando a " << velocidade << " km/h a " << altitude << " metros do solo." << endl;      // Exibe a mensagem informando a velocidade e altitude pretendidas

    return 0;
}