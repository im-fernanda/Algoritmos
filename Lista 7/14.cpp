/*
    14. Escreva uma função que receba uma string e uma letra e retorne um vetor de 
    inteiros contendo as posições (índices no vetor da string) onde a letra foi encontrada e 
    um inteiro contendo o tamanho do vetor criado (total de letras iguais encontradas). 
    Utilize o retorno de um vetor para retornar os índices e um ponteiro para guardar o 
    tamanho do vetor. Elabore um algoritmo que teste a função supracitada.
*/ 
#include <iostream>
#include <string>
using namespace std;

int* letrasEncontradas(string frase, char letra, int *tam, int vetor[]);
int main (){
    char letra;
    string frase;
    int i, tamanho;

    cout << "Digite a frase: ";
    getline(cin, frase);
    cout << "Informe a letra a ser procurada: ";
    cin >> letra;
    getchar();

    int vetor[frase.size()];
    *letrasEncontradas(frase, letra, &tamanho, vetor);
    cout << "\n\tO tamanho do vetor criado (total de letras iguais encontradas) eh " << tamanho << "." << endl;

    cout << "\tA letra foi encontrada nas posicoes: ";
    cout << "[";
    for (i=0; i<tamanho; i++){
        if (i==tamanho-1){
            cout << vetor[i] << "].";
        } else {
            cout << vetor[i] << ",";
        }
    }

    return 0;
}

int* letrasEncontradas(string frase, char letra, int *tam, int vetor[]){
    int i, k=0;
    for (i=0; i<frase.size(); i++){
        if (frase[i] == letra){
            vetor[k] = i;
            k++;
        }
    }
    *tam = k;

    return vetor;
}
