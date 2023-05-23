// Elabore um algoritmo que: 
// Solicite um número inteiro N ao usuário. 
// Declare um vetor V com N elementos inteiros. 
// Gere os elementos do vetor de tal forma que o primeiro seja N e os próximos sejam sempre iguais ao dobro 
// do anterior. 
// Solicite um número inteiro X ao usuário e busque este elemento no vetor. Caso exista, troque X pelo menor 
// elemento existente no vetor e o menor elemento por X. Caso não exista, informe ao usuário. Mostre o vetor 
// antes e depois da mudança. 
#include <iostream>
using namespace std;

int main (){
    int N, num, menor = 0;
    int i, localizacao, aux;
    bool localizado = false;


    cout << "Informe um numero inteiro N: ";
    cin >> N;
    int A[N];
    A[0] = N;
    menor = N;
    for (i=1; i<N; i++){
       A[i] = A[i-1]*2;

        if (A[i]<menor){
            menor = A[i];
            localizacao = i;
        }
    }
    cout << "Informe um numero inteiro para ser buscado: ";
    cin >> num;

    cout << "Vetor antes: ";
    for (i=0; i<N; i++){
        cout << A[i] << " ";
        if (num == A[i]){
            localizado = true;
    }
    }

    cout << "\n";
    if (localizado == true) {
        aux = menor;
        A[localizacao] = num;
        num = aux;
    } else {
        cout << "Numero nao localizado" << endl;;
    }

    cout << "Vetor depois: ";
    for (i=0; i<N; i++){
        cout << A[i] << " ";
    }
    cout << "\n";
    cout << "Num substituido: " << num << endl;
    return 0;
}