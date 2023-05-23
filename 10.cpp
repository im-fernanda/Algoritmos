// Sejam A e B dois vetores contendo 10 elementos inteiros. Elabore um algoritmo que: 
// a. Leia A e B. 
// b. Calcule a soma dos elementos de A. 
// c. Crie o vetor C contendo a soma dos elementos de mesma posição dos vetores A e B. 
// d. Calcule quantos elementos de A são maiores que a soma dos elementos de B.
#include <iostream>
using namespace std;

int main (){
    int const tam = 5;
    int A[10], B[10], C[10];
    int i, somaA = 0, somaB = 0, maiores = 0;

    for (i=0; i<tam; i++){
        cout << "Digite o elemento " << i << " do vetor 1: ";
        cin >> A[i];
        
        somaA += A[i];

        cout << "Digite o elemento " << i << " do vetor 2: ";
        cin >> B[i];
        somaB += B[i];

        C[i] = A[i] + B[i];

    }

    cout << "Soma dos elementos de A: " << somaA << endl;
    cout << "Soma dos elementos de B: " << somaB << endl;

    cout << "Vetor C: ";
    for (i=0; i<tam; i++){
        cout << C[i] << " ";
        if (A[i] > somaB) {
            maiores++;
        }
    }
    cout << "\n";
    cout << maiores << " elementos de A sao maiores que a soma dos elementos de B.";

    return 0;
}