/*
15.	Projeto: implementação de um CRUD - JOGADORES DE UM TIME E SUAS ESTATISTICAS

- Registro tJogador
numCamisa: int
nome: string
idade: int
nacionalidade: string
contato: string

- Registro tEstatisticas
gols: int
partidas: int 
*/
#include<iostream>
#include<string>
using namespace std;

struct tEstatisticas{
    int gols;
    int partidas;
};

struct tJogador{
    int camisa;
    int idade;
    string nome, nacionalidade;
    tEstatisticas estatisticas;
};

int main(){
    tJogador jogador[23];
    int i, j=0, fim=0, camisaAux;
    int opcao, opcao2, iAux;
    int idade, gols, partidas;
    string nacionalidade, nomeAux;
    bool achou;


    do {
        cout << "\n\t       MENU PRINCIPAL";
        cout << "\n\t-------------------------------------";
        cout << "\n\t1 - INCLUIR UM REGISTRO";
        cout << "\n\t2 - BUSCAR UM REGISTRO";
        cout << "\n\t3 - ALTERAR UM REGISTRO";
        cout << "\n\t4 - EXCLUIR UM REGISTRO";
        cout << "\n\t5 - LISTAR REGISTROS EXISTENTES";
        cout << "\n\t6 - SAIR DO SISTEMA";
        cout << "\n\t-------------------------------------";
        cout << "\n\tESCOLHA A OPCAO DESEJADA: ";
        cin >> opcao;
        getchar();

        switch(opcao){
            case 1: cout << "\nINICIANDO INCLUSAO...";
            if (fim==22){
                cout << "\n\t Todos os jogadores ja foram cadastrados.";
            } else {
                cout << "\n\tInforme o numero da camisa do jogador: ";
                cin >> camisaAux;
                getchar();

                achou = false;
                //Busca se ja existe aquele num de camisa cadastrado. Nao entra quando fim=0.
                for (i=0;i<fim; i++){
                    if (camisaAux==jogador[i].camisa){
                        achou = true;    
                    }
                }
    
                if (achou){
                    cout << "\nCamisa ja cadastrada. Tente novamente. ";
                } else {
                    jogador[fim].camisa = camisaAux;

                    cout << "\n\tNome: ";
                    getline (cin, jogador[fim].nome);
                    cout << "\tIdade: ";
                    cin >> jogador[fim].idade;
                    getchar();
                    cout << "\tNacionalidade: ";
                    getline (cin, jogador[fim].nacionalidade);

                    cout << "\tSaldo de gols: ";
                    cin >> jogador[fim].estatisticas.gols;
                    getchar();
                    cout << "\tPartidas jogadas: ";
                    cin >> jogador[fim].estatisticas.partidas;
                    getchar();

                    cout << "\nCadastro realizado com sucesso." << endl;
                    fim++;
                    system("pause");
                }
            }
            break;

            case 2: cout << "\nINICIANDO BUSCA...";
            cout << "\nDeseja buscar por 1-IDADE, 2-NACIONALIDADE, 3-GOLS ou 4-PARTIDAS?  ";
            cin >> opcao2;
            getchar();

            switch (opcao2) {
                case 1:
                cout << "Digite a idade que deseja buscar: ";
                cin >> idade;
                getchar();
                cout << "\n\t-------- Jogadores com " << idade << " anos --------";
                for (i=0; i<fim; i++){
                    if (idade == jogador[i].idade){
                        cout << "\n\tNome: " << jogador[i].nome;
                        cout << "\tNacionalidade: " << jogador[i].nacionalidade;
                        cout << "\n\tCamisa: " << jogador[i].camisa;
                        cout << "\tSaldo de gols: "<< jogador[i].estatisticas.gols;
                        cout << "\tPartidas jogadas: "<< jogador[i].estatisticas.partidas;
                        cout << "\n\n";
                    }
                }
                system("pause");
                break;

                case 2:
                cout << "Digite a nacionalidade que deseja buscar: ";
                getline(cin, nacionalidade);

                cout << "\n\t-------- Jogadores do(a) " << nacionalidade << " --------";
                for (i=0; i<fim; i++){
                    if (nacionalidade == jogador[i].nacionalidade){
                        cout << "\n\tNome: " << jogador[i].nome;
                        cout << "\tIdade: " << jogador[i].idade;
                        cout << "\n\tCamisa: " << jogador[i].camisa;
                        cout << "\tSaldo de gols: "<< jogador[i].estatisticas.gols;
                        cout << "\tPartidas jogadas: "<< jogador[i].estatisticas.partidas;
                        cout << "\n\n";
                    }
                } 
                system("pause");              
                break;

                case 3:
                cout << "Digite por quantos gols deseja buscar: ";
                cin >> gols;
                getchar();

                cout << "\n\t-------- Jogadores com " << gols << " gols --------";
                for (i=0; i<fim; i++){
                    if (gols == jogador[i].estatisticas.gols){
                        cout << "\n\tNome: " << jogador[i].nome;
                        cout << "\tIdade: " << jogador[i].idade;
                        cout << "\tNacionalidade: " << jogador[i].nacionalidade;
                        cout << "\n\tCamisa: " << jogador[i].camisa;
                        cout << "\tPartidas jogadas: "<< jogador[i].estatisticas.partidas;
                        cout << "\n\n";
                    }
                }
                break;

                case 4:
                cout << "Digite o numero de partidas que deseja buscar: ";
                cin >> partidas;
                getchar();

                cout << "\n\t-------- Jogadores com " << partidas << " partidas --------";
                for (i=0; i<fim; i++){
                    if (partidas == jogador[i].estatisticas.partidas){
                        cout << "\n\tNome: " << jogador[i].nome;
                        cout << "\tIdade: " << jogador[i].idade;
                        cout << "\tNacionalidade: " << jogador[i].nacionalidade;
                        cout << "\n\tCamisa: " << jogador[i].camisa;
                        cout << "\n\n";
                    }
                }

                system("pause");
                break;

                default: cout << "Opcao invalida.";
                break;
            }
            break;

            case 3: cout << "\nINICIANDO ALTERACAO...";
            //Solicitar a camisa (chave primária)
            cout << "\n\tQual o numero da camisa que deseja alterar? ";
            cin >> camisaAux;
            getchar();

            achou=false;
            for (i=0;i<fim;i++){
                if (camisaAux==jogador[i].camisa){
                    achou=true;
                    iAux = i;
                }
            }
            if (!achou){
                cout << "Esse numero de camisa ainda nao esta cadastrado.";
            } else {
                cout << "\n\tNome: " << jogador[iAux].nome;
                cout << "\tIdade: " << jogador[iAux].idade;
                cout << "\tNacionalidade: " << jogador[iAux].nacionalidade;
                cout << "\tSaldo de gols: "<< jogador[iAux].estatisticas.gols;
                cout << "\tPartidas jogadas: "<< jogador[iAux].estatisticas.partidas;
                cout << "\n\n";
                
                cout << "\n\tDeseja alterar o numero da camisa (1-sim, 2-nao)? ";
                    cin >> opcao;
                    getchar();
                    if(opcao==1){
                        cout << "\n\tDigite o novo numero: ";
                        cin >> camisaAux;
                        getchar();

                        achou = false;
                        if (camisaAux!=jogador[iAux].camisa){ //verifica se esta colocando um numero diferente do atual
                            for(i=0; i<fim; i++){
                                if(camisaAux == jogador[i].camisa){ //verifica se ja existe jogador com aquela camisa
                                    achou = true;
                                }
                            }

                            if(achou) {
                                cout << "\n\tJa existe jogador com esse numero de camisa.";
                            } else {
                                jogador[iAux].camisa = camisaAux; //muda o numero da camisa do jogador atual
                            }
                        }
                    }
                cout << "\n\tDeseja alterar o nome do jogador (1-sim, 2-nao)? ";
                cin >> opcao;
                getchar();
                if(opcao==1) {
                    cout << "\n\tDigite o novo nome: ";
                    getline(cin, nomeAux);

                    jogador[iAux].nome=nomeAux;
                }

                cout << "\n\tDeseja alterar o saldo de gols (1-sim, 2-nao)? ";
                cin >> opcao;
                getchar();
                if(opcao==1) {
                    cout << "\n\tDigite o novo saldo de gols: ";
                    cin >> jogador[iAux].estatisticas.gols;
                    getchar();
                } 

                cout << "\n\tDeseja alterar a quantidade de partidas jogadas (1-sim, 2-nao)? ";
                cin >> opcao;
                getchar();
                if(opcao==1) {
                    cout << "\n\tDigite o novo numero de partidas: ";
                    cin >> jogador[iAux].estatisticas.partidas;
                    getchar();
                }        

            cout << "\n\tAlteracao(oes) realizada(s) com sucesso!";
            }
            break;

            case 4: cout << "\nINICIANDO EXCLUSAO...";
            if(fim==0){
                cout << "\n\tAinda nao ha nenhum registro.";
            } else {
                //Solicitar a chave primária
                cout << "\n\tQual o numero da camisa que deseja excluir? ";
                cin >> camisaAux;
                getchar();

                achou=false;
                for (i=0;i<fim;i++){
                    if (camisaAux==jogador[i].camisa){
                        achou=true;
                        iAux = i;
                    }
                }
                if (!achou){
                    cout << "\nEsse numero de camisa nao esta cadastrado.";
                } else {
                    cout << "\n\tNome: " << jogador[iAux].nome;
                    cout << "\tIdade: " << jogador[iAux].idade;
                    cout << "\tNacionalidade: " << jogador[iAux].nacionalidade;
                    cout << "\tSaldo de gols: "<< jogador[iAux].estatisticas.gols;
                    cout << "\tPartidas jogadas: "<< jogador[iAux].estatisticas.partidas;
                    cout << "\n\n";

                    cout << "\nConfirma a exclusao? (1-sim, 2-nao): ";
                    cin >> opcao;
                    getchar();
                    if (opcao==1){
                        for (i=iAux; i<fim; i++){
                            jogador[i].camisa = jogador[i+1].camisa;
                            jogador[i].nome = jogador[i+1].nome;
                            jogador[i].idade= jogador[i+1].idade;
                            jogador[i].nacionalidade = jogador[i+1].nacionalidade;
                            jogador[i].estatisticas.gols = jogador[i+1].estatisticas.gols;
                            jogador[i].estatisticas.partidas = jogador[i+1].estatisticas.partidas;
                        }
                        fim--;
                        cout << "\nExclusao realizada com sucesso." << endl;
                    } else {
                        cout << "\nExclusao cancelada." << endl;
                    }
                }
            }
            break;

            case 5: cout << "\n\t-------- REGISTROS EXISTENTES --------" ;
            for (i=0; i<fim; i++){
                cout << "\n\tNome: " << jogador[i].nome;
                cout << "\n\tCamisa: " << jogador[i].camisa;
                cout << "\tIdade: " << jogador[i].idade;
                cout << "\tNacionalidade: " << jogador[i].nacionalidade;
                cout << "\tSaldo de gols: "<< jogador[i].estatisticas.gols;
                cout << "\tPartidas jogadas: "<< jogador[i].estatisticas.partidas;
                cout << "\n\n";
                }
            system("pause");
            break;

            case 6:
            cout << "Encerrando o programa...";
            break;

            default: cout << "Opcao invalida.";
            break;
        }
    } while (opcao!=6);

    return 0;
}