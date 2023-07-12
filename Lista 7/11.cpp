/*  11. Elabore um algoritmo que apresente o menu abaixo e, de acordo com a opção 
    escolhida pelo usuário, realize a respectiva operação conforme detalhamento. 
    -------------------------------------------------------
    MENU PRINCIPAL 
    -------------------------------------------------------
    1 - ORDEM 
    2 - DATA 
    3 - SALÁRIO 
    4 - MULTA 
    5 - CALCULAR 
    6 - SAIR 
    -------------------------------------------------------
*/
#include <iostream>
#include <string>
using namespace std;

struct tData{
    int dia;
    int mes;
    int ano;
};

void ordenaNumeros(int &n1, int &n2, int &n3, char ordem);

bool verificaData(const tData &datas, int cont, bool *verificador);

float valorPorFilho(float salario, int qntFilhos);

void verificaMulta (int velMax, int velMotorista, float *multa);

void pontos(int gabaritos[][10], int *percentualAcertos, float *nota);


int main(){
    int op;
    //Op 1
    int n1, n2, n3;
    char ordem;
    //Op 2
    const int tam = 2;
    tData datas[tam];
    bool datasValidas[tam];
    int i=0, cont=0;
    bool verifica[tam];
    //Op 3
    float salario;
    int qntFilhos;
    //Op 4
    int velMax, velMotorista;
    float multa;
    //Op 5
    int gabaritos[2][10];
    int j;
    int percentualAcertos;
    float nota;


do {
    cout << "\n\t-------------------------------------------------------";
    cout << "\n\tMENU PRINCIPAL";
    cout << "\n\t-------------------------------------------------------";
    cout << "\n\t1 - ORDEM";
    cout << "\n\t2 - DATA";
    cout << "\n\t3 - SALARIO";
    cout << "\n\t4 - MULTA";
    cout << "\n\t5 - CALCULAR";
    cout << "\n\t6 - SAIR";
    cout << "\n\t-------------------------------------------------------";
    cout << "\n\t\tEscolha a opcao desejada: ";
    cin >> op;
    

    switch(op){
        case 1:
        /*  Opção 1: leia três valores inteiros e um char (‘c’ – crescente, ‘d’ – decrescente), passeos 
            para uma função que deverá ordená-los de acordo com a ordem escolhida e retorná-los 
            para o chamador, que deverá escrever o resultado da ordenação. 
        */
            cout << "Informe tres numeros inteiros: ";
            cin >> n1 >> n2 >> n3;

            cout << "Informe a ordem que deseja (c para crescente e d para decrescente): ";
            cin >> ordem;
            getchar();

            ordenaNumeros(n1, n2, n3, ordem);
            if (ordem == 'c'){
                cout << "Numeros em ordem crescente: " << n1 << ", " << n2 << ", " << n3 << ".";
            } else {
                cout << "Numeros em ordem descrecente: " << n3 << ", " << n2 << ", " << n1 << ".";
            }
        break;

        case 2:
        /*  Opção 2: Declare o registro Data contendo 3 campos inteiros, dia, mês e ano, e leia 5 
            datas em um vetor de datas. Passe o vetor lido para uma função que que deverá verificar 
            e retornar um vetor booleano contendo true em cada posição cuja data for válida e false 
            em cada posição que a tada não for válida. Considerar meses de 30 e 31, desconsiderar 
            anos bissextos. O chamador, após receber o resultado da função, deverá escrever uma 
            mensagem de “Data Válida” ou “Data Válida” para cada resultado recebido no vetor. 
            Exemplo: Vetor de Datas: 21/1/2000, 31/12/2012, 45/3/2000, 1/40/2000, 31/02/1999 
            Saída da função: true, true, false, false, false
        */

            cout << "INICIANDO CADASTRO... \n";
            do {
                cout << "--- DATA " << i+1 << "---" << endl;
                cout << "Informe o dia: ";
                cin >> datas[i].dia;
                cout << "Informe o mes: ";
                cin >> datas[i].mes;
                cout << "Informe o ano: ";
                cin >> datas[i].ano;

                i++;
            } while (i<2);
            cont = i;

            cout << "Resultado:" << endl;
            for (i=0; i<tam; i++) {
                verificaData(datas[i], cont, verifica);
                if (verifica[i]){
                    cout << "True ";
                } else {
                    cout << "False ";
                }
            }

        break;

        case 3:
        /*  Opção 3: leia o salário de uma pessoa e a sua quantidade de filhos e mande-os para uma 
            função. A função deverá retornar quanto do salário da pessoa será dedicado a cada um 
            dos seus filhos (considerando 10% para cada filho, desde que não exceda o 50% do valor 
            total do salário. Se exceder, o valor para cada filho deverá ser 50% do salário dividido 
            pelo total de filhos. O chamador deverá informar o valor do salário por filho ou, se a 
            pessoa não tiver filhos, a mensagem “O seu salário é 100% para o seu próprio custeio”.
        */
            cout << "Informe a quantidade de filhos: ";
            cin >> qntFilhos;

            cout << "Informe seu salario: ";
            cin >> salario;

            cout << "Valor dedicado a cada um dos filhos: " << valorPorFilho(salario, qntFilhos);

        break;

        case 4:
        /*  Opção 4: leia a velocidade máxima permitida em uma avenida e a velocidade com que o 
            motorista estava dirigindo nela, envie-os para uma função void que deverá calcular se a 
            pessoa vai pagar multa e, se for, qual o valor da multa. Considere que serão pagos como 
            multa: a) 50 reais se o motorista ultrapassar em até 10km/h a velocidade permitida (ex.: 
            velocidade máxima: 50km/h; motorista a 60km/h ou a 56km/h); b) 100 reais, se o 
            motorista ultrapassar de 11 a 30 km/h a velocidade permitida. c) 200 reais, se estiver 
            acima de 31km/h da velocidade permitida. A mensagem informando o valor da multa 
            deverá ser escrita pelo chamador após a execução da função.
        */
            cout << "Informe a velocidade maxima permitida na avenida: ";
            cin >> velMax;
            cout << "Informe a velocidade do motorista: ";
            cin >> velMotorista;

            verificaMulta (velMax, velMotorista, &multa);
            if (multa == 0){
                cout << "O motorista nao foi mutado.";
            } else {
                cout << "A multa a ser paga eh de R$ " << multa;
            }

        break;

        case 5:
        /*  Opção 5: leia o gabarito correto de uma prova e o gabarito de um aluno em uma matriz 
            2x10 (10 respostas do gabarito na primeira linha da matriz e 10 repostas do aluno na 
            segunda linha da matriz) e envie para uma função. A função deverá calcular e retornar o 
            percentual de acerto do aluno na prova (int) e a sua nota (float), considerando que cada 
            questão vale 1,5 ponto. Escreva os resultados retornados pela função. 
        */

        cout << "Informe o gabarito correto da prova: ";
        for (j=0; j<10; j++){
                cin >> gabaritos[0][j];
            }
        cout << "Informe as respostas do aluno: ";
        for (j=0; j<10; j++){
                cin >> gabaritos[1][j];
        }

        pontos(gabaritos, &percentualAcertos, &nota);

        cout << "Percentual de acertos: " << percentualAcertos << endl;;
        cout << "Nota: " << nota;

        break;

        case 6: cout << "Fim de programa!";
        break;

        default: cout << "Opcao invalida. Tente novamente.";
        break;
    }
} while (op!=6);


    return 0;
}

