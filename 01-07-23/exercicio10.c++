#include <iostream>

using namespace std;

int main() {
    const int tamanho = 10;
    int torcida[tamanho];
    int mais50k = 0;

    cout << "Digite o número de torcedores presentes no jogo: ";
    for (int i = 0; i < tamanho; i++) {
        cout << "Jogo " << i + 1 << ": ";
        cin >> torcida[i];
        
        if (torcida[i] > 50000){
            mais50k++;
        }
    }
    
    cout << "Número de jogos com mais de 50.000 torcedores: " << mais50k << endl;
    
    return 0;
}