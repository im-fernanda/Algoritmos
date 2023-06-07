// Elabore um algoritmo que leia duas strings A e B e junte-as em uma única string C.
#include<iostream>
using namespace std;
int main(){
    string frase1, frase2, juncao;

    cout << "Digite a primeira frase: ";
    getline(cin, frase1);
    cout << "Digite a segunda frase: ";
    getline(cin, frase2);

    juncao = frase1 + ' ' + frase2;
    
    cout << "Frases combinadas: ";
    cout << juncao;
    return 0;
}