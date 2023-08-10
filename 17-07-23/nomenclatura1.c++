#include <stdio.h>     // Dar espaçamento e adicionar "< >", trocar de #includefuncio.h para  #include <stdio.h>  

int main(){
   int num;
   printf("Digite um numero: "); //Dar espaçamento entre : e "
   scanf("%d", &num);
   for (int i=1; i<=num; i++) {
   printf("%d\n", i);
   }
   return 0; // O correto é "return"
}            // Adição de "}"