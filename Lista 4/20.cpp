// Elabore um algoritmo que leia dois vetores de inteiros X e Y, cada um com 5 elementos (não permita 
// elementos repetidos dentro de um mesmo vetor). Em seguida calcule e escreva os seguintes vetores 
// resultantes:
// a. Soma: soma dos elementos de X e Y de mesmo índice;
// b. Distância: distância entre os elementos de X e Y de mesmo índice;
#include <iostream>
using namespace std;

int main() {
    int x[5], y[5], elemento, i=0, tamanho=0;
    int soma[5], distancia[5];
    bool repetido = false;
    
    while (tamanho<4){
        cout << "Informe o elemento "<< i+1 << " do vetor X:" << endl;
        cin >> elemento;
        i++;

        for (i=0; i<tamanho; i++) {
            if (x[i] == elemento){
                repetido = true;
            }
        }

        if (repetido) {
            do {   
                cout << "Elemento repetido. Digite outro elemento: " << endl;
                cin >> elemento;
                for (i=0; i<tamanho; i++) {
                    if (x[i] == elemento){
                    repetido = true;
                    } else {
                        repetido = false;
                        tamanho++;
                    }
                }
            } while (repetido == true);

        } else {
            x[tamanho] = elemento;
            tamanho++;
        }
 
    }
    
    tamanho = 0;
    
//     while (tamanho<4){
//         cout << "Informe o elemento "<< i+1 << " do vetor Y:" << endl;
//         cin >> elemento;

//         for (i=0; i<tamanho; i++) {
//             if (y[i] == elemento){
//                 repetido = true;
//             }
//         }

//         if (repetido) {
//             cout << "Elemento repetido. Digite outro elemento." << endl;
//             cin >> elemento;
//         } else {
//             y[tamanho] = elemento;
//             tamanho++;
//         }

//     }


//     for (i=0; i<4; i++) {
//         soma[i] = x[i] + y[i];
//         if (x[i] > y[i]){
//             distancia[i] = x[i] - y[i];
//         } else {
//             distancia[i] = y[i] - x[i];   
//         }
//     }

//     cout << "Vetor soma: ";
//     for (i=0; i<4; i++) {
//         cout << soma[i] << " ";
//     }

//     cout << "\n";
//     cout << "Vetor distancia: ";
//     for (i=0; i<4; i++) {
//         cout << distancia[i] << " ";
//     }

    return 0;
}