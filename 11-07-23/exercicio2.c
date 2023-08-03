#include <stdio.h>
    int somar (int num1, int num2){

int resultado = num1 + num2;

return resultado;

    }

int subtrair (int num1, int num2){

    int resultado = num1 - num2;

    return resultado;

}
int multiplicacao (int num1, int num2){

    int resultado = num1 * num2;

    return resultado;

}
  
  int main()  {
    int numero1, numero2;

    printf ("Digite o primeiro numero: ");
    scanf("%d", &numero1);
    printf ("Digite o segundo numero: ");
    scanf("%d", &numero2);

    int resultadoSoma = somar(numero1, numero2);
    int resultadoSubtracao = subtrair(numero1, numero2);
    int resultadoMultiplicacao = multiplicacao(numero1, numero2);

    printf ("A soma é: %d/n", resultadoSoma);
    printf ("A subtracao é: %d/n", resultadoSubtracao);
    printf ("A multiplicacao é: %d/n", resultadoMultiplicacao);

    return 0;
}
