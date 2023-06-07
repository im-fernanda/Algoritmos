// Elabore um algoritmo que leia um vetor de 15 posições de inteiros e o compacte, ou seja, elimine as posições 
// com valores iguais a zero. Para isso todos os elementos à frente do valor zero devem ser movidos uma posição 
// para trás no vetor

#include <iostream>
using namespace std;

int main (){
    int qnt = 5;
    int A[15], i, j, cont=0;

    for (i=0; i<qnt; i++){
        cout << "Elemento " << i << ": ";
        cin >> A[i];
    }

    for (i=0; i<qnt; i++){
        if(A[i] == 0){
            cont++;
            for (j=i; j < qnt - 1; j++) {
                A[j] = A[j+1];
            }
            qnt--; // Atualiza o tamanho do vetor após remoção
            i--; // Volta uma posição para verificar o próximo elemento modificado
        }
        }

    cout << "Quantidade de zeros: " << cont << endl;
    cout << "Vetor realocado: ";
    for (i=0; i<qnt; i++) {
        cout << A[i] << " ";
    }



    return 0;
}