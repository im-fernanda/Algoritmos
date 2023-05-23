// Elabore um algoritmo que preencha automaticamente um vetor de 20 posições de inteiros gerando os 
// elementos a partir da multiplicação do seu índice por 2. Em seguida, calcule e escreva a soma dos elementos 
// pares e impares.
#include <iostream>
using namespace std;

int main (){
    int const tam = 4;
    int A[20];
    int i, somaP = 0, somaI = 0;

    for (i=0; i<tam; i++){
        A[i] = i*2;
                
        if (A[i]%2 == 0) {
            somaP += i;
        } else {
            somaI += i;
        }
    }

    cout << "Vetor: ";
    for (i=0; i<tam; i++){
        cout << A[i] << " ";
    }
    cout << "\n";
    cout << "Soma dos elementos pares: " << somaP << endl;
    cout << "Soma dos elementos impares: " << somaI << endl;

    return 0;
}