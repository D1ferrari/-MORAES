#include <iostream>

using namespace std;

int main() {
    int gols_partida[] = {2, 1, 4, 3, 5};
    int total_gols = 0;

    for (int i = 0; i < sizeof(gols_partida) / sizeof(gols_partida[0]); i++) {
        total_gols += gols_partida[i];
    }

    cout << "Total de gols marcados pela seleção: " << total_gols << endl;
    return 0;
}