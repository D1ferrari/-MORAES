#include <iostream>

using namespace std;

int main() {
    char letra;

    cout << "Digite uma letra entre A e Z: "; // Solicita ao usuario que digite uma letra
    cin >> letra;

    if ((letra >= 'A' && letra <= 'Z') || (letra >= 'a' && letra <= 'z')) {         // Verifica se a entrada é uma letra maiúscula ou minúscula entre 'A' e 'Z'

        char min = (letra >= 'A' && letra <= 'Z') ? 'a' : 'A';                  // Define os valores de acordo com a letra maiúscula ou minúscula
        char max = (letra >= 'A' && letra <= 'Z') ? 'z' : 'Z';

        cout << "Dica: Chute uma letra entre " << min << " e " << max << "." << endl;                   // Exibe a dica para o jogador
    } else {
        cout << "Você digitou um caractere inválido. Por favor, digite uma letra entre A e Z." << endl;                 // Exibe a mensagem de erro
    }

    return 0;
}





