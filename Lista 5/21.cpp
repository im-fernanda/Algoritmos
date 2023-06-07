// Elabore um algoritmo que declare duas strings e leia a primeira string. Em seguida, copie o texto da primeira 
// string para a segunda em letras maiúsculas se a primeira letra da primeira string for minúscula ou em letras 
// minúsculas se a primeira letra da primeira string for maiúscula. Imprima no final o conteúdo das duas strings.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    int i;
    char c;

    cout << "Digite a string: ";
    getline(cin, str1);

    //A operação += é um operador de concatenação de strings. Ele concatena o valor resultante da expressão à string str2, adicionando-o ao final da mesma.
    for (i=0; i<str1.size(); i++) {
        c = str1[i]; //recebe a letra atual
        if (str1[0] >= 'a' && str1[0] <= 'z') { //confere se a primeira letra é minuscula

            if (c >= 'a' && c <= 'z') { //vê se a letra atual é minuscula ou maiuscula
                str2 += c - 'a' + 'A'; //se for minuscula, torna-a maiuscula diminuindo 'a' (97-valor base das maiusculas) e adicionando 'A' (65)
            } else {
                str2 += c; //se for maiuscula ou caracter especial, permanece a mesma
            }

        } else {
            //entra se a primeira letra é maisucula
            if (c >= 'A' && c <= 'Z') { //confere se a letra atual é minuscula ou maiuscula
                str2 += c - 'A' + 'a';
            } else {
                str2 += c;
            }
        }
    }

    cout << "String 1: " << str1 << endl;
    cout << "String 2: " << str2 << endl;

    return 0;
}
