/*
17.	Elabore um algoritmo que leia um vetor ORIGINAL de 20 
posições de inteiro, verifique e informe se os seus elementos 
estão em ordem crescente, ordem decrescente ou ordem aleatória. */

#include<iostream>
using namespace std;

int main(){
    const int tam = 6;
    int ORIGINAL[tam], i;
    bool crescente, decrescente, iguais;
    crescente = decrescente = iguais = true;
    
    for(i=0; i<tam; i++){
        cout << "\n\tDigite o elemento original[" << i << "]: ";
        cin >> ORIGINAL[i];
    }

    // verificar se todos os elementos do vetor são iguais
    for(i=0; i<(tam-1); i++){
        if(ORIGINAL[i+1]!=ORIGINAL[i]){
            iguais = false;
        }
    }
    if(iguais){
        cout << "\n\tVALORES IGUAIS";
    }else{
        for(i=0; i<(tam-1); i++){
            if(ORIGINAL[i+1]>ORIGINAL[i]){ //o próximo elemento é maior ou igual ao atual
                decrescente = false; //não é decrescente
            }
            if(ORIGINAL[i+1]<ORIGINAL[i]){ //o próximo elemento é menor ou igual ao atual
                crescente = false; //não é crescente
            }
            
        } //fim da busca
        if((!crescente)&&(!decrescente)){
            cout << "\n\tALEATORIO";
        }else{
            if(crescente){
                cout << "\n\tCRESCENTE";
            }else{
            //if(decrescente){
                cout << "\n\tDECRESCENTE";
            }
        }
    }







    cout << "\n\n\tFim\n\n\t";
	system("Pause");
}




