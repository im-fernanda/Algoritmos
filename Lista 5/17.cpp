// Elabore um algoritmo que leia uma frase e escreva uma tabela que mostre, para cada letra, o número de 
// vezes que a mesma aparece na frase
#include<iostream>
using namespace std;
int main(){
    int i, contagem[26] = {0}; //26 letras do alfabeto
    string frase;
    char c, letra;

    cout << "Digite uma frase: ";
    getline(cin, frase);

    for (i=0; i<frase.length(); i++) {
        c = frase[i];
        if ( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ) {
            if (c >= 'a' && c <= 'z') {
                contagem[c - 'a']++;
            }
            else {
                contagem[c - 'A']++;
            }
        }
    }
    //O vetor contagem armazena a quantidade que a letra aparece na posiçao dela no alfabeto
    cout << "\nTabela de contagem das letras:\n";
    for (i=0; i<26; i++) {
        if (contagem[i] > 0) {
            letra = 'a' + i;
            cout << letra << " - " << contagem[i] << " ocorrencia(s)\n";
        }
    }

    return 0;
}