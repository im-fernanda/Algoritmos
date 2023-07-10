/*
    17. Escreva um programa que leia 10 números inteiros, armazene-os em um vetor e 
    os escreva na ordem contrária à de leitura. Obs: todos os acessos ao vetor devem ser 
    feitos usando somente ponteiros, sem usar os índices.
*/
#include <iostream>
using namespace std;

int main() {
    const int tam = 4;
    int numeros[tam];
    //const int tamanho = sizeof(nums) / sizeof(nums[0]);
    int i;
    int *ponteiro = numeros + tam - 1;  // Inicializa o ponteiro apontando para o último elemento do vetor

    cout << "Informe os " << tam << " elementos: ";
    for (i=0; i<tam; i++) {
        cin >> *(numeros + i);  // Acesso ao vetor usando ponteiro
    }

    cout << "Numeros na ordem contraria a de leitura:" << endl;
    for (i=0; i<tam; i++) {
        cout << *(ponteiro - i) << endl; 
    }

return 0;
}
