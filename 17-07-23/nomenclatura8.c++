#include <iostream>         // Correção da biblioteca para "#include <iostream>"

int main(){
   int x = 5;
   std::cout << "O valor de x eh: " << x << std::endl;       // Correção do código para "std::cout --- std::endl"
   x = 10;
   std::cout << "O novo valor de x eh: " << x << std::endl;   // Correção do código para "std::cout --- std::endl"
   return 0;
}