#include <iostream>

int main() {
    const int tamanho = 10;
    int idades[tamanho];

    std::cout << "Digite as idades das jogadoras:" << std::endl;
    for (int i = 0; i < tamanho; i++) {
        std::cout << "Idade " << i + 1 << ": ";
        std::cin >> idades[i];
    }

    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += idades[i];
    }

    double media = static_cast<double>(soma) / tamanho;

    std::cout << "A média das idades é: " << media << std::endl;

    return 0;
}