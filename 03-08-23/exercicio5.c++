#include <iostream>

using namespace std;

int main(){
const int numPlanetas = 8;
int massaTerrestre[numPlanetas];
int massaTotal = 0;

            // Preenche o vetor com as massas dos planetas anões em massa terrestre
for (int i = 0; i < numPlanetas; i++){
    cout << "Digite a massa do planeta anão " << i + 1 << " em massa terrestre: ";
    cin >> massaTerrestre[i];
    massaTotal += massaTerrestre[i];
}
             // Exibe a massa total dos planetas anões em massa terrestre
    cout << "A massa total dos planetas anões é: " << massaTotal << "massa terrestre(s)" << endl;

    return 0;


}