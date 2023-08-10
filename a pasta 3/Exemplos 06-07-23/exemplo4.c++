#include  <iostream>

int main(){

bool expressao1 = true;
bool expressao2 = false; 

bool resultadoAND = (expressao1 && expressao2);     //resultadoAND = false
bool resultadoOR = ( expressao1 || expressao2);    //resultadoOR = true
bool resultadoNOT = !expressao1;       //resultadonNOT = false 

std::cout << "resultadoAND" << std::endl;
std::cout << "resultadoOR" << std::endl;
std::cout <<  "resultadoNOT" << std::endl;
}