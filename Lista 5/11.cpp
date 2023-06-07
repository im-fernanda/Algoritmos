// Elabore um algoritmo que leia uma matriz MxN, verifique e escreva as coordenadas (linha e coluna) do maior 
// e do menor elementos.
#include<iostream>
using namespace std;
int main(){
    int const lin=3, col=2;
    int M[lin][col] = {
        {1, 2},
        {4, 5},
        {6, 7}
    };
    int i, j, maior=0, menor, linhaDoMaior, colunaDoMaior, linhaDoMenor, colunaDoMenor;
    
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
                colunaDoMaior = j;
            }
        }
    }

    menor = maior;
    for(i=0; i<lin; i++){
        for(j=0; j<col; j++){
            if (M[i][j]<menor){
                menor = M[i][j];
                linhaDoMenor = i;
                colunaDoMenor = j;
            }
        }
    }

    cout << "O maior elemento da matriz eh " << maior << " e esta na posicao [" << linhaDoMaior << "][" << colunaDoMaior << "]." << endl;
    cout << "O menor elemento da matriz eh " << menor << " e esta na posicao [" << linhaDoMenor << "][" << colunaDoMenor << "]."; 

    return 0;
}
