#include <iostream>
#include <string> 

using namespace std;

    int main() {
        const int tamanhoVetor = 7;
        string paises[tamanhoVetor] = {"CHN", "SWE", "USA", "GER", "CAN", "FRA", "ENG"};

        string sigla;

        cout << "Digite uma sigla de país: ";       //Informa uma sigla do país
        cin >> sigla;

        bool encontrou = false;

        for (int i = 0; i < tamanhoVetor; i++){         //Verifica se a sigla digitada está presente no vetor
            if (paises[i] == sigla ){
                encontrou = true;
                break;
            }
        }

        if (encontrou) {                    //Exibido o resultado da busca
            cout << "Sigla encontrada no Vetor" << endl;
        } else {
            cout << "Sigla nao encontrada no vetor. " << endl;
        }

        return 0;

    }

        