#include <iostream>
#include <string>
using namespace std;

struct tProduto {
    string descricao;
    int quantidade;
    float precoUnitario;
    float subTotal;
};

struct tNotaFiscal {
    int numero;
    string data;
    tProduto itens[5];
    float total;
};

int main (){
    const int qntMax = 5;
    tNotaFiscal notasFiscais[qntMax];
    int qtdPro[5] = {0,0,0,0,0}, k=0, l=0;
    int i=0, j=0, cont=0;
    char resposta;
    int opcao1, opcao2;
    int idBuscada, iAux;
    bool achou = false;
 

    cout << "INICIANDO CADASTRO DO PRODUTO.. \n";
 
    do {
        cout << "\n------------------------------------------------------------------------------\n";
        cout << "\t\t\t\tMENU PRINCIPAL";
        cout << "\n------------------------------------------------------------------------------\n";
        cout << "\n1 - CADASTRAR NOTAS FISCAIS";
        cout << "\n2 - RELATORIO DE NOTAS FISCAIS";
        cout << "\n3 - BUSCAR NOTA POR NUMERO";
        cout << "\n4 - EXIBIR NOTA COM MAIOR VALOR TOTAL";
        cout << "\n5 - EXIBIR A QUANTIDADE TOTAL VENDIDA DE UM PRODUTO A PARTIR DA SUA DESCRICAO";
        cout << "\n6 - EXIBIR MEDIA DO TOTAL DAS NOTAS";
        cout << "\n7 - SAIR";
        cout << "\n------------------------------------------------------------------------------\n";
        cout << "\n\nEscolha uma opcao: ";
        cin >> opcao1;

        switch (opcao1){
        case 1:
            do {
                do {
                    cout << "\n Digite o numero da nota fiscal: ";
                    cin >> notasFiscais[i].numero;
                    getchar();
                } while (notasFiscais[i].numero<0);

                //Busca se ja tem uma igual
                for(j=0; j<i; j++){
                    if(j!=0){
                        if(notasFiscais[j].numero == notasFiscais[j-1].numero){
                            achou = true;
                        }
                    }
                }
                if (achou) {
                    cout << "\nNumero de nota ja existente, digite novamente!";
                } else {
                    i++;
                }
            } while(achou == true); //mantem o usuario digitando o num da nota fiscal se ela ja existir
                        
            cout << "\nDigite a data da compra: ";
            getline(cin, notasFiscais[i].data);

            do { 
                cout << "\n------------------------------------------------------------------------------\n";
                cout << "\t\t\t\tMENU SECUNDARIO";
                cout << "\n------------------------------------------------------------------------------\n";
                cout << "\n1 - CADASTRAR PRODUTOS";
                cout << "\n2 - RELATORIO DE PRODUTOS";
                cout << "\n3 - SAIR";
                cout << "\n------------------------------------------------------------------------------\n";
                cout << "\n\nOpcao: ";
                cin >> opcao2;
                getchar();

                l = qtdPro[j];
                switch(opcao2){

                case 1: 

                    if (l<qntMax) {
                        cout << "\n\tDigite a descricao do produto: ";
                        getline(cin, notasFiscais[i].itens[l].descricao);

                        cout << "\tDigite a quantidade: ";
                        cin >> notasFiscais[i].itens[l].quantidade;
                        getchar();
                        qtdPro[j] += 1;
                        cout << "\tDigite o preco unitario: ";
                        cin >> notasFiscais[i].itens[l].precoUnitario; 
                        getchar(); 

                        notasFiscais[i].itens[l].subTotal = notasFiscais[i].itens[l].quantidade * notasFiscais[i].itens[l].precoUnitario;

                        notasFiscais[i].total = notasFiscais[i].itens[l].subTotal;
                        
                    } else {
                        cout << "CADASTRAMENTO ENCERRADO. \n";
                    }
                break;

                case 2:
                    if (l>0){
                        cout << "\nRELATORIO DOS PRODUTOS: ";
                        for(k=0; k<l; k++){
                            cout << "\n\tPRODUTO " << i+1;
                            cout << "\n\tDescricao: " << notasFiscais[i].itens[k].descricao;
                            cout << "\n\tQuantidade: " << notasFiscais[i].itens[k].quantidade;
                            cout << "\n\tPreco unitatio : R$ " << notasFiscais[i].itens[k].precoUnitario;
                            cout << "\n\tSubtotal: " << notasFiscais[i].itens[k].subTotal;
                            cout << "\n";
                        }
                    } else {
                        cout << "\nNenhum produto cadastrado no sistema atualmente!\n";
                    }
                    break;

                case 3: cout << "\nSaindo...";
                    break;

                default: cout << "\nValor invalido, digite novamente!"; 
    
            
            }
        } while (opcao2!=3);

        case 2:
            if (l>0){
                cout << "\nNOTAS FISCAIS ";
                for(j=0; j<l; j++){
                    cout << "\nCodigo: " << notasFiscais[j].numero;
                    cout << "\t\t\tData: " << notasFiscais[j].data;
                    cout << "\n------------------------------------------------------------------------------\n";

                    cout << "\n\t\tProdutos";
                     for(k = 0; k < qtdPro[j]; k++){
                        cout << "\n\tPRODUTO " << k+1;
                        cout << "\n\tDescricao: " << notasFiscais[j].itens[k].descricao;
                        cout << "\n\tQuantidade: " << notasFiscais[j].itens[k].quantidade;
                        cout << "\n\tPreco unitatio : R$ " << notasFiscais[j].itens[k].precoUnitario;
                        cout << "\n\tSubtotal: " << notasFiscais[j].itens[k].subTotal;
                        cout << "\n";
                    }
                }
            } else {
                cout << "\nNenhum produto cadastrado no sistema atualmente!\n";
            }
        break;

        case 7: cout << "\nEncerrando o programa...";
            break;

            default: cout << "Opcao invalida";
            break;
    } 
            
    } while (opcao1!=7);




     return 0;
}
