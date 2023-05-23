// Elabore um algoritmo que leia dois vetores de mesmo tamanho M e N, sendo M contendo as matrículas dos 
// alunos (inteiros) e N suas respectivas notas (o tamanho deve ser digitado pelo usuário). Calcule a média de 
// todas as notas de N. Escreva primeiramente o conjunto das notas maiores do que a média calculada. Em 
// seguida, escreva as matrículas dos alunos cujas notas foram menores do que a média.
#include <iostream>
using namespace std;

int main (){
    int S[100], R[100];
    int i, j, reajuste;
    bool continuar = true;

    while (i<4 && continuar == true) {
        cout << "Informe o salario do funcionario " << i+1 << ": ";
        cin >> S[i];
        
        if (S[i] == -1) {
            continuar = false;
        }
        i++;
    }

    cout << "\n";
    cout << "Informe o valor do reajuste: ";
    cin >> reajuste;

    cout << "Salarios reajustados: ";
    for (j=0; j<i; j++){
        if (S[j]!= -1) {
            R[j] = S[j] + reajuste;
            cout << R[j] << " ";
        }
    }

    return 0;
}