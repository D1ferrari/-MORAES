#include <iostream>
#include <cmath>

bool isDivisibleBy3(int number) {
    return (number % 3 == 0);
}

bool isPerfectSquare(int number) {
    int sqrtNumber = sqrt(number);
    return (sqrtNumber * sqrtNumber == number);
}

int calculateDigitSum(int number) {
    int sum = 0;
    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

int findMagicNumber(int lower, int upper) {
    for (int number = lower; number <= upper; number++) {
        if (isDivisibleBy3(number) && isPerfectSquare(number) && calculateDigitSum(number) <= 10) {
            return number;
        }
    }
    return -1;
}

int main() {
    int lower, upper;

    std::cout << "Digite o limite inferior do intervalo: ";
    std::cin >> lower;

    std::cout << "Digite o limite superior do intervalo: ";
    std::cin >> upper;

    int magicNumber = findMagicNumber(lower, upper);

    if (magicNumber != -1) {
        std::cout << "O menor numero magico dentro do intervalo eh: " << magicNumber << std::endl;
    } else {
        std::cout << "Nao foi encontrado nenhum numero magico dentro do intervalo." << std::endl;
    }

    return 0;
}
