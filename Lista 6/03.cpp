// Escreva um programa para cadastrar dois clientes de uma loja. As informações necessárias 
// para o cliente são: identidade, nome, endereço e telefone.
#include <iostream>
#include <string>
using namespace std;

struct tCliente{
    int id;
    string nome, endereco, telefone;
};

int main (){
    const int qnt = 2;
    tCliente clientes[qnt];
    int i;

    cout << "INICIANDO CADASTRO DO CLIENTE... \n";
    for (i=0; i<qnt; i++){
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

    }

    cout << "\nEXIBINDO OS CLIENTES";
    for(i=0; i<qnt; i++){

        cout << "\n\tCLIENTE " << i+1;
        cout << "\n\tIdentidade: " << clientes[i].id;
        cout << "\n\tNome: " << clientes[i].nome;
        cout << "\n\tEndereco: " << clientes[i].endereco;
        cout << "\n\tTelefone: " << clientes[i].telefone;
        cout << "\n";
    }


    return 0;
}

