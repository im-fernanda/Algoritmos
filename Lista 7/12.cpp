/*
    12. Escreva uma função hm que converta minutos em horas-e-minutos. A função 
    recebe um inteiro mnts e os endereços de duas variáveis inteiras, h e m, e atribui valores 
    a essas variáveis de modo que m seja menor que 60 e que 60*h + m seja igual a mnts. 
    Elabore um algoritmo que teste a função hm. 
*/
#include <iostream>
using namespace std;

void hm (int mnts, int *ponteiroH, int *ponteiroM);

int main() {
    int mnts, h, m;

    cout << "Informe os minutos: ";
    cin >> mnts;

    hm(mnts, &h, &m);

    cout << "Tranformados em horas e minutos: " << endl;
    cout << h << "h e " << m << " min.";

    return 0;
}

void hm (int mnts, int *ponteiroH, int *ponteiroM){
    *ponteiroH = mnts/60;
    *ponteiroM = mnts%60;
}
