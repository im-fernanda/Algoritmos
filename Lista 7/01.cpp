/*
    1. Numa disciplina são dadas duas provas e dois trabalhos, mas a média é calculada 
    considerando-se apenas a maior nota de prova e a maior nota de trabalho. Elabore um 
    algoritmo que, dadas as quatro notas de um aluno, informe a sua média. Para isso, utilize 
    duas funções: uma que determine o maior valor entre as notas (de provas ou de 
    trabalhos) e outra que calcule a média aritmética das duas maiores notas. 
*/

#include <iostream>
using namespace std;


float maiorNota(float prova, float trabalho);
float calculaMedia (float nota1, float nota2, float media);

int main(){
    float provas[2], trabalhos[2];
    float maiores[2], media=0;
    int i;
 
    for (i=0; i<2; i++){
        cout << "Nota da prova " << i+1 << ": ";
        cin >> provas[i];
        cout << "Nota do trabalho " << i+1 << ": ";
        cin >> trabalhos[i];
    }

    maiores[0] = maiorNota(provas[0], provas[1]);
    maiores[1] = maiorNota(trabalhos[0], trabalhos[1]);

    media = calculaMedia(maiores[0], maiores[1], media);

    cout << "Maior nota nas provas: " << maiores[0] << endl;
    cout << "Maior nota nos trabalhos: " << maiores[1] << endl;
    cout << "Media aritmetica: " << media;
    return 0;
}

float maiorNota(float nota1, float nota2){
    if (nota1>nota2){
        return nota1;
    } else {
        return nota2;
    };
}

float calculaMedia (float nota1, float nota2, float media){
    media = (nota1+nota2)/2;
    return media;
}
