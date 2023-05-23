// Elabore um algoritmo que leia um vetor de 20 posições de inteiros e verifique se ele é um palíndromo, ou 
// seja, se a sua leitura em qualquer direção é a mesma. Exemplo: O vetor 1 2 3 4 5 6 6 5 4 3 2 1 é um palíndromo, 
// pois se for lido de frente para trás ou de trás para frente terá exatamente os mesmos elementos. 
#include <iostream>
using namespace std;

int main (){
    int A[20], B[20];
    int i, j=0, cont = 0;

    for (i=0; i<4; i++){
        cout << "Informe o elemento " << i << ": ";
        cin >> A[i];
    }

    for (i=3; i>=0; i--){
        B[j] = A[i];
        j++;
    }

    cout << "Vetor A: ";
    for (i=0; i<4; i++){
        cout << A[i] << " ";
        if (B[i] == A[i]) {
            cont++;
    }
    }

    cout << "\n";
    cout << "Vetor B: ";
    for (i=0; i<4; i++){
        cout << B[i] << " ";
    }

    if (cont==4){
        cout << "Eh palindromo.";
    } else {
        cout << "Nao eh palindromo.";
    }
    
    return 0;
}