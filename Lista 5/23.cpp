// Elabore um algoritmo que leia duas strings e informe se são iguais ou diferentes. Obs: Não utilize a função de 
// comparação de strings.
#include<iostream>
#include <string>
using namespace std;
int main() {
    int i, cont=0;
    string str1, str2;
    char c;

    cout << "Digite a primeira string: ";
    getline(cin, str1);
    cout << "Digite a segunda string: ";
    getline(cin, str2);
    
    if (str1.size() != str2.size()){
        cout << "As strings sao diferentes. ";
    } 
    else {
        for (i=0; i<str1.size(); i++) {
            c = str1[i];
            if (c == str2[i]){
                cont++;
            }
        }
        if (cont == str1.size()){
            cout << "As strings sao iguais.";
        } else {
            cout << "As strings sao diferentes. ";
        }
    }
     return 0;
}