#include <iostream>                 //Melgacio - Lucas Moraes (Neylor na assistencia)
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    int tamanho = 6;
    int escolha[tamanho];
    int acertos = 0;
    int sorteio[tamanho];
    int tamanhoTotal = 60;
    srand(time(0));

    cout << "\n--------------------------------------------\n";
    cout << "Bem Vindo ao sorteio da Mega Sena DuBerabão " << endl; // Mensagem de entrada

    cout << "Para participar do sorteio, digite tamanho números aleatórios entre 1 e 60!" << endl; // Pede ao usuario para que digite numeros aleatorios
    cout << "\n--------------------------------------------\n";
    
    while (true) {

    for (int i = 0; i < tamanho; i++)
    {
        cout << "Número " << i + 1 << ":";
        cin >> escolha[i];
    }

    cout << "\n--------------------------------------------\n\n";
    cout << "       Sorteio dos numeros da sorte\n "; // Retorna os numeros sorteados
    cout << "\n--------------------------------------------\n";

    cout << "Numeros sorteados: " << endl;
    for (int i = 0; i < tamanho; i++)
    { // Função para gerar números aleatorios
        sorteio[i] = 1 + (rand() % 60);
        cout << sorteio[i] << " ";
    }


    for (int i = 0; i < tamanho; i++)
    { // Função para gerar números aleatorios
      // cout << sorteio[i] << endl;
    }

    for (int i = 0; i < tamanho; ++i)
    { // Loop para comparar
        for (int j = 0; j < tamanho; ++j)
        {
            if (escolha[i] == sorteio[j])
            {
                ++acertos;

                break;
            }
        }
    }
    cout << "\n\nNumeros acertados: " << acertos << endl;

char jogar_novamente;
        cout << "Deseja tentar novamente? (S/N): ";
        cin >> jogar_novamente;

        // Converte a entrada para letras para minúsculas
        jogar_novamente = toupper(jogar_novamente);

        // Verifica se o usuario deseja jogar novamente.
        if (jogar_novamente == 'S' || jogar_novamente == 'SIM' || jogar_novamente == 'SIM' || jogar_novamente == 's' ) {
            continue;  // Reinicia o loop para jogar novamente.
        } else if (jogar_novamente == 'N' || jogar_novamente == 'NÃO' || jogar_novamente == 'nao') {
            cout << "Obrigado por jogar!" << endl;
            break;  // Encerra o loop do jogo.
        } else {
            cout << "Entrada invalida. Por favor, responda com 'S' ou 'N'." << endl;
        
        }


}
 return 0;
}
