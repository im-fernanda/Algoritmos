#include <iostream>
#include <string>
using namespace std;

struct tUsuario {
    int telefone;
    string nome;
};

struct tChamada{
    int tempoChamada;
    tUsuario telefone;
};

int main(){
    tUsuario U[100];
    tChamada C[5000];
    int M[100][2];
    int i, j, fim=0;
    int opcao;
    int telefoneAux, iAux;
    int tempoTotal=0, contChamadas[5000];
    bool achou, chamadaCadastrada=false;
    string userAux;

    do {
        
        cout << "\n\t       MENU PRINCIPAL";
        cout << "\n\t-------------------------------------";
        cout << "\n\t1 - CADASTRAR DADOS DO USUARIO OU DA CHAMADA";
        cout << "\n\t2 - MOSTRAR AS CHAMADAS DE UM USUARIO";
        cout << "\n\t3 - MOSTRAR O TOTAL DE MINUTOS POR TELEFONE";
        cout << "\n\t4 - ARMAZENAS TELEFONES E SUAS CHAMADAS";
        cout << "\n\t5 - SAIR";
        cout << "\n\t-------------------------------------";
        cout << "\n\tESCOLHA A OPCAO DESEJADA: ";
        cin >> opcao;
        getchar();
 

    switch (opcao){
        case 1: 
        if (fim == 100){
            cout << "\nAgenda cheia.";
        } else {
            cout << "\n\tInforme o telefone: ";
            cin >> telefoneAux;
            getchar();

            achou=false;
            for (i=0; i<fim; i++){
                if (telefoneAux == U[i].telefone){
                    achou = true;
                    iAux = i;
                }
            }
            if (!achou){
                cout << "\nCadastrando usuario";
                cout << "\n\tNome do usuario? ";
                getline(cin, U[fim].nome);
                
                U[fim].telefone = telefoneAux;
                fim++;

                cout << "\n\tUsuario cadastrado com sucesso!";
            } else {
                cout << "\nCadastrando chamada";
                cout << "\n\tTempo da chamada? ";
                cin >> C[iAux].tempoChamada;
                getchar();

                chamadaCadastrada=true;
                contChamadas[iAux]++;
                cout << "\n\tChamada cadastrada com sucesso!";

            }
        }
        
        system("pause");
        break;
        
        case 2: 
        if (fim==0){
            cout << "\nAinda nao ha usuarios cadastrados.";
        } else {
            cout << "\nNome do usuario? ";
            getline(cin, userAux);
            
            achou=false;
            for (i=0; i<fim; i++){
                if (userAux == U[i].nome){
                    achou = true;
                    iAux = i;
                }
            }
            if (!achou){
                cout << "\n\tUsuario nao cadastrado.";
            } else {
                if (!chamadaCadastrada) {
                cout << "Nenhuma chamada encontrada para o usuário. " << telefoneAux << endl;
                } else {
                cout << "Total de chamadas para o telefone " << telefoneAux << ": " << contChamadas[iAux] << endl;
                }
            }
        }
        
        system("pause");
        break;
        
        case 3: 
        cout << "\n\tRelatorio do tempo de chamadas por telefone";
        cout << "\nInforme o telefone: ";
        cin >> telefoneAux;
        getchar();

        tempoTotal=0;
        for (i=0; i<fim; i++) {
            if (telefoneAux == U[i].telefone) {
                tempoTotal += C[i].tempoChamada;
            }
        }
        
        if (!chamadaCadastrada) {
            cout << "Nenhuma chamada encontrada para o usuário. " << telefoneAux << endl;
        } else {
            cout << "Total de minutos de chamadas para o telefone " << telefoneAux << ": " << tempoTotal << " minutos" << endl;
        }
        
        system("pause");
        break;

        case 4: 
        for (i=0; i<fim; i++){
            for (j=0;j<2;j++){
                M[i][0] = U[i].telefone;
                M[i][1]= contChamadas[i];
            }
        }

        cout << "\nTelefones e suas respectivas quantidades de chamadas:" << endl;
        for (i = 0; i<fim; i++) {
            cout << M[i][0] << " - " << M[i][1] << " chamadas" << endl;
        }

        system("pause");
        break;

        case 5: cout << "Saindo...";
        break;

        default: cout << "Opcao invalida";
    } 
} while (opcao!=5);

    return 0;
}