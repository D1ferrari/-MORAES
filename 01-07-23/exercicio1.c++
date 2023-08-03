#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<string> paises = {"Estados Unidos",
    "Alemanha", "Noruega", "Japão", "Brasil" };

    sort(paises.begin(), paises.end());

    cout << "Paises vencedores da copa do mundo Feminina em ordem alfabetica:" << endl;
    for (const auto& pais : paises) {
        cout << pais << endl;
    }

    return 0;

}
 

