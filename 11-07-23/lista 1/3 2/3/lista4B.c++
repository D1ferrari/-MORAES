#include <iostream>

int main() {
    int tamanho;
    
    std::cout << "Digite o tamanho do array: ";
    std::cin >> tamanho;

    int array[tamanho];

    std::cout << "Digite os elementos do array:\n";
    for (int i = 0; i < tamanho; i++) {
        std::cin >> array[i];
    }

    int maior = array[0];

    for (int i = 1; i < tamanho; i++) {
        if (array[i] > maior) {
            maior = array[i];
        }
    }

    std::cout << "O maior elemento do array eh: " << maior << std::endl;

    return 0;
}
