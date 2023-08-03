#include <iostream>

    int oracao;

int main() {

    std::cout << "Digite sim para visualizar a oração: ";
    std::cin >> oracao;

    if (oracao) {
        std::cout << "oraçao" << oracao << std::endl;
    } else {
        std::cout << "aa" << std::endl;

}
}