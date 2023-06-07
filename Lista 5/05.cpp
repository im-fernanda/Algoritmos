// Escreva um algoritmo que leia uma matriz M(12,13) e multiplique todos os 13 elementos de cada uma das 
// 12 linhas de M pelo maior elemento daquela linha. Escreva a matriz lida e a modificada.

#include<iostream>
using namespace std;
int main(){
    int const lin=2, col=3;
    int M[lin][col] = {
        {1, 2, 3},
        {4, 2, 6},
    };
    int i, j, maior=0, maioresDaLinha[lin], k=0;

    // cout << "Informe uma matriz 12x13: ";
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
            }
        }
        maioresDaLinha[k] = M[i][j];
        k++;
    }

    cout << "Maiores das linhas: ";
    for (i=0; i<k; i++){
        cout << maioresDaLinha[i] << " ";
    }
    cout << endl;

    for(i=0; i<lin; i++){
        for(j=0; j<col; j++){
           M[i][j]=M[i][j]*maioresDaLinha[i];
        }
    }

    cout << "\n\tMatriz multiplicada: \n";
    for(i=0; i<lin; i++){
        for(j=0; j<col; j++){
           cout << "\t" << M[i][j];
        }
        cout << "\n";
    }

    return 0;
}