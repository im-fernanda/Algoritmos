/*
6.	Uma empresa tem para cada um dos seus 200 funcionários uma ficha contendo o nome, 
número de horas trabalhadas e o número de dependentes. Considerando que: 
- A empresa paga 12 reais por hora e 40 reais por dependentes; 
- Sobre o salário são feitos descontos de 8,5% para o INSS e 5% para IR. 
Elabore um algoritmo que declare o registro do funcionário, e leia seus dados 
enquanto o usuário desejar cadastrar (não permitindo o cadastro de mais de 200 funcionários). 
Após a leitura, escreva o nome, salário bruto, os valores descontados para cada tipo de imposto 
e qual o salário líquido de cada um dos funcionários que foram cadastrados.  
*/

#include<iostream>
#include<string>
using namespace std;

struct tFuncionario{
    string nome;
    int numHoras;
    int numDep;
};

int main(){
    tFuncionario funcionarios[200];
    int i, qtd;
    float salarioBruto, descontoINSS, descontoIR;
    
    cout << "\n\tCadastrando os funcionarios...";
    do {
        cout << "\n\tQuantos funcionarios deseja cadastrar? ";
        cin >> qtd;
    } while(qtd>200); //tamanho máximo do vetor

    for(i=0; i<qtd; i++){
        getchar();
        cout << "\n\tFUNCIONARIO " << i+1;
        cout << "\n\tDigite o nome: ";
        getline(cin, funcionarios[i].nome);
        cout << "\n\tDigite o numero de horas trabalhadas: ";
        cin >> funcionarios[i].numHoras;
        cout << "\n\tDigite a quantidade de dependentes: ";
        cin >> funcionarios[i].numDep;
    }
    
   for(i=0; i<qtd; i++){
        getchar();
        cout << "\n\tFUNCIONARIO " << i+1;
        cout << "\n\tNome: " << funcionarios[i].nome;

        salarioBruto = (12*funcionarios[i].numHoras)+(40*funcionarios[i].numDep);
        cout << "\n\tSalario Bruto: " << salarioBruto;
        descontoINSS = salarioBruto*0.085;
        cout << "\n\tDesconto INSS: " << descontoINSS;
        descontoIR = salarioBruto*0.05;
        cout << "\n\tDesconto IR: ";
        cout << "\n\tSalario Liquido: " << salarioBruto-(descontoINSS+descontoIR);
    }

    cout << "\n\n\tFim\n\n\t";
	system("Pause");
}






