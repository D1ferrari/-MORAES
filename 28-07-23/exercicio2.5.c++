#include <iostream>
#include <cctype> // Biblioteca necessária para usar as funções de manipulação de caracteres

using namespace std;

// Função para remover espaços e converter todos os caracteres para minúsculas.
string prepararString(string str) {
    string resultado = "";

    for (char c : str) {
        if (!isspace(c)) {
            resultado += tolower(c);
        }
    }

    return resultado;
}

// Função para verificar se uma string é um palíndromo.
bool isPalindromo(string str) {
    int inicio = 0;
    int fim = str.length() - 1;

    while (inicio < fim) {
        if (str[inicio] != str[fim]) {
            return false;
        }

        inicio++;
        fim--;
    }

    return true;
}

int main() {
    string palavra;

    // Solicita ao usuário que digite uma palavra ou frase.
    cout << "Digite uma palavra ou frase: ";
    getline(cin, palavra);

    // Prepara a string, removendo espaços e convertendo todos os caracteres para minúsculas.
    string strPreparada = prepararString(palavra);

    // Verifica se a string preparada é um palíndromo.
    if (isPalindromo(strPreparada)) {
        cout << "\"" << palavra << "\" é um palíndromo." << endl;
    } else {
        cout << "\"" << palavra << "\" não é um palíndromo." << endl;
    }

    return 0;
}
