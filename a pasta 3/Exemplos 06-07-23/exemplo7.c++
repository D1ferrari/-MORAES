#include <iostream>

int main(){
    int numero;
    int soma = 0;

    std::cout << "Digite um número inteiro: ";
    std::cin >> numero;

    //Cálculo da soma dos dígitos
    while (numero !=0) {
        int digito = numero % 10;
        soma += digito;
        numero /= 10;

    }

    //Exibição do resultado
    std::cout << " A soma dos digitos é: " << soma << std::endl;

    return 0;

}