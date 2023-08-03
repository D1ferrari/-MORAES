#include <iostream>

using namespace std;

bool formaTriangulo(double a, double b, double c) {                     // Função para verificar se é possível formar um triângulo com os três lados dados.
    return (a + b > c) && (a + c > b) && (b + c > a);
}

void determinarTipoTriangulo(double a, double b, double c) {            // Função para determinar o tipo de triângulo (equilátero, isósceles ou escaleno).
    if (a == b && b == c) {
        cout << "É um triângulo equilátero." << endl;
    } else if (a == b || a == c || b == c) {
        cout << "É um triângulo isósceles." << endl;
    } else {
        cout << "É um triângulo escaleno." << endl;
    }
}

int main() {
    double lado1, lado2, lado3;

    cout << "Digite o valor do primeiro lado do triângulo: ";       // Solicita ao usuário que digite os três lados do triângulo.
    cin >> lado1;

    cout << "Digite o valor do segundo lado do triângulo: ";
    cin >> lado2;

    cout << "Digite o valor do terceiro lado do triângulo: ";
    cin >> lado3;

    if (formaTriangulo(lado1, lado2, lado3)) {                // Verifica se é possível formar um triângulo com os lados fornecidos.
        cout << "É possível formar um triângulo." << endl;
        determinarTipoTriangulo(lado1, lado2, lado3);
    } else {
        cout << "Não é possível formar um triângulo com esses valores." << endl;
    }

    return 0;
}