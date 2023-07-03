/*
    9. Crie um algoritmo para manipular vetores. O seu programa deve implementar 
    uma função chamada inverteVetor, que recebe como parâmetro dois vetores V1 e V2, 
    ambos de tamanho N. A função deve copiar os elementos de V1 para V2 na ordem 
    inversa. Ou seja, se a função receber V1 = {1,2,3,4,5}, a função deve copiar os elementos 
    para V2 na seguinte ordem: V2 = {5,4,3,2,1}. Além disso, a função também deve retornar 
    o maior valor encontrado em V1. A função deve possuir a seguinte assinatura: int 
    inverteVetor(int *v1, int *v2, int n); Elabore um teste da função no main.
*/
#include <iostream>
using namespace std;

int inverteVetor(int *v1, int *v2, int n);

int main (){
    int n, i, maior;

    cout << "Informe N (o tamanho do vetor): ";
    cin >> n;

    int v1[n], v2[n];
    for (i=0; i<n; i++){
        cout << "Informe o elemento " << i+1 << ": ";
        cin >> v1[i];
    }

    maior = inverteVetor(v1, v2, n);
    cout << "O maior valor eh: " << maior << endl;

    cout << "V2: ";
    for (i=0; i<n; i++){
        cout << v2[i] << " ";
    }

    return 0;
}

int inverteVetor(int *v1, int *v2, int n){
    int i, j=0, maior;

    maior = v1[0];
    for (i = n-1; i >= 0; i--){
        v2[j] = v1[i];
        j++;
        if (v1[i] > maior){
        maior = v1[i];
        }
    }

    return maior;
}