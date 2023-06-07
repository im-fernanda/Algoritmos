// Escreva um algoritmo que leia uma matriz A(15,5) e a escreva. Verifique, a seguir, quais os elementos de A 
// que estão repetidos e quantas vezes cada um está repetido. Escrever cada elemento repetido com uma 
// mensagem dizendo quantas vezes cada elemento aparece em A.

#include<iostream>
using namespace std;

int main(){
    int const lin=3, col=3;
    int A[lin][col] = {
        {1, 2, 3},
        {4, 2, 6},
        {7, 3, 9}
    };
    int i, j=0;
    const int maxElementos = 9; // Valor máximo possível para um elemento da matriz: 15*5
    int repetidos[maxElementos-1] ={0}, cont=0;

    cout << "Informe uma matriz 15x5: ";
    for (i=0; i<lin; i++){
        for (j=0; j<col; j++){
            // cout << "Elemento [" << i+1 << "] [" << j+1 << "]: ";
            // cin >> A[i][j];

            repetidos[A[i][j]]++;
        }
    }

    cout << "\n\tMatriz original: \n";
    for(i=0; i<lin; i++){
        for(j=0; j<col; j++){
           cout << "\t" << A[i][j];
        }
        cout << "\n";
    }

//Para encontrar elementos repetidos, temos que percorrer toda a matriz e comparar com os elementos que temos em X.
    for (i = 0; i < maxElementos; i++) {
        if (repetidos[i] > 1) {
            cout << i << " aparece " << repetidos[i] << " vezes" << endl;
        }
    }


    return 0;
}