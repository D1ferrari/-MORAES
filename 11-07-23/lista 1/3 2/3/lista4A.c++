#include <iostream>

int main () {
    int num1;
    std::cout << "Digite um numero: ";
    std::cin >>  num1;
        if (num1 < 0) {
            std::cout << "numero negativo." << std::endl;
    }   else if(num1 > 0) {
            std::cout << "numero positivo." << std::endl;
    }   else {
            std::cout << "numero eh zero." << std::endl;
    }

    
    return 0;
}
