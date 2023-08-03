#include <iostream>
#include <iostream>

int main() {
    std::string nome; // Declaracao de valor a um string 

    nome = "Jonh"; // Atribuição de valores a uma sting

    std::string sobrenome = "Doe"; //Declaracao de uma string
 
    std::string nomeCompleto = nome + " " + sobrenome; // Concatenaçãoo de string

    std::cout << "Nome completo: " << nomeCompleto << std::endl; // Exibição de uma string
    
    return 0;
}