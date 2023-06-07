// Elabore um algoritmo que leia uma matriz 3x3 e gere automaticamente uma nova matriz que seja a matriz 
// transposta da primeira (troque as linhas por colunas).
#include<iostream>
using namespace std;
int main(){
    int const lin=3, col=3;
    int M[lin][col] = {
        {1, 2, 3},
        {6, 7, 8},
        {11, 12, 13}
    };
    int i, j, k=0;

    // cout << "Informe uma matriz 3x3: ";
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
   
    cout << "\n\tMatriz transposta: \n";
    for(j=0; j<col; j++){
        for(i=0; i<lin; i++){
           cout << "\t" << M[i][j];
        }
        cout << "\n";
    }

    return 0;
}