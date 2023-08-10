#include <iostream>

int main(){
    int idade;

    std::cout << "Digite sua idade: ";
    std::cin >> idade;

    if(idade >= 18){
        std::cout << "Você é maior de idade." << std::endl;
    } else {
        std::cout << "Você é menor de idade. " << std::endl;
    }

    return 0;
}