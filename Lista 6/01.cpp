// Elabore um algoritmo preencha o cadastro de 10 alunos contendo matricula, nome, 
// endereço e média geral. Após o preenchimento, deve ser somado o valor 0,5 às médias de 
// todos os alunos que tiveram médias maiores que 5. Em seguida escreva o vetor final.
#include <iostream>
#include <string>
using namespace std;

struct tAluno{
    int matricula;
    string nome;
    string endereco;
    float mediaGeral;
};

int main(){
    tAluno alunos[10];
    int i, qtd;

    cout << "Cadastrando os alunos...";
    do {
        cout << "\nQuantos alunos deseja cadastrar? ";
        cin >> qtd;
    } while(qtd>10); //tamanho máximo do vetor

    for(i=0; i<qtd; i++){
        getchar();
        cout << "\n\tALUNO " << i+1;
        cout << "\n\tDigite a matricula: ";
        cin >> alunos[i].matricula;
        getchar();
        cout << "\tDigite o nome: ";
        getline(cin, alunos[i].nome);
        cout << "\tDigite o endereço: ";
        getline(cin, alunos[i].endereco);
        cout << "\tDigite a media geral: ";
        cin >> alunos[i].mediaGeral;

    }

    cout << "\nEXIBINDO OS ALUNOS";
    for(i=0; i<qtd; i++){
        if(alunos[i].mediaGeral > 5){
            alunos[i].mediaGeral += 0.5;
        }
        cout << "\n\tALUNO " << i+1;
        cout << "\n\tMatricula: " << alunos[i].matricula;
        cout << "\n\tNome: " << alunos[i].nome;
        cout << "\n\tEndereco: " << alunos[i].endereco;
        cout << "\n\tMedia geral: " << alunos[i].mediaGeral;
    }
    
    return 0;
}