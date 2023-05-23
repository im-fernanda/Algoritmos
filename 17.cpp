// Elabore um algoritmo que leia um vetor ORIGINAL de 20 posições de inteiro, verifique e informe se os seus 
// elementos estão em ordem crescente, ordem decrescente ou ordem aleatória.
#include <iostream>
using namespace std;

int main (){
    int original[20], i;
    bool crescente = true, decrescente = true;

    for (i=0; i<4; i++){
        cout << "Informe o elemento " << i+1 << ": ";
        cin >> original[i];
    }

    for (i=1; i<4; i++) {
        if (original[i] < original[i-1]) {
            crescente = false;
        }
    }
    for (i=1; i<4; i++) {
        if (original[i] > original[i-1]) {
            decrescente = false;
        }
    }
    if (crescente) {
        cout << "Os elementos estao em ordem crescente." << endl;
    } else if (decrescente) {
        cout << "Os elementos estao em ordem decrescente." << endl;
    } else {
        cout << "Os elementos estao em ordem aleatoria." << endl;
    }

    return 0;
}