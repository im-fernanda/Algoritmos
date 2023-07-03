/*
  6. Elaborar um algoritmo que leia um vetor de 10 posições de inteiros e chame uma 
  função MinMax. Esta função deve receber o vetor lido e, por referência, duas variáveis 
  inteiras, min e max. O objetivo da função é buscar os valores do menor e maior 
  elementos do vetor e atribuir às variáveis min e max respectivamente.
*/
#include <iostream>
using namespace std;

void minMax(int &min, int &max, int *vetor, int tam);

int main() {
  const int tam = 3;
  int V[tam];
  int i, menor, maior;

  for (i=0; i<tam; i++){
    cout << "Informe o elemento " << i+1 << ": ";
    cin >> V[i];
  }
  maior = V[0];

  minMax(menor, maior, V, tam);

  cout << "O maior valor é: " << maior << endl;
  cout << "O menor valor é: " << menor;
 
  return 0;
}

void minMax(int &min, int &max, int *vetor, int tam){
  int i;

  max = vetor[0];
  min = vetor[0];
  for (i = 0; i < tam; i++){
      if (vetor[i] > max){
        max = vetor[i];
      }
    if (vetor[i] < min){
      min = vetor[i];
    }
  }

}
