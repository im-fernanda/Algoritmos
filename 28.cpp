// Elabore um algoritmo que solicite ao usuário que digite dez números inteiros aleatórios. Para cada número 
// digitado, insira-o em um vetor V ordenado em ordem decrescente. Ao final escreva o vetor V.
#include <iostream>
using namespace std;

int main (){
    int const tam = 5;
    int V[10], i, j, aux;

    for (i=0; i<tam; i++){
        cout << "Elemento inteiro aleatorio " << i+1 << ": ";
        cin >> V[i];
    }

    for (i=0; i<tam; i++){
        for (j=0; j<tam-i-1; j++)
            if (V[j]<V[j+1]){
                aux = V[j+1];
                V[j+1] = V[j];
                V[j] = aux;
        }
    }

    cout << "Vetor em ordem crescente: ";
    for (i=0; i<tam; i++){
        cout << V[i] << " ";
    }
    return 0;
}