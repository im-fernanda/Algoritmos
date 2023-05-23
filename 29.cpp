// Elabore um algoritmo que leia 20 números inteiros obrigatoriamente diferentes e armazene-os em um vetor. 
// Cada vez que o número digitado já existir no vetor, o algoritmo deverá computar mais um erro. Ao final 
// escreva o vetor e o total de erros que o usuário cometeu
#include <iostream>
using namespace std;

int main (){
    int const tam = 5;
    int A[20], i, j, erros = 0;

    for (i=0; i<tam; i++){
        cout << "Informe o elemento " << i+1 << ": ";
        cin >> A[i];

        for (j=0; j<i;j++){ 
            if (A[i]==A[j]) {
                erros++; //contagem de erros tá errada
                while (A[i]==A[j]) {
                    cout << "Invalido! Informe um num que ja nao tenha sido digitado: ";
                    cin >> A[i];
                } 
        }
        }
    }

    cout << "Quantidade de vezes que errou: " << erros << endl;
    cout << "Vetor sem erros: ";
    for (i=0; i<tam; i++){
        cout << A[i] << " ";
    }
    return 0;
}