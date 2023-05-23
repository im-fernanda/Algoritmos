// Elabore um algoritmo que leia um vetor V de 10 posições de inteiros, não permitindo que sejam digitados 
// números negativos. Em seguida, leia um número inteiro qualquer e verifique se o número existe no vetor. Se 
// existir, informe o seu índice. Se não existir, informe a mensagem “Número não localizado!”.

#include <iostream>
using namespace std;

int main (){
    int const tam = 4;
    int A[10];
    int i, num, localizacao;
    bool localizado = false;

    for (i=0; i<tam; i++){
        cout << "Informe o elemento " << i << ": ";
        cin >> A[i];
        
        if (A[i]<0) {
            while (A[i] < 0) {
                cout << "Invalido! Informe um num positivo: ";
                cin >> A[i];
            } 
        }
    }

    cout << "Vetor: ";
    for (i=0; i<tam; i++){
        cout << A[i] << " ";
    }

    cout << "\n";
    cout << "Informe um numero inteiro: ";
    cin >> num;

    for (i=0; i<tam; i++){
        if (num == A[i]){
            localizado = true;
            localizacao = i;
        }
    }

    if (localizado == true) {
        cout << "O numero esta no indice " << localizacao << endl;
    }

    return 0;
}