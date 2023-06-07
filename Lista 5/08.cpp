// Na teoria dos sistemas, define-se como elemento minimax de uma matriz o menor elemento da linha onde 
// se encontra o maior elemento da matriz. Escreva um algoritmo que leia uma matriz 10 X 10 de númros e 
// encontre seu elemento minimax, mostrando também sua posição.
#include<iostream>
using namespace std;
int main(){
    int const lin=3, col=3;
    int M[lin][col] = {
        {1, 2, 3},
        {4, 2, 6},
        {5, 8, 10}
    };
    int i, j, maior=0, linhaDoMaior, coluna, minimax=0;
    
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
            if (M[i][j]>maior){
                maior = M[i][j];
                linhaDoMaior = i;
                minimax = maior;
            }
        }
    }

    for(j=0; j<col; j++){
        if (M[linhaDoMaior][j]<minimax){
            minimax = M[linhaDoMaior][j];
            coluna = j;
        }
    }
    cout << "O maior elemento da matriz eh " << maior << endl;
    cout << "O menor elemento na linha onde esta o maior elemento da matriz eh " << minimax << " e esta na posicao [" << linhaDoMaior << "][" << coluna << "]."; 
    return 0;
}
