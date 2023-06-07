// Elabore um algoritmo que receba um nome completo em uma string e apresente apenas o último nome e o 
// 1º nome na seguinte forma: último nome, 1º nome. 
// Entrada: Ana Fernandes Oliveira 
// Saída: Oliveira, Ana 
#include<iostream>
#include <string>
using namespace std;
int main(){
    int i;
    string nomeCompleto, primeiroNome, ultimoNome;
    bool encontrouPrimeiroNome=false;

    cout << "Digite seu nome completo: ";
    getline(cin, nomeCompleto);

    for (i=0; i<nomeCompleto.length(); i++){
        if (nomeCompleto[i] != ' ' && !encontrouPrimeiroNome){
            primeiroNome += nomeCompleto[i];
        } else {
            encontrouPrimeiroNome = true;
        }

        if (nomeCompleto[i] == ' '){
            ultimoNome = ""; //sempre que encontra um espaço, ele redefine a variável para uma string vazia
        } else {
            ultimoNome += nomeCompleto[i];
        }
    }

    if (encontrouPrimeiroNome) {
        cout << ultimoNome << ", " << primeiroNome << endl;
    } else {
        cout << "Nome invalido." << endl;
    }

    return 0;
}