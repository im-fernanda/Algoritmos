/*
15.	Projeto: implementação de um CRUD - AGENDA DE CONTATOS
 
- Registro tPessoa 
identidade: int
nome: string 
contato: tContato 

- Registro tContato
celular: string
email: string


*/

#include<iostream>
#include<string>
using namespace std;

struct tContato{
    string cel;
    string email;
};

struct tPessoa{
    int id; //chave primária, ou seja, não poderá ter repetições
    string nome;
    tContato contato;
};

int main(){
    tPessoa agenda[1000];  
    int opcao, idAux, i, fim=0, iAux, cont;
    string nomeAux;
    bool achou;

    do{
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

        switch(opcao){
            case 1: cout << "\n\n\tINCLUSAO...";
            //0. verificar se a agenda está cheia...
            if(fim==1000){ // AGENDA CHEIA!!!
                cout << "\n\tAgenda cheia, nao eh possivel incluir!";
            }else{
                //1. solicitar o id (chave primária)
                cout << "\n\tQual o id do contato que deseja incluir? ";
                cin >> idAux;

                //2. pesquisar no vetor se existe registro com esse id (busca)
                achou = false;
                for(i=0; i<fim; i++){
                    if(idAux==agenda[i].id){
                        achou = true;
                    }
                }
                //2.1 se existir, informar que o registro já está cadastrado
                if(achou){
                    cout << "\n\tEste id ja esta cadastrado!";
                }else{ //2.2 se não existir, solicitar os outros dados e adicionar o registo no vetor
                    //neste momento do código, i == fim
                    agenda[fim].id = idAux;
                    cout << "\n\tNome? ";
                    getchar();
                    getline(cin,agenda[fim].nome);
                    cout << "\n\tCelular? ";
                    getline(cin,agenda[fim].contato.cel);
                    cout << "\n\tEmail? ";
                    getline(cin,agenda[fim].contato.email);
                    fim++;
                    cout << "\n\tContato adicionado com sucesso!";
                }
            }
            break;

            case 2: cout << "\n\n\tBUSCA...";
            cout << "\n\tDeseja buscar por 1-ID ou 2-NOME? ";
            cin >> opcao;
            if(opcao==1){
                cout << "\n\tDigite o id: ";
                cin >> idAux;
                //2. pesquisar no vetor se existe registro com esse id (busca)
                achou = false;
                for(i=0; i<fim; i++){
                    if(idAux==agenda[i].id){
                        achou = true;
                        cout << "\n\tNome: " << agenda[i].nome;
                        cout << "\n\tCelular: " << agenda[i].contato.cel;
                        cout << "\n\tEmail: " << agenda[i].contato.email;
                        cout << "\n";
                    }
                }
                //2.1 se existir, mostra o registro
                if(!achou){
                    cout << "\n\tEste id nao esta cadastrado!";
                }
            }else{
                if(opcao==2){
                    cout << "\n\tDigite o nome: ";
                    getchar();
                    getline(cin,nomeAux);
                    //2. pesquisar no vetor se existe registro com esse nome (busca)
                    achou = false;
                    for(i=0; i<fim; i++){
                        if(nomeAux==agenda[i].nome){
                            achou = true;
                            cout << "\n\tId: " << agenda[i].id;
                            cout << "\n\tCelular: " << agenda[i].contato.cel;
                            cout << "\n\tEmail: " << agenda[i].contato.email;
                            cout << "\n";
                        }
                    }
                    //2.1 se existir, mostra o registro
                    if(!achou){
                        cout << "\n\tEste nome nao esta cadastrado!";
                    }
                }else{
                    cout << "\n\tOpcao invalida!";
                }
            }
            break;

            case 3: cout << "\n\n\tALTERACAO...";
               //1. solicitar o id (chave primária)
                cout << "\n\tQual o id do contato que deseja alterar? ";
                cin >> idAux;

                //2. pesquisar no vetor se existe registro com esse id (busca)
                achou = false;
                for(i=0; i<fim; i++){
                    if(idAux==agenda[i].id){
                        achou = true;
                        iAux = i;
                    }
                }
                //2.1 se não existir, informa que o id não está cadastrado no vetor 
                if(!achou){
                    cout << "\n\tContato não cadastrado!";
                }else{
                    cout << "\n\tId: " << agenda[iAux].id;
                    cout << "\n\tNome: " << agenda[iAux].nome;
                    cout << "\n\tCelular: " << agenda[iAux].contato.cel;
                    cout << "\n\tEmail: " << agenda[iAux].contato.email;
                    
                    cout << "\n\tDeseja alterar o id (1-sim,2-nao)? ";
                    cin >> opcao;
                    if(opcao==1){
                        cout << "\n\tDigite o novo id:";
                        cin >> idAux;
                        achou = false;
                        if(idAux!=agenda[i].id){
                            for(i=0; i<fim; i++){
                                if(idAux == agenda[i].id){
                                    achou = true;
                                }
                            }
                            if(achou){
                                cout << "\n\tO novo id ja existe no vetor!";
                            }else{
                                agenda[iAux].id = idAux;
                            }
                        }
                    }
                    cout << "\n\tDeseja alterar o nome (1-sim,2-nao)? ";
                    cin >> opcao;
                    if(opcao==1){
                        cout << "\n\tDigite o novo nome:";
                        getchar();
                        getline(cin,agenda[iAux].nome);
                    }
                    cout << "\n\tDeseja alterar o celular (1-sim,2-nao)? ";
                    cin >> opcao;
                    if(opcao==1){
                        cout << "\n\tDigite o novo celular:";
                        getchar();
                        getline(cin,agenda[iAux].contato.cel);
                    }
                    cout << "\n\tDeseja alterar o email (1-sim,2-nao)? ";
                    cin >> opcao;
                    if(opcao==1){
                        cout << "\n\tDigite o novo email:";
                        getchar();
                        getline(cin,agenda[iAux].contato.email);
                    }
                    cout << "\n\tAlteracao realizada com sucesso!";
                }

            break;
            case 4: cout << "\n\n\tEXCLUSAO...";
            if(fim==0){
                cout << "\n\tAgenda vazia";
            }else{
                cout << "\n\tQual o id que deseja excluir? ";
                cin >> idAux;
                //2. pesquisar no vetor se existe registro com esse id (busca)
                achou = false;
                for(i=0; i<fim; i++){
                    if(idAux==agenda[i].id){
                        achou = true;
                        iAux = i;
                    }
                }
                if(!achou){
                    cout << "\n\tContato nao cadastrado!";
                }else{
                    cout << "\n\tId: " << agenda[iAux].id;
                    cout << "\n\tNome: " << agenda[iAux].nome;
                    cout << "\n\tCelular: " << agenda[iAux].contato.cel;
                    cout << "\n\tEmail: " << agenda[iAux].contato.email;
                    
                    cout << "\n\tTem certeza que deseja excluir (1-sim,2-nao)? ";
                    cin >> opcao;
                    if(opcao==1){
                        //exclusão
                        for(i=iAux; i<fim; i++){
                            agenda[i].id = agenda[i+1].id;
                            agenda[i].nome = agenda[i+1].nome;
                            agenda[i].contato.cel = agenda[i+1].contato.cel;
                            agenda[i].contato.email = agenda[i+1].contato.email;
                        }
                        fim--;
                        cout << "\n\tExclusao efetuada com sucesso!";
                    }else{
                        cout << "\n\tExclusao cancelada!";
                    }
                }
            }
            break;
            case 5: cout << "\n\n\tRELATORIO...";
            //1.percorrer o vetor mostrando cada um dos registros
            for(i=0; i<fim; i++){
                cout << "\n\n\t---------CONTATO " << (i+1) << "---------";
                cout << "\n\tID: " << agenda[i].id;
                cout << "\n\tNome: " << agenda[i].nome;
                cout << "\n\tCelular: " << agenda[i].contato.cel;
                cout << "\n\tEmail: " << agenda[i].contato.email;
            }

            break;
            case 6: cout << "\n\n\tFim de Programa";
            break;
            default: cout << "\n\n\tOpcao inválida";
        }
        cout << "\n\n\tFim da operacao\n\n\t";
        system("Pause");
        system("cls");

    } while(opcao!=6);
}






