#include <iostream>   // Dar espaçamento nos codigos, e corrigir o codigo para  "#include" 

int main(){
   int n1, n2, soma;
   std::cout << "Digite dois numeros: ";     // Correção do código para "std::cout"
   std::cin >> n1 >> n2;                     // Correção do código para "std::cin"
   soma = n1 + n2;
   std::cout << "A soma dos numeros eh " << soma << std::endl;     // Correção do código para "std::cout << soma << std::endl"
   return 0;
}