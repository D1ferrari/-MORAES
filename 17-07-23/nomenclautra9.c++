#include <iostream>  // Correção da biblioteca para "#include <iostream>"

int main(){
   int num;
   std::cout << "Digite um numero: ";    // Correção do código para "std::cout"
   std::cin >> num;   // Correção do código para "std::cin"
   if(num % 2 == 0)
        std::cout << num << " eh um numero par" << std::endl;    // Correção do código para "std::cout --- std::endl"
   else
        std::cout << num << " eh um numero impar" << std::endl;    // Correção do código para "std::cout --- std::endl"
   return 0;   //Corrigir o  codigo "return"
}