// Elabore um algoritmo que declare dois vetores A e B de 10 elementos de inteiros, leia os seus elementos e 
// intercale os dois vetores A e B formando o vetor C (de 20 elementos).
#include <iostream>
using namespace std;

int main() {
    int A[10], B[10], C[20];
    int i, indexC = 0;
    
    cout << "Informe os elementos do vetor A:" << endl;
    for (i=0; i<4; i++) {
        cout << "Elemento " << i+1 << ": ";
        cin >> A[i];
    }
    
    cout << "Informe os elementos do vetor B:" << endl;
    for (i=0; i<4; i++) {
        cout << "Elemento " << i+1 << ": ";
        cin >> B[i];
    }
    
    for (i=0; i<4; i++) {
        C[indexC] = A[i]; // Adiciona elemento de A em C
        indexC++;
        C[indexC] = B[i]; // Adiciona elemento de B em C
        indexC++;
    }
    
    // Exibição do vetor C
    cout << "Vetor C (intercalado):" << endl;
    for (i=0; i<8; i++) {
        cout << C[i] << " ";
    }
    cout << endl;
    
    return 0;
}