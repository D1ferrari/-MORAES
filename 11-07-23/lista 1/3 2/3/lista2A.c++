#include <iostream>

int main() {
    float num1, num2, num3;
    float media;

    std::cout << "Digite o primeiro número: ";
    std::cin >> num1;

    std::cout << "Digite o segundo número: ";
    std::cin >> num2;

    std::cout << "Digite o terceiro número: ";
    std::cin >> num3;

    media = (num1 + num2 + num3) / 3;

    std::cout << "A média dos três números é: " << media << std::endl;

    return 0;
}