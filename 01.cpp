// Elabore um algoritmo que leia 20 elementos de um vetor de inteiros e, em seguida, um valor de código. Se o 
// código for 1, mostrar o vetor na ordem direta (do primeiro até o último), se o código for 2, mostrar o vetor 
// na ordem inversa (do último até o primeiro).
#include <iostream>
using namespace std;

int main (){
    int const tam = 4;
    int A[20];
    int i, codigo;

    cout << "Informe os elementos do vetor A: ";
    for (i=0; i<tam; i++){
        cin >> A[i];
    }

    cout << "Informe o codigo: \n";
    cin >> codigo;

    if (codigo == 1){
        for (i=0; i<tam; i++){
            cout << A[i] << " ";
        } 
    } else if (codigo == 2) {
        for (i=3; i>=0; i--){
            cout << A[i] << " ";
    }
    }

    

    

    return 0;
}
