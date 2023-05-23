// Elabore um algoritmo que leia os 9 primeiros elementos de um vetor de 10 elementos, um índice P (entre 0 
// e 8, não aceitar valores fora dessa faixa) e um número inteiro X. Em seguida inclua o valor de X na posição P 
// do vetor B fazendo com que os elementos existentes dentro do vetor (da posição P+1 em diante) sejam 
// deslocados de uma posição para o final (considere que existe espaço no vetor para o deslocamento). Logo 
// após o processamento escrever o vetor B.
#include <iostream>
using namespace std;

int main (){
    int A[10], i, p, x;
    int B[10], qnt = 5; //é 9

    cout << "Digite os 9 primeiros elementos do vetor: \n";
    for (i=0; i<qnt; i++){
        cout << "Elemento " << i << ": ";
        cin >> A[i];
    }

    cout << "Digite o índice P (entre 0 e 8): ";
    cin >> p;

    while (p < 0 || p > 8) {
        cout << "Índice inválido. Digite o índice P (entre 0 e 8): ";
        cin >> p;
    }

    cout << "Informe um numero inteiro X: ";
    cin >> x;

    for (i=0; i<p; i++){
        B[i] = A[i];
    }
    for (i=qnt+1; i>p; i--){
        B[i] = A[i-1];
    }
    B[p] = x;

    cout << "Vetor realocado: ";
    for (i=0; i<=qnt; i++) {
        cout << B[i] << " ";
    }



    return 0;
}