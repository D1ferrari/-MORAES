#include <stdio.h>     // Dar espaço entre os códigos

int main(){
   int num;
   printf("Digite um numero: ");
   scanf("%d", &num);
   if(num % 2 == 0)
        printf("%d eh um numero par\n", num);
   else
        printf("%d eh um numero impar\n", num);
   return 0;       // Corrigir o código para "return"
}