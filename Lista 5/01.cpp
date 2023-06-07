// Elabore um algoritmo que leia uma matriz M(6,6) e um valor A inteiro e multiplique a matriz M pelo valor A 
// inserindo os resultados em um vetor de V(36). Ao final, escreva o vetor V.

#include<iostream>
using namespace std;

int main(){
    int const lin=2, col=2;
    int tam=lin*col;
    int M[lin][col], V[tam], A, i, j, k=0;

    cout << "Informe uma matriz 6x6: ";
    for (i=0; i<lin; i++){
        for (j=0; j<col; j++){
            cout << "Elemento [" << i+1 << "] [" << j+1 << "]: ";
            cin >> M[i][j];
        }
    }

    cout << "Informe um valor inteiro A: ";
    cin >> A;
    for (i=0; i<lin; i++){
        for (j=0; j<col; j++){
            V[k] = A*M[i][j];
            k++;
        }
    }

    for (k=0; k<tam; k++){
        cout << V[k] << " ";
    }

return 0;
}