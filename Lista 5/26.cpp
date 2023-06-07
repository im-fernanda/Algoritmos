// Elabore um algoritmo que leia uma string e a escreva sem as suas vogais
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    int i;
    char c;

    cout << "Digite a string: ";
    getline(cin, str1);
    cout << "String original: " << str1 << endl;

    for (i=0; i<str1.size(); i++) {
        c = str1[i]; 

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
            str2 += "";
        } else {
            str2 += str1[i];
        }
    }

    cout << "String sem as vogais: " << str2;

    return 0;
}