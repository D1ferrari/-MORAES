#include <iostream>           // Correção da biblioteca para "#include <iostream>"

int main(){
   int i, n;
   int soma = 0;
   std::cout << "Digite um numero: ";     // Correção do código para "std::cout"
   std::cin >> n;           // Correção do código para "std::cin"
   for(i = 0; i <= n; i++)
   {
        soma += i;
   }
   std::cout << "A soma dos numeros de 0 a " << n << " eh " << soma << std::endl;    // Correção do código para "std::cout --- std::endl"
   return 0;              // Correção do código para "return 0;"
}