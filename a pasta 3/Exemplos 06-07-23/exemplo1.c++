#include <iostream>

int main() 
{

    int numero;

    std::cout << "Digite um numero:";
    std::cin >> numero;

    if (numero % 2 == 0)
    {
    

        std::cout << "O numero é par" << std::endl;

    }
    else
    {
        std::cout << "numero é impar." << std::endl;
    }
    
    return 0;
}