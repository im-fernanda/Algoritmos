// Um armazém trabalha com 10 mercadorias diferentes identificadas pelos números inteiros de 0 à 9. Escreva 
// um algoritmo que leia a quantidade vendida de cada mercadoria no final do mês (armazenando-os em um 
// vetor Q) e o preço unitário de cada uma (armazenando-os em um vetor P). Em seguida calcule e escreva o 
// faturamento mensal do armazém.
#include <iostream>
using namespace std;

int main (){
    int const qnt=4;
    int Q[10];
    float P[10], Valor[10];
    int i, faturamento=0; //é 10


    for (i=0; i<qnt; i++){
        cout << "Informe a quantidade vendida da mercadoria " << i << ": ";
        cin >> Q[i];

        cout << "Informe o preço da mercadoria " << i << ": ";
        cin >> P[i];

        Valor[i] = Q[i]*P[i];
    }

    for (i=0; i<qnt; i++){
        faturamento += Valor[i];
    }
    cout << "O faturamento mensal foi de R$" << faturamento << endl;

    return 0;
}