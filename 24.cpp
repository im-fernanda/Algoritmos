// Elabore um algoritmo que leia um vetor B de 10 elementos (considere que podem existir elementos 
// repetidos). Em seguida mova para um vetor C apenas os elementos de B que não se repetem, deixando em B 
// o elemento -1 em cada posição substituindo o elemento que foi movido. Ao final escreva o vetor C.
#include <iostream>
using namespace std;

int main (){
    int B[10], i, j, indexC=0;
    int C[10], qnt = 5; //é 10
    bool repetido = false;

    for (i=0; i<qnt; i++){
        cout << "Elemento " << i << ": ";
        cin >> B[i];
    }

    for (i=0; i<qnt; i++){
        repetido = false;

        // Verificar se o elemento já foi encontrado antes
        j = 0;
        while (j<i) {
            if (B[i] == B[j]) {
                repetido = true;
                j = i; // Força a saída do while
            }
            j++;
        }
        if (!repetido){
            C[indexC] = B[i];
            indexC++;
        }

        j = i+1;
        while (j < 10) {
            if (B[i] == B[j]) {
                B[j] = -1;
            }
            j++;
        }
    }

    cout << "Vetor C: ";
    for (i=0; i<indexC; i++){
        cout << C[i] << " ";
    }

    cout << "\n";
    cout << "Vetor B sem os elementos repetidos: ";
    for (i=0; i<qnt; i++){
        cout << B[i] << " ";
    }


    return 0;
}