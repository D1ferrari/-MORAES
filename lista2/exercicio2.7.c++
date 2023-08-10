#include <iostream>

using namespace std;

// Função para converter segundos para horas, minutos e segundos.
void converterTempo(int segundos, int &horas, int &minutos, int &segundosRestantes) {
    horas = segundos / 3600;              // Obtém a quantidade de horas
    segundosRestantes = segundos % 3600;  // Calcula o restante dos segundos após a quantidade de horas
    minutos = segundosRestantes / 60;     // Obtém a quantidade de minutos
    segundosRestantes %= 60;              // Calcula o restante dos segundos após a quantidade de minutos
}

int main() {
    int segundos, horas, minutos, segundosRestantes;

    // Solicita ao usuário que digite a quantidade de segundos.
    cout << "Digite a quantidade de segundos: ";
    cin >> segundos;

    // Chama a função para converter os segundos para o formato de horas, minutos e segundos.
    converterTempo(segundos, horas, minutos, segundosRestantes);

    // Exibe o resultado.
    cout << segundos << " segundos equivalem a: " << horas << " horas, " << minutos << " minutos e " << segundosRestantes << " segundos." << endl;

    return 0;
}
