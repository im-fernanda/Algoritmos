// Elabore um algoritmo que leia um vetor de 15 posições de números inteiros e pergunte ao usuário quais 
// elementos ele deseja ver: se os elementos que estão em índices pares ou se os elementos que estão em 
// índices ímpares. Mostre somente os elementos solicitados.
#include <iostream>
using namespace std;

int main (){
    int const tam = 4;
    int A[15], i;
    char resposta;

    for (i=0; i<tam; i++){
        cout << "Digite o elemento " << i << " do vetor: ";
        cin >> A[i];
    }
    cout << "Quais elementos vc deseja ver? (p para indices pares e i para indices impares): ";
    cin >> resposta;

    if (resposta == 'p'){
        cout << "Elementos em indices pares: ";
        for (i=0; i<tam; i++){
            if (i % 2 == 0){
                cout << A[i] << " ";
        }
        }
    } else if (resposta == 'i'){
        cout << "Elementos em indices impares: ";
        for (i=0; i<tam; i++){
            if (i % 2 != 0){
                cout << A[i] << " ";
        }
        }
    } else {
        cout << "Resposta invalida!";
    }
    return 0;
}