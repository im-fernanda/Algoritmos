// Elabore um algoritmo que leia dois vetores, A (20 elementos inteiros) e B (20 elementos inteiros), e escreva 
// um terceiro vetor C contendo todos os elementos comuns aos dois vetores A e B.
#include <iostream>
using namespace std;

int main (){
    int const tam = 4;
    int A[20], B[20], C[20], i, j, cont = 0, posicao = 0;

    for (i=0; i<tam; i++){
        cout << "Digite o elemento " << i << " do vetor 1: ";
        cin >> A[i];
        cout << "Digite o elemento " << i << " do vetor 2: ";
        cin >> B[i];

    }

    for (i=0; i<tam; i++){
        for (j=0; j<tam; j++){
            if (A[i] == B [j]){
                C[posicao] = A[i];
                posicao++;
                cont++;
        }
    }
    }
   
    cout << "Vetor os com elementos em comum: ";
    for (i=0; i<cont; i++){
        cout << C[i] << " ";
    }

    return 0;
}