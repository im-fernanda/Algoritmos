// Elabore um algoritmo que leia um vetor de 6 elementos inteiros representando o conjunto de números 
// sorteados na mega sena. Leia, a seguir, para cada um dos N apostadores, um vetor contendo os 6 números 
// da sua aposta. Verifique para cada apostador o seu número total de acertos na mega sena (para cada número 
// correto, o apostador ganha 1 acerto) e escrever se ele “não ganhou”, “ganhou a quadra”, “ganhou a quina”
// ou “ganhou a mega”. O algoritmo deverá finalizar quando o usuário desejar.
#include <iostream>
using namespace std;

int main (){
    int mega[6], aposta[6];
    int acertos = 0, i, j;
    bool continuar = true;
    char resposta;

    for (i=0; i<6; i++){
        cout << "Informe os numeros da mega: " ;
        cin >> mega[i];
    }

    while (continuar == true) {
        for (i=0; i<6; i++){
            cout << "Informe a sua aposta: " ;
            cin >> aposta[i];
        }

        for (i=0; i<6; i++){
            for (j=0; j<6; j++){
                if (aposta[i] == mega[j]){
                acertos++;
                };
            }       
        }

        if (acertos == 6){
            cout << "GANHOU A MEGA!!!!" << endl;
        } else if (acertos == 5){
            cout << "Ganhou a quina!" << endl;
        } else if (acertos == 4){
            cout << "Ganhou a quarta!" << endl;
        } else {
            cout << "Nao ganhou =/" << endl;
        }

        cout << "Deseja continuar? (s para sim ou n para nao): ";
        cin >> resposta;
        if (resposta == 'n') {
            continuar = false;
        }
    }

    return 0;
}