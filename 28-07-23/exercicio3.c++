#include <iostream>

using namespace std;

float converter(float fahrenheit) {         // Função para converter uma temperatura em graus Fahrenheit para graus Celsius.
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    float temperatura1, temperatura2;

    cout << "Digite a temperatura em graus Fahrenheit: ";               // Solicita ao usuário que digite a temperatura em graus Fahrenheit.
    cin >> temperatura1;

    temperatura2 = converter(temperatura1);

    cout << "A temperatura em graus Celsius é: " << temperatura2 << "°C";                       // Imprime a temperatura convertida em graus Celsius na tela.

    return 0;
}