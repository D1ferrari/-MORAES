#include <iostream>    // Biblioteca

using namespace std;  

int main () {
    int idade;    // Variavel de idade

    cout << "Digite sua idade: ";     // Usuário informa a idade
    cin >> idade;                   // Retorna a idade

    if (idade >= 18) {            
        cout << "Maior de idade" << endl;     // Verifica se a idade informada é maior que 18
    } else {
        cout << " Menor de idade" << endl;    // Verifica se a idade informada é menor que 18
    }

    return 0;

}