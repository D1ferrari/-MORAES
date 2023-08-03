#include <iostream>
#include <string>

using namespace std;

int main() {
    const string codigoCorreto = "1966";                     // Código correto de acesso à Batcaverna

    string codigoDigitado;                                      // Variável para armazenar o código digitado pelo usuário

    cout << "Digite o código de 4 dígitos para acessar a Batcaverna: ";                 // Solicita ao usuário que digite o código de acesso
    cin >> codigoDigitado;

    if (codigoDigitado == codigoCorreto) {                  // Verifica se o código digitado é igual ao código correto
        cout << "Acesso autorizado. Bem-vindo à Batcaverna!" << endl;
    } else {
        cout << "Acesso negado. Código incorreto!" << endl;
    }

    return 0;
}