/*
Elabore um algoritmo que leia dois vetores, A (20 elementos inteiros) 
e B (20 elementos inteiros), e escreva um terceiro vetor C contendo 
todos os elementos comuns aos dois vetores A e B.*/

#include<iostream>
using namespace std;


int main(){
    int const qtd = 4; //tamanho dos vetores
	int A[qtd], B[qtd], C[qtd], i, j, k=0, iC;
    bool achou;

    cout << "\n\tDigite os elementos de A e B: ";

    for(i=0; i<qtd; i++){
        cout << "\n\tA[" << i << "]: ";
        cin >> A[i];
        cout << "\n\tB[" << i << "]: ";
        cin >> B[i];
    }

    for(i=0; i<qtd; i++){
        for(j=0; j<qtd; j++){
            if(A[i]==B[j]){
                achou = false;
                for(iC=0; iC<k; iC++){
                    if(A[i]==C[iC]){
                        achou = true;
                    }
                }
                if(!achou){
                    C[k] = A[i];
                    k++;
                }
            }
        }
    }
    
    cout << "\n\n\tVetor A: ";
    for(i=0; i<qtd; i++){
        cout << A[i] << " ";
    }
    cout << "\n\n\tVetor B: ";
    for(i=0; i<qtd; i++){
        cout << B[i] << " ";
    }
    cout << "\n\n\tVetor C: ";
    for(i=0; i<k; i++){
        cout << C[i] << " ";
    }

    cout << "\n\n\tFim\n";
	system("Pause");
}




