#include <iostream>

    float num1 ;
    float num2 ;

float soma(float num1, float num2){
    float resultado = num1+num2;
    return resultado;

}
float multiplicacao(float num1, float num2){
    float resultado = num1*num2;
    return resultado;

}
float subtracao(float num1, float num2){
    float resultado = num1-num2;
    return resultado;

}
float divisao(float num1, float num2){
    float resultado = num1/num2;
    return resultado;

}
float porcentagem(float num1, float num2){
    float resultado = ((num1/num2)*100);
    return resultado;

}


int main() {

    float numero1 ;
    float numero2 ;

    std::cout <<"Digite o primeiro numero: ";
    std::cin >> numero1;
    std::cout <<"Digite o segundo numero: ";
    std::cin >> numero2;

    float soma= numero1+numero2;
    float multiplicacao= numero1*numero2;
    float subtracao= numero1-numero2;
    float divisao= numero1/numero2;
    float porcentagem = ((numero1/100)*numero2);

    std::cout <<"Resultado da Adição: " << soma << std::endl;
    std::cout <<"Resultado da Multiplicação: " << multiplicacao << std::endl;
    std::cout <<"Resultado da Subtração: " << subtracao << std::endl;
    std::cout <<"Resultado da Divisão: " << divisao << std::endl;
    std::cout <<"Resultado da Porcentagem: " << porcentagem << std::endl;

    return 0;
}