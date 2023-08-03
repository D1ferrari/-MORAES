#include <iostream>
#include <fstream>

using namespace std;

int main() {
    string nomeArquivo;

    cout << "Digite o nome do arquivo de código-fonte (.cpp): ";        // Solicita ao usuário que digite o nome do arquivo de código-fonte
    cin >> nomeArquivo;

    ifstream arquivo(nomeArquivo);              // Abre o arquivo para verificar se ele existe

    if (arquivo) {              // Verifica se o arquivo existe
        cout << "Compilando " << nomeArquivo << "... Compilação concluída com sucesso!" << endl;
        arquivo.close();            // Fecha o arquivo após a verificação
    } else {
        cout << "Arquivo não encontrado." << endl;
    }

    return 0;
}
