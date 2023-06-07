/*
Elabore um algoritmo para ler um vetor A de 20 números inteiros e 
obter a maior diferença entre dois elementos consecutivos desse vetor. 
Ao final, escreva a maior diferença e os índices dos respectivos elementos.*/

#include<iostream>
using namespace std;

int main(){
	int A[20], i, dif, maior=0, indiceMaior;

    for(i=0; i<20; i++){
        cout << "\n\tDigite o elemento de A[" << i << "]: ";
        cin >> A[i];
    }

    for(i=0; i<19; i++){
        dif = A[i] - A[i+1];
        if(dif<0){
            dif *= -1;
        }
        if(dif > maior){
            maior = dif;
            indiceMaior = i;
        }
    }
    
    cout << "\n\tA maior diferença encontrada foi " << maior;
    cout << "\n\tentre os elementos " << indiceMaior << " e " << (indiceMaior+1);

    cout << "\n\tFim\n";
	system("Pause");
}




