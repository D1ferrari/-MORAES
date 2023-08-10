#include <iostream>

using namespace std;

int main() {
    double precoMascara;
    double dinheiroBatman;

    cout << "Digite o preço de uma máscara: R$ ";               // Solicita ao usuário que digite o preço da máscara
    cin >> precoMascara;

    cout << "Digite a quantidade de dinheiro do Batman: R$ ";           // Solicita ao usuário que digite a quantidade de dinheiro do Batman
    cin >> dinheiroBatman;

    if (dinheiroBatman >= precoMascara) {                           // Verifica se o Batman tem dinheiro suficiente para comprar a máscara de reserva
        double dinheiroRestante = dinheiroBatman - precoMascara;
        cout << "O Batman pode comprar a máscara de reserva por R$ " << precoMascara << "." << endl;
        cout << "Dinheiro restante: R$ " << dinheiroRestante << endl;
    } else {
        cout << "O Batman não possui dinheiro suficiente para comprar a máscara de reserva." << endl;
    }

    return 0;
}