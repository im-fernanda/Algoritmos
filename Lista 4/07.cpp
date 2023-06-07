// Elabore um algoritmo que leia dois vetores V1 e V2 de 10 posições cada e faça a multiplicação dos elementos 
// de mesmo índice, colocando o resultado em um terceiro vetor V3. Mostre o vetor resultante.
#include <iostream>
using namespace std;

int main (){
    int const tam = 5;
    int V1[10], V2[10], V3[10], i;

    for (i=0; i<tam; i++){
        cout << "Digite o elemento " << i << " do vetor 1: ";
        cin >> V1[i];
        cout << "Digite o elemento " << i << " do vetor 2: ";
        cin >> V2[i];
    }

    for (i=0; i<tam; i++){
            V3[i] = V1[i] * V2[i];
    }

    cout << "Vetor 3: ";
    for (i=0; i<tam; i++){
        cout << V3[i] << " ";
    }
    return 0;
}