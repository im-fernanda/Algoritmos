// Elabore um algoritmo que leia uma frase em uma string e uma palavra em outra string, verifique e escreva se 
// a palavra está contida na frase. 
// Entradas: “esta é a frase” e “frase” 
// Saída: a palavra “frase” está contida na frase “esta é a frase”.
#include<iostream>
using namespace std;
int main(){
    int i;
    string frase, palavra, pedaco;
    bool encontrada = false;

    cout << "Digite uma frase: ";
    getline(cin, frase);
    // getchar();

    cout << "\nDigite uma palavra: ";
    getline(cin,palavra);

    for(i=0; i<=(frase.length()-palavra.length()); i++){
        pedaco = frase.substr(i, palavra.length());
        if(pedaco==palavra){
            encontrada = true; //flag de marcação
        }
    }

    if(encontrada){
        cout << "\n\tA palavra foi encontrada";
    } else{
        cout << "\n\tA palavra nao foi encontrada";
    }

    return 0;
}