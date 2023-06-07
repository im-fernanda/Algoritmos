// Escreva um algoritmo que leia uma matriz M(10,10) e a escreva. Troque, a seguir: 
// - Os elementos da diagonal principal pelos elementos da diagonal secundária;
// - Os elementos da linha 5 com os da coluna 10. 
// Escreva a matriz modificada.

#include<iostream>
using namespace std;
int main(){
    int const lin=5, col=5;
    int M[lin][col] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };
    int i, j, k=0;
    int aux, diagP[col], diagS[col];

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
            if (i==j){
                diagP[k] = M[i][j];
                k++;
            }
        }
    }
    cout << "Diagonal principal: ";
    for(i=0; i<k; i++){
        cout << diagP[i] << " ";
    }
    cout << endl;

    k=0;
    for(i=0; i<lin; i++){
        for(j=0; j<col; j++){
            if(i==(col-j-1)){
                diagS[k] = M[i][j]; 
                k++;
            }
        }
    }
    cout << "Diagonal secundaria: ";
    for(i=0; i<k; i++){
        cout << diagS[i] << " ";
    }
    cout << endl;

    cout << "\n\tTroca da diagonal principal pela diagonal secundaria: \n";
    k=0;
    for(i=0; i<lin; i++){
        for(j=0; j<col; j++){
            if (i==j){
                M[i][j] = diagS[k];
                k++;
            }
        }
    }

    k=0;
    for(i=0; i<lin; i++){
        for(j=0; j<col; j++){
            if (i==(col-j-1)){
                M[i][j] = diagP[k];
                k++;
            }
        }
    }

    for(i=0; i<lin; i++){
        for(j=0; j<col; j++){
           cout << "\t" << M[i][j];
        }
        cout << "\n";
    }

   for(i=0; i<lin; i++){
        aux = M[i][4];
        M[i][4] = M[4][i];
        M[4][i] = aux;
    }
    cout << "\n\tTroca da linha 5 com a coluna 5: \n";
    for(i=0; i<lin; i++){
        for(j=0; j<col; j++){
           cout << "\t" << M[i][j];
        }
        cout << "\n";
    }

    return 0;
}