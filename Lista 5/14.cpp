// Elabore um algoritmo que leia uma matriz 4x5 de números reais. Em seguida, calcule a soma dos elementos
// de cada coluna, armazenando o resultado da soma em um vetor de 5 elementos. Escreva a matriz e o vetor.

#include<iostream>
using namespace std;
int main(){
    int const lin=4, col=5;
    double M[lin][col] = {
        {1, 2, 3, 5, 12},
        {4, 2, 6, 9, 2},
        {6, 8, 7, 12, 1},
        {5, 0, 4, 14, 0}
    };
    double vetorSoma[5] = {0, 0, 0, 0, 0};
    int i=0, j=0, k=0, soma=0;

    // cout << "Informe uma matriz 4x5: ";
    // for (i=0; i<lin; i++){
    //     for (j=0; j<col; j++){
    //         cout << "Elemento [" << i+1 << "] [" << j+1 << "]: ";
    //         cin >> M[i][j];
    //     }
    // }
    cout << "\nMatriz original: \n";
    for(i=0; i<lin; i++){
        for(j=0; j<col; j++){
           cout << "\t" << M[i][j];
        }
        cout << "\n";
    }
    cout << endl;
   
    for(j=0; j<col; j++){
        for(i=0; i<lin; i++){
            soma += M[i][j];
        }
        vetorSoma[k] += soma;
        k++;
        soma=0;
    }
    cout << "Vetor da soma dos elementos de cada coluna: ";
    for(i=0; i<5; i++){
        cout << vetorSoma[i] << " ";
    }

    return 0;
}