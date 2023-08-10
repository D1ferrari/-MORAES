#include <iostream>       // Correção do código para "#include <iostream>"

int main(){
   int n;
   std::cout << "Digite um numero: ";     // Correção do código para "std::cout"
   std::cin >> n;                         // Correção do código para "std::cin"
   for(int i=1; i<=n; i++)
   {
   std::cout << i << std::endl;           // Correção do código para "std::cout << i << std::endl"
   }
   return 0;
}