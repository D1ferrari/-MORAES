#include <iostream>

using namespace std;

int main() {
    int numero;

   
    cout << "Digite um número inteiro positivo: ";    // Solicita ao usuário que digite um número inteiro positivo.
    cin >> numero;

    
    if (numero <= 0) {   // Verifica se o número digitado é positivo.
        cout << "O número deve ser positivo." << endl;
    } else {
        cout << "Divisores de " << numero << ": ";

       
        for (int divisor = 1; divisor <= numero; divisor++) {   // Loop para encontrar os divisores do número.
            if (numero % divisor == 0) {
                cout << divisor << " ";
            }
        }

        cout << endl;
    }

    return 0;
}