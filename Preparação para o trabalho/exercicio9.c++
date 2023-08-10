#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

char gerarLetra() {             // Função para gerar letra aleatoria     
    char letra = 'a' + rand() % 26;    // Gera numero entre 0 e 25
    return letra;
}

int main() {
    srand(static_cast<unsigned int>(time(0)));    // Inicia o gerador

    cout << "Gerando 10 letras aleatórias: ";

    for (int i = 0; i < 10; i++) {
        char letra = gerarLetra();     // Gera a letra
        cout << letra << " ";       // Retorna a letra pro usuario

    }

    return 0;
}