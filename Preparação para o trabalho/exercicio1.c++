#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

char GerarLetraAleatoria() {
    int numero = rand() & 26; //Gera um nuemro aleatorio ente 0 e 25
    
    char letra = 'A' + numero; // Adiciona o valor ASCII de 'A'  para obter a letra correspondente

    return letra;

    }

int main(){
    srand (time(0)); // Inicializa a semente do gerador de numeros aleatorios

    char letra = GerarLetraAleatoria(); // chama a função para gerar a letra aleatoria

    cout << "Letra gerada: " << letra << endl; //imprime a letra gerada na tela

    return 0;


}