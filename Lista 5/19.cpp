// Elabore um algoritmo que leia uma string qualquer e escreva-a espelhada. 
#include<iostream>
using namespace std;
int main(){
    int i, tam;
    string frase;

    cout << "Digite uma frase: ";
    getline(cin, frase);

    tam = frase.length();
    cout << "Frase espelhada: ";
    for (i=tam; i>=0; i--){
        cout << frase[i];
    }

    return 0;
}