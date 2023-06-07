// Elabore um algoritmo para ler um vetor A de 20 números inteiros e obter a maior diferença entre dois 
// elementos consecutivos desse vetor. Ao final, escreva a maior diferença e os índices dos respectivos 
// elementos. 
#include <iostream>
using namespace std;

int main (){
    int const tam = 4;
    int A[20], i, diferenca = 0, maiorDiferenca = 0, indice1, indice2;

    for (i=0; i<tam; i++){
        cout << "Digite o elemento " << i << " do vetor: ";
        cin >> A[i];
    }

    cout << "Vetor A: ";
    for (i=0; i<tam; i++){
        cout << A[i] << " ";
        diferenca = A[i+1] - A[i];
        if (diferenca < 0){
            diferenca = diferenca*(-1);}
        if (diferenca>maiorDiferenca){
            maiorDiferenca = diferenca;
            indice1 = i;
            indice2 = i+1;
        }
    }
    cout << "\n";

    cout << "Maior diferenca: " << maiorDiferenca << ". Indices dos elementos: " << indice1 << ", " << indice2 << "." << endl;

    return 0;
}