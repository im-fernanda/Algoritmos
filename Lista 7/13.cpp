/*
    13. Escreva uma função mm que receba um vetor inteiro v[0..n-1] e os endereços de 
    duas variáveis inteiras, min e max, e deposite nessas variáveis o valor do menor 
    elemento (mínimo) e do maior elemento (máximo) do vetor. Elabore um algoritmo que 
    teste a função mm. 
*/
#include <iostream>
using namespace std;

void mm (int vetor[], int tam, int* ponteiro_min, int* ponteiro_max);

int main() {
    int tam, min, max, i;

    cout << "Informe N (o tamanho do vetor): ";
    cin >> tam;

    int V[tam];

    for (i=0; i<tam; i++){
        cout << "Informe o elemento " << i+1 << ": ";
        cin >> V[i];
    }

    mm(V, tam, &min, &max);
    cout << "O menor valor eh: " << min << endl;
    cout << "O maior valor eh: " << max;
    
    return 0;
}


void mm(int vetor[], int tam, int* ponteiro_min, int* ponteiro_max){
  int i;

  *ponteiro_min = vetor[0];
  *ponteiro_max = vetor[0];

  for (i = 0; i < tam; i++){
      if (vetor[i] > *ponteiro_max){
        *ponteiro_max = vetor[i];
      }
    if (vetor[i] < *ponteiro_min){
      *ponteiro_min = vetor[i];
    }
  }

}
