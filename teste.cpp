#include <iostream>
using namespace std;

int main() {
    int vetorX[10];
    int tamanho = 0;
    int elemento;

    do {
        cout << "Digite um elemento (ou um valor negativo/zero para encerrar): ";
        cin >> elemento;

        if (elemento > 0) {
            vetorX[tamanho] = elemento;
            tamanho++;
        }
    } while (tamanho < 10 && elemento > 0);

    cout << "Vetor X: ";
    for (int i = 0; i < tamanho; i++) {
        cout << vetorX[i] << " ";
    }
    cout << endl;

    return 0;
}
