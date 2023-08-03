#include <iostream>
 
 using namespace std;

 int main(){
    const int numEstrelas = 6;
    double magnitude[numEstrelas];
    double somaMagnitude = 0.0;

    for (int i = 0; i < numEstrelas; i++) {         //Preenche o vetor com as magnitudes das estrelas
        cout << "Digite a magnitude aparente da estrela " << i + 1 << ": ";
        cin >> magnitude[i];
        somaMagnitude += magnitude[i];

    }

    double magnitudeMedia = somaMagnitude / numEstrelas;        //Calcula a magnitude média

    cout << "A magnitude media das estrelas é: " << magnitudeMedia << endl; //Exibe a magnitude media das estrelas

    return 0;

 }