/*
20.	Elabore um algoritmo que leia dois vetores de inteiros X e Y, 
    cada um com 5 elementos (não permita elementos repetidos dentro de
    um mesmo vetor). Em seguida calcule e escreva os seguintes
    vetores resultantes:
    a.	Soma: soma dos elementos de X e Y de mesmo índice;
    b.	Distância: distância entre os elementos de X e Y de mesmo índice;
 */

#include<iostream>
using namespace std;

int main(){
    const int tam = 5;
    int x[tam], y[tam], i, j, elemento, dist;
    bool existe;

    //elemento de x:
    for(i=0; i<tam; i++){
        cout << "\tDigite o elemento x[" << i << "]: ";
        cin >> elemento;
        existe = false;
        for(j=0; j<i; j++){
            if(x[j]==elemento){
                //o elemento já existe no vetor
                existe = true;
            }
        }
        if(existe){
            cout << "\n\tO elemento ja existe no vetor";
            i--;
        }else{
            x[i] = elemento;
        }
    }

    //elementos de y:
    for(i=0; i<tam; i++){
        cout << "\tDigite o elemento y[" << i << "]: ";
        cin >> elemento;
        existe = false;
        for(j=0; j<i; j++){
            if(y[j]==elemento){
                //o elemento já existe no vetor
                //o elemento já existe no vetor
                existe = true;
            }
        }
        if(existe){
            cout << "\n\tO elemento ja existe no vetor";
            i--;
        }else{
            y[i] = elemento;
        }
    }

    cout << "\n\tX: ";
    for(i=0; i<tam; i++){
        cout << x[i] << " ";
    }
    cout << "\n\tY: ";
    for(i=0; i<tam; i++){
        cout << y[i] << " ";
    }

    cout << "\n\tSoma de elementos de mesmo indice: ";
    for(i=0; i<tam; i++){
        cout << x[i]+y[i] << " ";
    }

    cout << "\n\tDistancia entre elementos de mesmo indice: ";
    for(i=0; i<tam; i++){
        dist = x[i]-y[i];
        if(dist<0)
            dist*=-1;
        cout << dist << " ";
    }

    cout << "\n\n\tFim\n\n\t";
	system("Pause");
}




