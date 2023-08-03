#include <iostream>
#include <limits>    // Definir limite máx. e min.

using namespace std;

int main() {

    const int vetor = 6;
    float alturas[vetor];

    for (int i = 0; i < vetor; i++) {                   // Usuário informa a altura das jogadoras
        cout << " Digite a altura da jogadora " << i + 1 << "(em metros): ";
        cin >> alturas[i];
    }

    float maior = alturas[0];           // Defini o primeiro valor do vetor
    float menor = alturas[0];

    for (int i =1; i < vetor; i++) {        // Encontra a maior e menor altura informada
        if (alturas[i] > maior){
            maior = alturas[i];
        }

        if (alturas[i] < menor){
            menor = alturas[i];
        }
    }

    cout << "A maior altura é: " << maior << "metros" << endl;          // Retorna a maior ou menor altura das jogadoras
    cout << "A mmenor altura é: " << menor << "metros" << endl;

    return 0;
}