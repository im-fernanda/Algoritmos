// Elabore um algoritmo que leia uma matriz A[12][12] e retorna a média aritmética dos elementos abaixo da 
// diagonal principal

#include<iostream>
using namespace std;
int main(){
    int const lin=4, col=4;
    int M[lin][col] = {
        {1, 2, 3, 1},
        {6, 7, 8, 1},
        {4, 5, 9, 1},
        {1, 0, 3, 1}
    };
    int i, j, cont=0;
    float soma=0, media=0;

       // cout << "Informe uma matriz 12x12: ";
    // for (i=0; i<lin; i++){
    //     for (j=0; j<col; j++){
    //         cout << "Elemento [" << i+1 << "] [" << j+1 << "]: ";
    //         cin >> M[i][j];
    //     }
    // }
    cout << "\n\tMatriz original: \n";
    for(i=0; i<lin; i++){
        for(j=0; j<col; j++){
           cout << "\t" << M[i][j];
        }
        cout << "\n";
    }
    cout << endl;
   
    for(i=0; i<lin; i++){
        for(j=0; j<col; j++){
           if (i>j){
                soma += M[i][j];
                cont++;
           }
        }
    }
    media = soma/cont;
    cout << "Soma dos elementos abaixo da diagonal principal: " << soma << endl;
    cout << "Qnt de elementos: " << cont << endl;
    cout << "Media aritmética dos elementos abaixo da diagonal principal: " << media;


    return 0;
}