#include <iostream>

using namespace std;

int main() {
    int n;
    double pi = 0.0;

    cout << "Digite o número de termos para calcular π (quanto maior o número, maior a precisão): ";
    cin >> n;

    // Loop para calcular a série de Leibniz até o n-ésimo termo.
    for (int i = 0; i < n; i++) {
        // Calcula o denominador do termo atual.
        int denominador = 2 * i + 1;
        // Se o índice do termo é par, o termo é positivo; caso contrário, é negativo.
        if (i % 2 == 0) {
            pi += 1.0 / denominador;
        } else {
            pi -= 1.0 / denominador;
        }
    }

    // Multiplica por 4 para obter o valor aproximado de π.
    pi *= 4;

    cout << "Valor aproximado de π: " << pi << endl;

    return 0;
}

