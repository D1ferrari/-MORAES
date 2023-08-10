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
    char chute;
    int tentativas = 0;
    const int limiteTentativas = 5; //limite de tentativas

    cout << "Tende adivinhar a letra sorteada. " << endl;
    while (tentativas < limiteTentativas){
        cout << "Tentativa " << tentativas + 1 << ": ";
        cin >> chute;

        if (chute == letraSorteada){
            cout << "Parabés! Voce acertou a letra." << endl;
            break; // Se acertou, sai do loop 
        } else {
            cout << "Voce errou. Tente novamente. " << endl;
            tentativas++;


        }
    }

    if (tentativas == limiteTentativas) {
        cout << "Suas tentativas acabaram. A letra sorteada era: " << letraSorteada << endl;
    }
     
    return 0;



}
