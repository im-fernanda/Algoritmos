/*
    2. Faça uma função que recebe um número inteiro por parâmetro e retorna 
    verdadeiro se ele for par e falso se for ímpar.
*/

#include <iostream>
using namespace std;

bool verifica (int num);

int main(){
    int num;

    cout << "Infome o numero: ";
    cin >> num;

    if (verifica(num) == true){
        cout << "O numero eh par!";
    } else {
        cout << "O numero eh impar.";
    }

    return 0;
}

bool verifica (int num){
    if (num%2 == 0){
        return true;
    } else {
        return false;
    }
}