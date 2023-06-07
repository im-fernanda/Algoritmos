// Elabore um algoritmo que leia um vetor de 10 posições de inteiros, ordene-o (ordem crescente) e o escreva.
#include <iostream>
using namespace std;

int main (){
    int const tam = 5;
    int A[10], i, j, aux;

    for (i=0; i<tam; i++){
        cout << "Elemento " << i+1 << ": ";
        cin >> A[i];
    }

    for (i=0; i<tam; i++){
        for (j=0; j<tam-i-1; j++)
            if (A[j]>A[j+1]){
                aux = A[j+1];
                A[j+1] = A[j];
                A[j] = aux;
        }
    }

    cout << "Vetor em ordem crescente: ";
    for (i=0; i<tam; i++){
        cout << A[i] << " ";
    }
    return 0;
}