#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main() {
    const int numPlanetas = 5;
    vector<string> planetas;

    for (int i = 0; i < numPlanetas; i++) {      // Preenche o vetor com os nomes dos planetas
        string nome;
        cout << "Digite o nome do planeta " << i + 1 << ": ";
        getline(cin, nome);
        planetas.push_back(nome);
    }

    sort(planetas.begin(), planetas.end());  // Ordena o vetor em ordem alfabética

    cout << "Planetas em ordem alfabética:\n";          // Exibe os nomes dos planetas em ordem alfabética
    for (const string& planeta : planetas) {
        cout << planeta << endl;
    }

    return 0;
}
