/*
13.	Elabore um algoritmo que: 
- Crie o registro tProduto:  
Registro tProduto: 
descricao: string 
quantidade: int 
precoUnitario: float 
subTotal: float  	
Obs: o campo subtotal deve ser calculado automaticamente, sendo ele resultante 
da quantidade x preço unitário do produto. 
 
- Crie o registro tNotaFiscal 
Registro tNotaFiscal: 
numero: int 
data: string 
itens: tProduto[5] total: float  
Obs: o campo total deve ser calculado automaticamente, sendo ele a soma de todos
os SubTotais dos produtos cadastrados. 
-	Declare um vetor NotasFiscais (5 posições de tNotaFiscal) e leia seus dados. 
-	Informe o seguinte menu e proceda com a operação de acordo com a escolha do usuário: 

MENU PRINCIPAL
1	– RELATÓRIO DE NOTAS FISCAIS  
2	– BUSCAR NOTA POR NUMERO 
3	– EXIBIR NOTA COM MAIOR VALOR TOTAL 
4	– EXIBIR A QUANTIDADE TOTAL VENDIDA DE UM PRODUTO A PARTIR DA SUA DESCRIÇÃO 
5 – EXIBIR MÉDIA DO TOTAL DAS NOTAS 
6 – SAIR

-	Se o usuário escolher a opção 1, o algoritmo deverá mostrar todos os dados de 
todas as notas cadastradas. 
-	Se o usuário escolher a opção 2, solicite o número da nota e faça a busca. 
Se existir, mostre seus produtos. Se não existir, informe. 
-	Se o usuário escolher a opção 3, mostre os dados da nota que tem o maior valor total.
- Se o usuário escolher a opção 4, solicite a descrição do produto, calcule e 
mostre o somatório de todas as quantidades vendidas daquele produto em todas as notas. 
-	Se o usuário escolher a opção 5, calcule e mostre a média de todos os totais das notas. 
-	Se o usuário escolher a opção 6, finalize o sistema. 
*/

#include<iostream>
#include<string>
using namespace std;

struct tProduto{
    string descricao;
    int qtd;
    float precoUnit;
    float subTotal;
};

struct tNotaFiscal{
    int numero;
    string data;
    tProduto itens[5];
    float total;
};

int main(){
    tNotaFiscal notasFiscais[5];

    
 

    // em construção

    cout << "\n\n\tFim\n\n\t";
	system("Pause");
}






