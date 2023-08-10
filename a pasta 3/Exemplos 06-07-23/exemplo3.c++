#include <iostream>

int main() {

    int a = 5;
    int b = 3;

    bool igual = (a == b);       //igual = false
    bool diferente = (a != b);      // diferente = true 
    bool maior = (a > b);           //maior = true 
    bool menor = (a < b);         // menor = false 
    bool maiorOuIgual = ( a >= b);      // maiorOuIgual = true
    bool menorOuIgual = ( a <= b);    //menorOuIgual = false 

std::cout << "maiorOuIgual" << std::endl;
std::cout << "menor" << std::endl;
std::cout << "maiorOuIgual" << std::endl;
std::cout << "menorOuIgual" << std::endl;

}