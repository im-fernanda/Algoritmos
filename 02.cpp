// Elabore um algoritmo que leia e mostre um vetor de 20 elementos inteiros. A seguir, conte quantos valores 
// pares existem no vetor e troque cada um desses elementos por 0. Em seguida escreva o vetor final. 
#include <iostream>
using namespace std;

int main (){
    int const tam = 4;
    int A[20], pares = 0, i;

    for (i=0; i<tam; i++){
        cout << "Digite o elemento " << i << " do vetor: ";
        cin >> A[i];
        if (A[i] % 2 == 0){
            pares++;
            A [i] = 0;
        }
    }

    cout << "Vetor final: ";
    for (i=0; i<tam; i++){
        cout << A [i] << " ";
    }

    return 0;
}
