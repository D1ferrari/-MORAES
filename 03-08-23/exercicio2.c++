#include <iostream>
#include <string>
#include <algorithm> // Para as funções min_element e max_element

using namespace std;

int main() {
    const int planetas = 8;    // Número de Planetas
    string nomeplanetas[planetas] = {"Mércurio", "Vênus", "Terra", "Marte", "Saturno", "Netuno", "Júpiter", "Urano"};
    int distancia[planetas];

    for (int i = 0; i < planetas; i++) {
        cout << "Digite a distância média de " << nomeplanetas[i] << " ao Sol (em milhões de km): ";
        cin >> distancia[i];
    }

    // Encontra o planeta mais próximo e o mais distante do sol
    int proximo = distance(distancia, min_element(distancia, distancia + planetas));
    int distante = distance(distancia, max_element(distancia, distancia + planetas));

    // Retorna o planeta mais próximo e mais distante do sol ao usuário
    cout << "O planeta mais próximo do Sol é: " << nomeplanetas[proximo] << endl;
    cout << "O planeta mais distante do Sol é: " << nomeplanetas[distante] << endl;

    return 0;
}