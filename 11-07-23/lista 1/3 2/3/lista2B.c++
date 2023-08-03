#include <iostream>

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }

    for (int i = 2; i <= number / 2; i++) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int number;

    std::cout << "Digite um numero inteiro: ";
    std::cin >> number;

    if (isPrime(number)) {
        std::cout << number << " eh um numero primo." << std::endl;
    } else {
        std::cout << number << " nao eh um numero primo." << std::endl;
    }

    return 0;
}
