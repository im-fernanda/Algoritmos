// Altere o exercício anterior para cadastrar no máximo 20 clientes. Ao final do cadastro de cada 
// cliente deverá ser perguntado: "Novo Cliente (S/N)?". Caso o usuário escolha “N” ou chegar 
// nos 20 clientes, o programa deve mostrar um relatório de todos os clientes cadastrados e 
// finalizar. 
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

    cont = i;
    
    cout << "\nEXIBINDO OS CLIENTES";
    for(i=0; i<cont; i++){

        cout << "\n\tCLIENTE " << i+1;
        cout << "\n\tIdentidade: " << clientes[i].id;
        cout << "\n\tNome: " << clientes[i].nome;
        cout << "\n\tEndereco: " << clientes[i].endereco;
        cout << "\n\tTelefone: " << clientes[i].telefone;
        cout << "\n";
    }

    return 0;
}