void ordenaNumeros(int &n1, int &n2, int &n3, char ordem){
    int menor, maior, meio;

        if (n1>n2){
            maior = n1;
            if (n2>n3){
                meio = n2;
                menor = n3;
            } else {
                meio = n3;
                menor = n2;            
            }
        } else if (n2>n1){
            maior = n2;
            if (n1>n3){
                meio = n1;
                menor = n3;
            } else {
                meio = n3;
                menor = n1;            
            }
        } else {
            maior = n3;
            if (n1>n2){
                meio = n1;
                menor = n2;
            } else {
                meio = n2;
                menor = n1;            
            }
        }

        n1 = menor;
        n2 = meio;
        n3 = maior;

}
bool verificaData(const tData &datas, int cont, bool *verificador){
    int i, tam=2;
    for (i=0;i<tam;i++){
        verificador[i] = true;
    }

    for (i = 0; i < cont; i++) {   
        // Verifica se o dia está entre 1 e 31
        if (datas.dia < 1 || datas.dia > 31) {
            verificador[i] = false;
            // return false;
        }
        // Verifica se o mês está entre 1 e 12
        if (datas.mes < 1 || datas.mes > 12) {
            verificador[i] = false;
            // return false;
        }
        // Verifica se o mês tem 30 ou 31 dias
        if (datas.mes == 4 || datas.mes == 6 || datas.mes == 8 || datas.mes == 11) {
            if (datas.dia > 30) {
                verificador[i] = false;
                // return false;
            }
        }
        // Verifica se o mês é fevereiro (possui 28 dias)
        if (datas.mes == 2) {
            // Desconsiderando anos bissextos
            if (datas.dia > 28) {
                verificador[i] = false;
                // return false;
            }
        }
    }

}
float valorPorFilho(float salario, int qntFilhos){
    float metadeSalario, divisao;

    metadeSalario = 0.5*salario;
    if (qntFilhos == 0){
        cout << "O seu salario eh cem por cento para o seu proprio custeio";
    } else {
        divisao = 0.10*salario;
        if (qntFilhos*divisao>metadeSalario){
            divisao = metadeSalario/qntFilhos;
        }
    }

    return divisao;
}
void verificaMulta (int velMax, int velMotorista, float *multa){
    int diferenca;

    if (velMotorista<velMax){
        *multa = 0;
    } else {
        diferenca = velMotorista - velMax;
        if (diferenca<=10){
            *multa = 50;
        } else if (diferenca>10 && diferenca <=30) {
            *multa = 100;
        } else {
            *multa = 200;
        }
    }
}
void pontos(int gabaritos[][10], int *percentualAcertos, float *nota){
    int j, cont=0;

    *percentualAcertos=0;
    for (j=0; j<10; j++){
        if (gabaritos[0][j] == gabaritos[1][j]){
            cont++;
        }
    }
    *nota=cont*1.5;
    *percentualAcertos=cont*10; //quantidade de acertos vezes a quantidade de questões (10) dividido por 100
 
}




