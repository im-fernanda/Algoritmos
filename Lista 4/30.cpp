// Elabore um algoritmo que leia dez conjuntos de dois valores, o primeiro representando a idade do aluno e o 
// segundo representando a sua altura em metros, e armazene-os em dois vetores (Idade e Altura). Verifique 
// e escreva a idade do aluno mais alto, a idade do aluno mais baixo e a média das alturas dos alunos maiores 
// de idade.
#include <iostream>
using namespace std;

int main (){
    int const tam = 4;
    int i;
    int idades[10], idMaisAlto = 0, idMaisBaixo = 0;
    float alturas[10], maisBaixo, maisAlto, mediaMaioresId = 0;

    for (i=0; i<tam; i++){
        cout << "Informe a idade do aluno " << i+1 << ": ";
        cin >> idades[i];

        if (idades[i]<=0) {
            while (idades[i]<=0) {
                cout << "Informe uma idade valida: ";
                cin >> idades[i];
                } 
        }
    }
    for (i=0; i<tam; i++){
        cout << "Informe a altura do aluno " << i+1 << " em metros: ";
        cin >> alturas[i];

        if (alturas[i]<=0) {
            while (alturas[i]<=0) {
                cout << "Informe uma idade valida: ";
                cin >> alturas[i];
                } 
        }
    }

    maisAlto = alturas[0];
    maisBaixo = alturas[0];
    for (i=0; i<tam; i++){
        if (alturas[i]>maisAlto){
            idMaisAlto = idades[i];
        }
        if (alturas[i]<maisBaixo){
            idMaisBaixo = idades[i];
        }
        if (idades[i]>=18){
            mediaMaioresId += alturas[i];
        }
    }

    cout << "Idade do aluno mais alto: " << idMaisAlto << endl;
    cout << "Idade do aluno mais baixo: " << idMaisBaixo << endl;    
    cout << "Media das alturas dos alunos maiores de idade: " << mediaMaioresId << endl;

    return 0;
}