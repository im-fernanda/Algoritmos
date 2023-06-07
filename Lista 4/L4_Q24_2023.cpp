/*
24.	Elabore um algoritmo que leia um vetor B de 10 elementos 
(considere que podem existir elementos repetidos). 
Em seguida mova para um vetor C apenas os elementos de B
 que não se repetem, deixando em B o elemento -1 em cada
  posição substituindo o elemento que foi movido. 
  Ao final escreva o vetor C.
 */

#include<iostream>
using namespace std;

int main(){
    const int tam = 10;
    int B[tam], C[tam], i, j, cont, k=0;

    for(i=0; i<tam; i++){
        cout << "\tDigite o elemento B[" << i << "]: ";
        cin >> B[i];
    }

    cout << "\n\tB: ";
    for(i=0; i<tam; i++){
        cout << B[i] << " ";
    }


    for(i=0; i<tam; i++){
        //procurando o elemento B[i] em B...
        cont = 0;
        for(j=0; j<tam; j++){
            if(B[i]==B[j]){
                cont++;
            }
        }
        if(cont==1){
            C[k++] = B[i];
            B[i] = -1;
        }
    }

    cout << "\n\tB (final): ";
    for(i=0; i<tam; i++){
        cout << B[i] << " ";
    }

    cout << "\n\tC: ";
    for(i=0; i<k; i++){
        cout << C[i] << " ";
    }

    cout << "\n\n\tFim\n\n\t";
	system("Pause");
}




