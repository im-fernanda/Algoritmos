/*
    1. Numa disciplina são dadas duas provas e dois trabalhos, mas a média é calculada 
    considerando-se apenas a maior nota de prova e a maior nota de trabalho. Elabore um 
    algoritmo que, dadas as quatro notas de um aluno, informe a sua média. Para isso, utilize 
    duas funções: uma que determine o maior valor entre as notas (de provas ou de 
    trabalhos) e outra que calcule a média aritmética das duas maiores notas. 
*/

#include <iostream>
using namespace std;

void maiorNota(float prova1, float prova2, float trabalho1, float trabalho2, float& maiorNotaProva, float& maiorNotaTrabalho);

float mediaAritmetica (float& nota1, float& nota2);

int main(){
    float prova1, prova2, trabalho1, trabalho2;
    float maiorNotaProva, maiorNotaTrabalho, media;

    cout << "Digite a nota da prova 1: ";
    cin >> prova1;
    cout << "Digite a nota da prova 2: ";
    cin >> prova2;

    cout << "Digite a nota do trabalho 1: ";
    cin >> trabalho1;
     cout << "Digite a nota do trabalho 2: ";
    cin >> trabalho2;   
    cout << endl;
    
    maiorNota(prova1, prova2, trabalho1, trabalho2, maiorNotaProva, maiorNotaTrabalho);

    cout << "Maior nota nas provas: " << maiorNotaProva << endl;
    cout << "Maior nota nos trabalhos: " << maiorNotaTrabalho << endl;

    media = mediaAritmetica(maiorNotaProva, maiorNotaTrabalho);
    cout << "Media do aluno: " << media;

    return 0;
}


void maiorNota(float prova1, float prova2, float trabalho1, float trabalho2, float& maiorNotaProva, float& maiorNotaTrabalho){

    if (prova1 > prova2){
        maiorNotaProva = prova1;
    } else {
        maiorNotaProva = prova2;            
    }

    if (trabalho1 > trabalho2){
        maiorNotaTrabalho = trabalho1;
    } else {
        maiorNotaTrabalho = trabalho2;            
    }

}

float mediaAritmetica (float& nota1, float& nota2){
    float media;
    media = (nota1 + nota2)/2;

    return media;
}