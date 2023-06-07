// Elabore um algoritmo que leia um vetor A de 20 posições. Em seguida, trocar o primeiro elemento com o 
// último, o segundo com o penúltimo, o terceiro com o antepenúltimo, e assim sucessivamente. Ao final, 
// escreva o vetor A modificado.
#include <iostream>
using namespace std;

int main (){
    int const tam = 5;
    int A[20], B[20], i;

    for (i=0; i<tam; i++){
        cout << "Digite o elemento " << i << " do vetor: ";
        cin >> A[i];
        B[i] = A[i];
    }

    for (i=0; i<tam; i++){
            A[i] = B[4-i];
    }

    cout << "Vetor A modificado: ";
    for (i=0; i<tam; i++){
        cout << A[i] << " ";
    }

    return 0;
}