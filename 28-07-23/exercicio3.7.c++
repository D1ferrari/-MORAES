#include <iostream>

using namespace std;

int main() {
    int quantidadeBatSaqueadores;
    double valorUnitario;
    double valorTotal;

    cout << "Digite a quantidade de Bat-Saqueadores que deseja comprar: ";              // Solicita ao usuário a quantidade de Bat-Saqueadores que deseja comprar
    cin >> quantidadeBatSaqueadores;

    cout << "Digite o valor unitário de cada Bat-Saqueador: ";                             // Solicita ao usuário o valor unitário de cada Bat-Saqueador
    cin >> valorUnitario;

    valorTotal = quantidadeBatSaqueadores * valorUnitario;                      // Calcula o valor total da compra multiplicando a quantidade pela valor unitário

    cout << "Valor total da compra: R$ " << valorTotal << endl;                     // Exibe o valor total da compra na tela

    return 0;
}
