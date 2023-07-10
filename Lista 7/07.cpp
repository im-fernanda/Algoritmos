/*
7. Escreva uma função chamada Troca que troque os valores dos parâmetros 
recebidos. Essa função não deve ter retorno. 
*/
#include <iostream>
using namespace std;

void Troca (int *n1, int *n2);

int main (){
    int n1, n2;
    
    cout << "\n\tDigite o primeiro valor: ";
    cin >> n1;
    cout << "\n\tDigite o segundo valor: ";
    cin >> n2;
    cout << "\n\tValores originais: " << n1 << " e " << n2;
    
    Troca(&n1, &n2);

    cout << "\n\tValores trocados: " << n1 << " e " << n2;


    return 0;
}

void Troca (int *n1, int *n2){
    int aux;

    aux = *n1;
    *n1 = *n2;
    *n2 = aux;

}
