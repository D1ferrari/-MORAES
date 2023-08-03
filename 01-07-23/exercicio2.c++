#include <iostream>
#include <string>

using namespace std;

int main() {
    int titulos[] = {0, 4, 2, 0, 1, 0, 0, 1};     // Títulos dos países

    // Nome dos países
    string nome_paises[] = {"Brasil", "Estados Unidos", "Alemanha", "Argentina", "Noruega", "França", "Inglaterra", "Japão"};

    cout << "Países que nunca venceram a Copa do Mundo Feminina: ";
    
    for (int i = 0; i < sizeof(titulos)/sizeof(titulos)[0]; i++){
        if (titulos[i] == 0) {
            cout << nome_paises[i] << " ";
        }
    }

    return 0;
}
