// Faça um algoritmo que gere e escreva automaticamente a seguinte matriz: 
// 1 1 1 1 1 1 
// 1 2 2 2 2 1 
// 1 2 3 3 2 1 
// 1 2 3 3 2 1 
// 1 2 2 2 2 1 
// 1 1 1 1 1 1
#include<iostream>
using namespace std;

int main(){
    int const lin=6, col=6;
    int M[lin][col], i, j;

    for(i=0; i<lin; i++){
        for(j=0; j<col; j++){
            if (j==0 || i==0 || j==5 || i==5){
                M[i][j] = 1;
            }
            if ((j==1 && i==1) || (j==2 && i==2)) {
                 M[i][j] = 2;
             }
            else {
                M[i][j]=0;
            }
        }
    }
            
    cout << "\n\tMatriz automatica: \n";
    for(i=0; i<lin; i++){
        for(j=0; j<col; j++){
           cout << "\t" << M[i][j];

        }
        cout << "\n";
    }

    return 0;
}