// Elabore um algoritmo que leia um vetor A de 20 posições. Em seguida, trocar (armazenando em um novo 
// vetor B) o primeiro elemento com o último, o segundo com o penúltimo, o terceiro com o antepenúltimo, e 
// assim sucessivamente. Ao final, escreva os vetores A e B.
#include <iostream>
using namespace std;

int main (){
    int A[20], B[20], i;

    for (i=0; i<5; i++){
        cout << "Digite o elemento " << i << " do vetor: ";
        cin >> A[i];
    }

    for (i=0; i<5; i++){
            B[i] = A[4-i];
    }

    cout << "Vetor A: ";
    for (i=0; i<5; i++){
        cout << A[i] << " ";
    }
    cout << "\n";
    cout << "Vetor B: ";
    for (i=0; i<5; i++){
            cout << B[i] << " ";
        }


    return 0;
}