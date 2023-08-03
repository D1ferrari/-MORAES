#include <iostream>

int main() {
    int opcao;

    std::cout <<"Digite uma opção (1-4): ";
    std::cin >> opcao;

    switch (opcao) {
        case 1:
            std::cout << "Opção 1 selecionada." << std:: endl;
            break;
        case 2:
            std::cout << "Opção 2 selecionada." << std:: endl;
            break;
        case 3:
            std::cout << "Opção 3 selecionada." << std:: endl;
            break;
        case 4:
            std::cout << "Opção 4 selecionada." << std:: endl;
            break;
        default:
            std::cout << "Opção Inválida." << std:: endl;
    }


    return 0;


}