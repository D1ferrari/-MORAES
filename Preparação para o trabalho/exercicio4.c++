#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

char GerarLetraAleatoria() { // Função para gerar uma letra aleatoria do alfabeto
    return 'a' + (rand () % 26); //Gera um numero aleatorio ente 0 e 25 e converte para uma letra do alfabeto

}

int main(){
    srand(time(0)); // Semente para geração de numeros aleatorios baseada no tempo atual
    char letraSorteada = GerarLetraAleatoria();
    char letraJogador;
    int tentativas = 0;

    while (true) {
        cout << "Digite uma letra: ";
        cin >> letraJogador;

        tentativas++;

        if (letraJogador == letraSorteada) {
            cout << "Parabéns, você acertou a letra sorteada: ";
            break;
        }

        if (tentativas >= 5) {
            cout << "Você esgotou o limite de tentativas";
            break;
        }
    }

    cout << " A letra sorteada era: " << letraSorteada << endl;
    cout << " Quantidade de tentativas utilizadas: " << tentativas << endl;

return 0;

}