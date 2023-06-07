// Escreva um algoritmo que leia uma matriz M(5,5) e calcula as somas abaixo, escreva essas somas e a matriz. 
// a) da linha 4 de M 
// b) da coluna 2 de M 
// c) da diagonal principal 
// d) da diagonal secundária 
// e) de todos os elementos da matriz M

#include<iostream>
using namespace std;

int main(){
    int const lin=3, col=3;
    int M[lin][col], i, j;
    int somaLinha=0, somaColuna=0, somaDiagP=0, somaDiagS=0, somaTodos=0;

    cout << "Informe uma matriz 5x5: ";
    for (i=0; i<lin; i++){
        for (j=0; j<col; j++){
            cout << "Elemento [" << i+1 << "] [" << j+1 << "]: ";
            cin >> M[i][j];
        }
    }

    cout << "\n\tMatriz original: \n";
    for(i=0; i<lin; i++){
        for(j=0; j<col; j++){
           cout << "\t" << M[i][j];
        }
        cout << "\n";
    }

    for (i=0; i<lin; i++){
        for (j=0; j<col; j++){

            somaTodos += M[i][j];
            
            if (i==3){
                somaLinha+=M[i][j];
            }
            if (j==1){
                somaColuna+=M[i][j];
            }
            if (i==j){
                somaDiagP+=M[i][j];
            }
            if (i == col-j-1) {
                somaDiagS += M[i][j];
            }

        }
    }


	
    cout << "Soma da linha 4: " << somaLinha << endl;
    cout << "Soma da coluna 2: " << somaColuna << endl;
    cout << "Soma da diagonal principal: " << somaDiagP << endl;
    cout << "Soma da diagonal secundária: " << somaDiagS << endl;
    cout << "Soma de todos os elementos: " << somaTodos << endl;


    return 0;
}