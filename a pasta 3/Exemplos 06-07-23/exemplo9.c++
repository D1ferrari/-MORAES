#include  <iostream> 

int main() {
    int dia;

    std::cout << "Digite o número do dia da semana (1-7): ";
    std::cin >> dia;

    switch (dia) {
        case 1:
        std::cout << "Domingo" << std::endl;
        break;
        case 2:
        std::cout << "Segunda-Feria" << std::endl;
        break;
        case 3:
        std::cout << "Terça-Feira" << std::endl;
        break;
        case 4:
        std::cout << "Quarta-Feria" << std::endl;
        break;
        case 5:
        std::cout << "Quinta-Feira" << std::endl;
        break;
        case 6:
        std::cout << "Sexta-Feria" << std::endl;
        break;
        case 7:
        std::cout << "Sábado" << std::endl;
        break;
        default:
        std::cout << "Dia Inválido" << std::endl;
        break;
    }

    return 0;
}