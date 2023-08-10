#include <iostream>
#include <cstdlib> // Biblioteca necessária para números aleatórios
#include <ctime>   // Biblioteca necessária para semente para números aleatórios

using namespace std;

int main() {
    srand(static_cast<unsigned>(time(0)));               // Inicializa a semente para geração de números aleatórios usando o tempo atual

    int lancamentos = 0;
    int resultado;

    cout << "Simulando o lançamento de um dado até obter o resultado igual a 6..." << endl;

    do {                                    // Gera um número aleatório entre 1 e 6 (simulando o lançamento do dado)
        resultado = rand() % 6 + 1;
        lancamentos++;
    } while (resultado != 6);

    cout << "Resultado 6 obtido após " << lancamentos << " lançamentos." << endl;

    return 0;
}