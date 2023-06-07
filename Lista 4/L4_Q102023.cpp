/*
10. Sejam A e B dois vetores contendo 10 elementos inteiros. 
Elabore um algoritmo que:
a. Leia A e B.
b. Calcule a soma dos elementos de A.
c. Crie o vetor C contendo a soma dos elementos de mesma posição dos
 vetores A e B.
d. Calcule quantos elementos de A são maiores que a soma dos elementos de B.*/

#include<iostream>
using namespace std;


int main(){
    int const qtd = 5;
    int A[qtd], B[qtd], C[qtd], i, somaA=0, somaB=0, cont=0;

    for(i=0; i<qtd; i++){
        cout << "\n\tDigite o elemento A[" << i << "]: ";
        cin >> A[i];
        cout << "\n\tDigite o elemento B[" << i << "]: ";
        cin >> B[i];
        somaA = somaA + A[i];
        C[i] = A[i] + B[i];
        somaB = somaB + B[i];
    }

    for(i=0; i<qtd; i++){
        if(A[i]>somaB){
            cont++;
        }
    }

    cout << "\n\n\tA: ";
    for(i=0; i<qtd; i++)
        cout << A[i] << " ";
    cout << "\n\n\tB: ";
    for(i=0; i<qtd; i++)
        cout << B[i] << " ";
    cout << "\n\n\tC: ";
    for(i=0; i<qtd; i++)
        cout << C[i] << " ";

    cout << "\n\tSoma dos elementos de A: " << somaA;
    cout << "\n\tSoma dos elementos de B: " << somaB;
    cout << "\n\tTotal de elementos de A maiores que a soma dos elementos de B: " << cont;

    cout << "\n\n\tFim\n\n\t";
	system("Pause");
}




