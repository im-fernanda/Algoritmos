// Elabore um algoritmo que leia um vetor X de até 10 elementos. A leitura deverá ser executada até que o vetor 
// fique totalmente preenchido ou seja informado um valor negativo ou zero. Em seguida leia 2 valores de 
// índices representando um intervalo fechado no vetor (índice inicial e índice final). Finalmente o algoritmo 
// deverá escrever todos os elementos do vetor naquele intervalo, o maior elemento, o menor elemento e a 
// média dos elementos.
#include <iostream>
using namespace std;

int main (){
    int A[10], qnt=4;
    int i=0, elemento, inicio, final;
    int maior = 0, menor = 0, media = 0;

    do {
        cout << "Informe o elemento " << i+1 << " (ou um valor negativo/zero para encerrar): ";
        cin >> elemento;

        if (elemento > 0) {
            A[i] = elemento;
            i++;
        }
    } while (i<qnt && elemento>0);

    cout << "Digite o indice inicial: ";
    cin >> inicio;

    cout << "Digite o indice final: ";
    cin >> final;

    menor = A[inicio];
    maior = A[inicio];

    cout << "Elementos de A no intervalo " << inicio << "-" << final << ": ";
    for (i=inicio; i<=final; i++){
        cout << A[i] << " ";
        media += A[i];
        if (A[i]<menor){
            menor = A[i];
        }
        if (A[i]>maior){
            maior = A[i];
        }
    }
    cout << "\n";

    cout << "Maior elemento: " << maior << endl;
    cout << "Menor elemento: " << menor << endl;
    cout << "Media: " << media << endl;    


    return 0;
}