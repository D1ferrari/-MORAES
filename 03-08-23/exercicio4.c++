#include <iostream>

using namespace std;

int main() {
    const int planetas = 5;
    int temperatura[planetas];
    double temperaturamedia = 0.0;

    for (int i = 0; i < planetas; i++) {                // Verifica a temperatura média dos planetas e realiza a soma
        cout << "Digite a temperatura média do planeta " << i + 1 << "em graus Celsius: ";
        cin >> temperatura[i];
        temperaturamedia += temperatura[i];

    }

    temperaturamedia /= planetas;               // Calcula a temperatura

                    // Retorna a temperatura para o usuário
    cout << "A temperatura média dos planetas é: " << temperaturamedia << " graus Celsius" << endl;

    return 0;

}