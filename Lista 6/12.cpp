// Elabore um registro que represente corretamente uma conta bancária de uma pessoa 
// contendo os campos “número do banco”, “número da agência”, “número da conta”, “nome 
// do cliente”, “senha” e “saldo atual” e um vetor capaz de armazenar 100 contas. Leia os dados 
// de N contas e, após a leitura, mostre uma tela com as opções “entrar” ou “sair”. Se o usuário 
// escolher “entrar”, ele deverá digitar o número da conta e a senha. O algoritmo deverá 
// localizar a conta no vetor e, se a senha estiver correta, mostrar um menu com as opções de 
// “saque”, “depósito”, “saldo” e “voltar a tela anterior”. A opção que o usuário escolher deverá 
// ser executada pelo sistema e, em seguida, esta mesmo menu de opções deverá ser exibido
// novamente. Se a senha estiver incorreta ou a conta não existir, o sistema deverá informar a 
// mensagem “erro de busca”. Somente quando o usuário escolher “sair”, o sistema deverá 
// finalizar.

#include <iostream>
#include <string>
using namespace std;

struct tContaBancaria {
    int N;
    int numBanco, numAgencia, numConta;
    string nome, senha;
    float saldoAtual;
};


int main(){
    tContaBancaria contas[100];
    int N, i, fim=0;
    int opcao, opcao2;
    int contaAux, iAux, iAux2, saque, deposito;
    string senhaAux;
    bool achou;

    do {
        cout << "Quantas contas deseja cadastrar? ";
        cin >> N;
        getchar();
        if (N>10){
            cout << "Maximo 10. Digite novamente. ";
        } 
    } while (N>10);

    for (i=0; i<N; i++){
        cout << "\nINCLUSAO...";
            //0. verificar se a agenda está cheia...
            if(fim==10){ // AGENDA CHEIA!!!
                cout << "\nRegistro cheio, nao eh possivel incluir!";
            } else {
                cout << "\n\tConta: ";
                cin >> contaAux;
                getchar();

                //2. pesquisar no vetor se existe registro com esse id (busca)
                achou = false;
                for(i=0; i<fim; i++){
                    if(contaAux==contas[i].numConta){
                        achou = true;
                    }
                }
                //2.1 se existir, informar que o registro já está cadastrado
                if(achou){
                    cout << "\n\tEsta conta ja esta cadastrado!";
                }else{ //2.2 se não existir, solicitar os outros dados e adicionar o registo no vetor
                    //neste momento do código, i == fim
                    contas[i].numConta = contaAux;

                    cout << "\n\tAgencia: ";
                    cin >> contas[i].numAgencia;
                    getchar();

                    cout << "\tNome do cliente: ";
                    getline(cin,contas[i].nome);

                    cout << "\tSenha: ";
                    cin >> contas[i].senha;
                    getchar();

                    cout << "\tSaldo atual: ";
                    cin >> contas[i].saldoAtual;
                    getchar();

                    fim++;
                    cout << "\n\tConta adicionada com sucesso!";
                }
            }
     }

    do {
        cout << "\n\t-------------------------------------";
        cout << "\n\t       MENU PRINCIPAL";
        cout << "\n\t-------------------------------------";
        cout << "\n\t1 - ENTRAR";
        cout << "\n\t2 - SAIR";       
        cout << "\n\t-------------------------------------";
        cout << "\n\tESCOLHA A OPCAO DESEJADA: ";
        cin >> opcao;
        getchar();
        
        switch(opcao){
            case 1: 
                cout << "\n\tConta? ";
                cin >> contaAux;
                getchar();

                achou = false;
                for(i=0; i<fim; i++){
                    if(contaAux==contas[i].numConta){
                        achou = true;
                        iAux = i;
                    }
                }
                if (!achou){
                    cout << "Conta nao cadastrada.";
                } else {
                    cout << "\tSenha? ";
                    getline(cin, senhaAux);
                    if (senhaAux==contas[iAux].senha){
                         do {
                            cout << "\n\t-------------------------------------";
                            cout << "\n\t       MENU PRINCIPAL";
                            cout << "\n\t-------------------------------------";
                            cout << "\n\t1 - SAQUE";
                            cout << "\n\t2 - DEPOSITO";
                            cout << "\n\t3 - SALDO";    
                            cout << "\n\t4 - VOLTAR A TELA ANTERIOR";  
                            cout << "\n\t-------------------------------------";
                            cout << "\n\tESCOLHA A OPCAO DESEJADA: ";
                            cin >> opcao2;
                            getchar();

                            switch(opcao2){
                                case 1: 
                                cout << "\nSaque iniciado...";

                                cout << "\n\t Quanto deseja sacar? ";
                                cin >> saque;
                                getchar();

                                contas[iAux].saldoAtual = contas[iAux].saldoAtual - saque;
                                cout << "Saque realizado. Saldo atual: " << contas[iAux].saldoAtual;
                                system("pause");
                                break;

                                case 2: 
                                cout << "\nDeposito iniciado...";
                                
                                cout << "\n  Digite o numero da conta a ser depositada: "; 
                                cin >> contaAux;
                                getchar();

                                achou = false;
                                for(i=0; i<fim; i++){
                                    if(contaAux==contas[i].numConta){
                                        achou = true;
                                        iAux2 = i;
                                    }
                                }
                                if (!achou){
                                    cout << "Erro de busca. A conta nao existe.";
                                } else { 
                                    do {                                
                                        cout << "\n\t Quanto deseja depositar? ";
                                        cin >> deposito;
                                        getchar();

                                        if (deposito>contas[iAux].saldoAtual){
                                            cout << "\n  Nao eh possivel efetuar um deposito maior que o saldo disponivel na conta." << endl;
                                        }
                                    } while(deposito>contas[iAux].saldoAtual);

                                    contas[iAux].saldoAtual-=deposito; // Retirando valor da conta que fez o depósito
                                    contas[iAux2].saldoAtual+=deposito; // Depositando valor na conta selecionada
                                    cout << "\n  Deposito realizado com sucesso! Saldo atual: " << contas[iAux].saldoAtual << endl;
                                    system("pause");
                                    }

                                break;

                                case 3:
                                cout << "\nConsultado os dados...";
                                cout <<"\n\tConta: " << contas[iAux].numConta;
                                cout << "\n\tAgencia: " << contas[iAux].numAgencia;
                                cout << "\n\tNome do cliente: " << contas[iAux].nome;
                                cout << "\n\tSaldo atual: " << contas[iAux].saldoAtual;
                                break;

                                case 4: cout << "\nVoltando...";
                                break;
                                default: cout << "\nOpcao invalida.";
                                break;
                            }
                         } while (opcao2!=4);
                    } else {
                        cout << "Senha incorreta!";
                    }
                }

            break;

            case 2: cout << "\n\n\tFim de Programa";
            break;

            default: cout << "\n\n\tOpcao inválida";
            break;
        } 
    } while(opcao!=2);

    return 0;
}