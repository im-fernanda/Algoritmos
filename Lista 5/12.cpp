// Elabore um algoritmo que leia uma matriz MxN, verifique e escreva o maior elemento da linha que contém o 
// menor elemento da matriz.
#include<iostream>
using namespace std;
int main(){
    int const lin=3, col=3;
    int M[lin][col] = {
        {15, 8, 3},
        {4, 2, 6},
        {5, 8, 10}
    };
    int i, j, menor=999, linhaDoMenor, coluna, maior;
    
    // cout << "Informe uma matriz 10x10: ";
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
            if (M[i][j]<menor){
                menor = M[i][j];
                linhaDoMenor = i;
                maior = menor;
            }
        }
    }

    for(j=0; j<col; j++){
        if (M[linhaDoMenor][j]>maior){
            maior = M[linhaDoMenor][j];
            coluna = j;
        }
    }
    cout << "O menor elemento da matriz eh " << menor << endl;
    cout << "O maior elemento na linha onde esta o maior elemento da matriz eh " << maior << " e esta na posicao [" << linhaDoMenor << "][" << coluna << "]."; 
    return 0;
}
