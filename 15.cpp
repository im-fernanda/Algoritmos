// Elabore um algoritmo que leia dois vetores de mesmo tamanho M e N, sendo M contendo as matrículas dos 
// alunos (inteiros) e N suas respectivas notas (o tamanho deve ser digitado pelo usuário). Calcule a média de 
// todas as notas de N. Escreva primeiramente o conjunto das notas maiores do que a média calculada. Em 
// seguida, escreva as matrículas dos alunos cujas notas foram menores do que a média.
#include <iostream>
using namespace std;

int main (){
    int i, j = 0, somaMedias = 0, media = 0, cont = 0, tamanho;

    cout << "Informe o tamanho dos vetores: ";
    cin >> tamanho;

    int M[tamanho];
    float N[tamanho];
    int maiores[tamanho], menores[tamanho];

    for (i=0; i<tamanho; i++){
        cout << "Digite a matricula " << i+1 << ": ";
        cin >> M[i];
    }

    for (i=0; i<tamanho; i++){
        cout << "Informe a nota do aluno " << i+1 << ": ";
        cin >> N[i];
        somaMedias += N[i];
    }

    media = somaMedias/tamanho;
    cout << "Media: " << media << endl;
    for (i=0; i<tamanho; i++){
        if (N[i] > media){
            maiores[j] = N[i];
            j++;
        }
        if (media > N[i]){
            menores[cont] = M[i];
            cont++;
        }
    }
    cout << "Notas maiores que a media: ";
    for (i=0; i<j; i++){
        cout << maiores[i] << " "; 
    }

    cout << "\n";
    cout << "Alunos com nota menor do que a media: ";
    for (i=0; i<cont; i++){
        cout << menores[i] << " "; 
    }


    return 0;
}