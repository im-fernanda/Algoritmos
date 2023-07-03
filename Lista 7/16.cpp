/*
        16. Escreva uma função que receba como parâmetros dois vetores de inteiros: x1 e 
    x2 e as suas respectivas quantidades de elementos: n1 e n2. A função deverá retornar 
    um ponteiro para um terceiro vetor, x3, alocado dinamicamente, contendo a união de 
    x1 e x2 e usar o ponteiro qtd para retornar o tamanho de x3. Sendo x1 = {1, 3, 5, 6, 7} e 
    x2 = {1, 3, 4, 6, 8}, x3 irá conter {1, 3, 4, 5, 6, 7, 8}. Assinatura da função: 
    int* uniao(int *x1, int *x2, int n1, int n2, int* qtd); 
*/

#include <iostream>
using namespace std;

int* uniao (int *x1, int *x2, int n1, int n2, int *qtd);

int main() {
    int i;
    int n1, n2, n3; 

    cout << "Informe a quantidade de elementos do vetor 1: ";
    cin >> n1;
    cout << "Informe a quantidade de elementos do vetor 2: ";
    cin >> n2;

    int x1[n1], x2[n2];

    for (i=0; i<n1; i++){
        cout << "Informe o elemento " << i+1 << " de x1: ";
        cin >> x1[i];
    }

    for (i=0; i<n2; i++){
        cout << "Informe o elemento " << i+1 << " de x2: ";
        cin >> x2[i];
    }

    int *x3 = uniao(x1, x2, n1, n2, &n3);
    cout << "x3 = {";
    for (i=0; i<n3; i++) {
        cout << x3[i] << " ";
    }
    cout << "}.";


    return 0;
}

int* uniao (int *x1, int *x2, int n1, int n2, int *qtd){
    int i, j;
    int tam = n1+n2;
    int *x3 = new int[tam];
    bool repetido;

    for (i=0; i<n1; i++){
        x3[i] = x1[i];
        (*qtd)++;
    }

    for (i=0; i<n2; i++) {
        repetido = false;
        for (j=0; j<n1; j++) {
            if (x2[i] == x1[j]) {
                repetido = true;
            }
        }
        if (!repetido) {
            x3[*qtd] = x2[i];
            (*qtd)++;
        }
    }
    return x3;
}

// Na linha int* x3 = uniao(x1, x2, n1, n2, &n3), o ponteiro x3 recebe o valor retornado pela função uniao, que é um endereço de memória apontando para o primeiro elemento do vetor resultante x3.

// A função uniao retorna um ponteiro para o vetor x3, que é alocado dinamicamente dentro da função. Quando atribuímos o valor retornado por uniao a x3, estamos efetivamente copiando o endereço de memória retornado pela função para o ponteiro x3.

// Portanto, após a execução dessa linha, o ponteiro x3 estará apontando para o início do vetor dinamicamente alocado x3, permitindo o acesso e manipulação dos elementos do vetor por meio do ponteiro x3.




