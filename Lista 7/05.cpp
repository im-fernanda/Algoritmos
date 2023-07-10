/*  5. Elaborar o algoritmo da calculadora utilizando funções. Implementar as seguintes
    opções: soma, subtração, multiplicação e divisão.
*/ 
#include <iostream>
using namespace std;

float calculadora(float num, char operacao, float resul);

int main (){
    float num, resul=0;
    char operacao;

    cout << "Informe o numero: ";
    cin >> num;
    resul = num;

    do {
        do {
            cout << "Informe a operacao: ";
            cin >> operacao;
        } while (operacao!='+' && operacao!='-' && operacao!='*' && operacao!='/' && operacao!='='); 

        if (operacao!='='){
            cout << "Informe o numero: ";
            cin >> num;
            resul = calculadora(num, operacao, resul);
        } 

        cout << "O resultado eh: " << resul<< endl;
    } while (operacao!='=');

    return 0;
}

float calculadora(float num, char operacao, float resul){
    if (operacao=='+'){
        return resul+=num;
    } else if (operacao=='-'){
        return resul-=num;
    } else if (operacao=='*'){
        return resul*=num;
    } else if (operacao=='/'){
        return resul/=num;
    }
}