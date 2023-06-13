// Crie um tipo registro chamado Endereco que contenha os campos Rua (string), Numero (int), 
// Bairro (string), Cidade (string), Estado (string). Em seguida declare uma variável do tipo 
// Endereco. Crie outro tipo registro chamado Pessoa que tenha os campos Nome (string), 
// Ender (Endereco), Telefone (string) e Idade (int). 
// - Declare um vetor pessoas com 10 posições do tipo Pessoa e leia seus dados; 
// - Leia um endereço na variável do tipo endereço;
// - Faça uma busca e liste os nomes de todas as pessoas cadastradas no vetor cujo bairro é o 
// mesmo bairro do endereço cadastrado na variável do tipo endereço.
#include <iostream>
#include <string>
using namespace std;

struct tEndereco {
    string rua, bairro, cidade, estado;
    int numero;
};

struct tPessoa{
    string nome, telefone;
    int idade;
    tEndereco endereco;
};

int main(){
    tPessoa pessoas[10];
    int i, opcao, fim=0;
    string nomeAux, bairroAux;
    bool achou;

    do {
        cout << "\n\t       MENU PRINCIPAL";
        cout << "\n\t-------------------------------------";
        cout << "\n\t1 - INCLUIR UM REGISTRO";
        cout << "\n\t2 - MOSTRAR REGISTROS";
        cout << "\n\t3 - BUSCAR POR PESSOAS NO MESMO BAIRRO";
        cout << "\n\t4 - SAIR DO SISTEMA";        
        cout << "\n\t-------------------------------------";
        cout << "\n\tESCOLHA A OPCAO DESEJADA: ";
        cin >> opcao;
        getchar();
        
        switch(opcao){
            case 1: cout << "\n\n\tINCLUSAO...";
            //0. verificar se a agenda está cheia...
            if(fim==10){ // AGENDA CHEIA!!!
                cout << "\nRegistro cheia, nao eh possivel incluir!";
            }else{
                //1. solicitar o id (chave primária)
                cout << "\n\tQual o nome do contato que deseja incluir? ";
                getline(cin, nomeAux);

                //2. pesquisar no vetor se existe registro com esse id (busca)
                achou = false;
                for(i=0; i<fim; i++){
                    if(nomeAux==pessoas[i].nome){
                        achou = true;
                    }
                }
                //2.1 se existir, informar que o registro já está cadastrado
                if(achou){
                    cout << "\n\tEste nome ja esta cadastrado!";
                }else{ //2.2 se não existir, solicitar os outros dados e adicionar o registo no vetor
                    //neste momento do código, i == fim
                    pessoas[fim].nome = nomeAux;
                    cout << "\n\tIdade? ";
                    cin >> pessoas[fim].idade;
                    getchar();
                    cout << "\n\tTelefone? ";
                    getline(cin,pessoas[fim].telefone);
                    cout << "\n\tRua? ";
                    getline(cin,pessoas[fim].endereco.rua);
                     cout << "\n\tNumero? ";
                    cin >> pessoas[fim].endereco.numero;
                    getchar();
                    cout << "\n\tBairro? ";
                    getline(cin,pessoas[fim].endereco.bairro);   
                    cout << "\n\tCidade? ";
                    getline(cin,pessoas[fim].endereco.cidade);  
                    cout << "\n\tEstado? ";
                    getline(cin,pessoas[fim].endereco.estado);                  

                    fim++;
                    cout << "\n\tPessoa adicionada com sucesso!";
                }
            }
            break;

            case 2:
            cout << "\n\n\tREGISTROS...";
            //1.percorrer o vetor mostrando cada um dos registros
            for(i=0; i<fim; i++){
                cout << "\n\n\t---------CONTATO " << (i+1) << "---------";
                cout << "\n\tNome: " << pessoas[i].nome;
                cout << "\n\tIdade: " << pessoas[i].idade;
                cout << "\n\tTelefone: " << pessoas[i].telefone;
                cout << "\n\tRua: " << pessoas[i].endereco.rua << ", numero " << pessoas[i].endereco.numero;
                cout << "\n\tBairro: " << pessoas[i].endereco.bairro;
                cout << "\n\t" << pessoas[i].endereco.cidade << "/" << pessoas[i].endereco.estado;
            }
            break;

            case 3:
            cout << "\n\n\tBUSCA POR ENDERECO...";
            cout << "\n\t Informe o bairro que deseja buscar: ";
            getline (cin, bairroAux);
            for(i=0; i<fim; i++){
                if (bairroAux == pessoas[i].endereco.bairro){
                    cout << "\n\tNome: " << pessoas[i].nome;
                }

            }
            break;

            case 4: cout << "\n\n\tFim de Programa";
            break;
            default: cout << "\n\n\tOpcao inválida";
        } 
    } while(opcao!=4);
    return 0;

}