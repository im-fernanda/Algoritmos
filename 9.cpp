// Elabore um algoritmo que leia um vetor A de 10 elementos e construa um vetor P formado pelos índices dos 
// elementos pares de A. Exemplo: Se A = [1 3 6 7 8], seus elementos pares estão nos índices 2 e 4 . Assim, P 
// = [2 4]. 
#include <iostream>
using namespace std;

int main (){
    int A[10], P[10], i, j=0;
 
    for (i=0; i<5; i++){
        cout << "Digite o elemento " << i << " do vetor: ";
        cin >> A[i];
        if (i!=0 && i%2 == 0){
            P[j] = i;
            j++;
        }
    }

    for (i=0; i<j; i++){
        cout << P[i] << " ";
    }

    return 0;
}