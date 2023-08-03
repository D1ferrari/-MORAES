#include <iostream>
#include <string>

using namespace std;

int main() {
    const int tamanhoVetor = 8;
    string selecoes[tamanhoVetor];

    for (int i = 0; i < tamanhoVetor; i++) {            //Preenchendo o vetor com nomes das seleções  
        cout << "Digite o nome da seleção " << i + 1 << ": ";
        getline(cin, selecoes[i]);
    }
    cout << "Nome das selecoes em ordem inversa: " << endl;     // Exibindo o nome das seleções em ordem inversa
    for (int i = tamanhoVetor - 1; i >= 0; i--) {
        cout << selecoes[i] << endl;
    }

    return 0;
}