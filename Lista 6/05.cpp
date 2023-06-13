// Altere o exercício anterior para que, após o término de todos os cadastros, ou seja, quando o usuário digitar "N" na pergunta para novo cliente ou 
// quando preencher o vetor com 20 clientes, a tela seja ser limpa e seja exibida uma nova tela perguntando se o usuário quer ver 
// um relatório ou consultar um cliente individualmente. Se ele desejar ver o relatório, o 
// sistema deverá exibi-lo conforme questão anterior. Se ele escolher consultar um cliente 
// individualmente, o sistema deverá solicitar a identidade do cliente procurado, fazer uma 
// busca no vetor e informar seus dados caso o cliente esteja cadastrado. Se não existir cliente 
// cadastrado com aquela identidade, o sistema deverá informar “Cliente não cadastrado”. 
#include <iostream>
#include <string>
using namespace std;

struct tCliente{
    int id;
    string nome, endereco, telefone;
};

int main (){
    const int qntMax = 20;
    tCliente clientes[qntMax];
    int i=0, cont=0;
    char resposta;
    int escolha, idBuscada, iAux;
    bool achou;
 
    cout << "INICIANDO CADASTRO DO CLIENTE... \n";
    do {
        cout << "\n\t CLIENTE " << i+1;

        cout << "\n\tDigite o numero da identidade: ";
        cin >> clientes[i].id;
        getchar();

        cout << "\tDigite o nome: ";
        getline(cin, clientes[i].nome);

        cout << "\tDigite o endereco: ";
        getline(cin, clientes[i].endereco);  

        cout << "\tDigite o telefone: ";
        getline(cin, clientes[i].telefone); 

        
        i++;
        if (i<qntMax) {
            cout << "Novo cliente? (S/N): ";
            cin >> resposta;
            getchar();
        } else {
            cout << "CADASTRAMENTO ENCERRADO. \n";
        }

    } while (resposta!= 'N' && i<qntMax);

    system("clear");
    cont = i;
    do {
        cout << "\n\t -- MENU --";
        cout << "\n\t1 - Ver relatorio dos clientes";
        cout << "\n\t2 - Consultar um cliente individualmente.";
        cout << "\n\t3 - Sair.";
        cout << "\n\tEscolha uma opcao: ";
        cin >> escolha;

        switch (escolha){
            case 1: 
                cout << "\nEXIBINDO OS CLIENTES";
                for(i=0; i<cont; i++){
                    cout << "\n\tCLIENTE " << i+1;
                    cout << "\n\tIdentidade: " << clientes[i].id;
                    cout << "\n\tNome: " << clientes[i].nome;
                    cout << "\n\tEndereco: " << clientes[i].endereco;
                    cout << "\n\tTelefone: " << clientes[i].telefone;
                    cout << "\n";
                }
                break;

            case 2:
                cout << "\nDigite a identidade do cliente procurado: ";
                cin >> idBuscada;
                for (i=0; i<cont; i++){
                    achou=false;
                    if (idBuscada == clientes[i].id){
                        achou = true;
                        iAux = i;
                    }
                }
                if (!achou){
                    cout << "\n\tCliente não cadastrado!";
                } else {
                    cout << "\n\tCLIENTE " << iAux+1;
                    cout << "\n\tIdentidade: " << clientes[iAux].id;
                    cout << "\n\tNome: " << clientes[iAux].nome;
                    cout << "\n\tEndereco: " << clientes[iAux].endereco;
                    cout << "\n\tTelefone: " << clientes[iAux].telefone;
                    cout << "\n";
                }
                break;

            case 3: cout << "\nEncerrando o programa...";
            break;

            default: cout << "Opcao invalida";
            break;
        }
    } while (escolha!=3);


    return 0;
}
