/*
    10. Em seguida, utilizando o algoritmo anterior implemente outra função chamada 
    multiplicaEscalar, que recebe como parâmetro dois vetores V1 e V2 (ambos de tamanho 
    N), e um número inteiro X. A função deve multiplicar cada um dos elementos de V1 por 
    X e armazenar os resultados em V2. A função deve possui a seguinte assinatura: void 
    multiplica_escalar(int *v1, int *v2, int x, int n); 
    No main, utilize as funções inverteVetor e multiplicaEscalar para inverter um vetor de 
    tamanho 10 fornecido pelo usuário e em seguida multiplicar esse vetor por um escalar 
    também fornecido pelo usuário. Por último, o programa deverá exibir o vetor resultante.
*/
#include <iostream>
using namespace std;

int inverteVetor(int *v1, int *v2, int n);
void multiplicaEscalar(int *v1, int *v2, int x, int n);

int main (){
    int n = 4; // n=10
    int i, maior, x;

    int v1[n], v2[n];
    for (i=0; i<n; i++){
        cout << "Informe o elemento " << i+1 << ": ";
        cin >> v1[i];
    }

    cout << "V1: ";
    for (i=0; i<n; i++){
        cout << v1[i] << " ";
    }
    
    cout << endl;
    maior = inverteVetor(v1, v2, n);
    cout << "O maior valor eh: " << maior << endl;

    cout << "V2: ";
    for (i=0; i<n; i++){
        cout << v2[i] << " ";
    }

    cout << endl;
    cout << "Informe um numero inteiro X: ";
    cin >> x;

    multiplicaEscalar(v1, v2, x, n);
    cout << "V1 multiplicado por X: ";
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

void multiplicaEscalar(int *v1, int *v2, int x, int n){
    int i;

    for (i=0; i<n; i++){
        v2[i] = x*v2[i];
    }
}