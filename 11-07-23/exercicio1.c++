#include <iostream>
    int escolher;

int main() {
        
    std::cout <<"Digite a quantidade de vezes para o laço se repetir: ";
    std::cin >> escolher;

    for (int i = 0; i < escolher ; i++) {
        std::cout << "" << i+1 << std::endl;
    }
     return 0;
}