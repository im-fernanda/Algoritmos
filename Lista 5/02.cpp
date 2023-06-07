// Escreva um algoritmo que leia um número inteiro A e uma matriz M (30,30) de inteiros. Conte quantos valores 
// da matriz M são iguais a A. Crie, a seguir, uma matriz X contendo todos os elementos de M diferentes de A 
// (quando for igual a A, insira um 0). Mostre os resultados.
#include<iostream>
using namespace std;

int main(){
    int const lin=2, col=2;
    int M[lin][col], A, i, j;
    int X[lin][col], cont=0;

    cout << "Informe uma matriz 30x30: ";
    for (i=0; i<lin; i++){
        for (j=0; j<col; j++){
            cout << "Elemento [" << i+1 << "] [" << j+1 << "]: ";
            cin >> M[i][j];
        }
    }

    cout << "Informe um valor inteiro A: ";
    cin >> A;

    cout << "\n\tMatriz original: \n";
    for(i=0; i<lin; i++){
        for(j=0; j<col; j++){
           cout << "\t" << M[i][j];
        }
        cout << "\n";
    }

    for (i=0; i<lin; i++){
        for (j=0; j<col; j++){
            X[i][j]=M[i][j];
            if (M[i][j] == A){
                cont++;
                X[i][j]=0;
            }
        }
    }

    cout << "Quantidade de valores da matriz M iguais a X: " << cont << endl;
    cout << "\n\tMatriz X: \n";
    for (i=0; i<lin; i++){
        for (j=0; j<col; j++){
            cout << "\t" << X[i][j];
        }
        cout << "\n";
    }

return 0;
}