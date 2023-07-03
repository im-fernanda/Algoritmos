/*
    8. Escreva uma função que determine a média e a situação de um aluno em uma 
    disciplina. A função recebe como parâmetros as três notas de um aluno (p1, p2, e p3), 
    seu número de faltas (faltas), o número total de aulas da disciplina (aulas) e o ponteiro 
    para uma variável (media), conforme a seguinte assinatura: 
    char situacao(float p1, float p2, float p3, int faltas, int aulas, float *media); Na 
    variável indicada pelo ponteiro media, a função deve armazenar a média do aluno, 
    calculada como a média aritmética das três provas. Além disso, a função deve retornar 
    um caractere indicando a situação do aluno no curso.

    Em seguida, escreva a função principal de um programa que utiliza a função anterior para 
    determinar a situação de um aluno. O programa deve: 
    - Ler do teclado três números reais e dois números inteiros, representando as 
    notas da p1, p2 e p3, o número de faltas e o número de aulas, respectivamente; 
    - Chamar a função desenvolvida na primeira questão para determinar a média e a 
    situação do aluno na disciplina; 
    - Exibir a média (com apenas uma casa decimal) e a situação do aluno, isto é, 
    “APROVADO”, “REPROVADO” ou “REPROVADO POR FALTAS”, dependendo do caractere 
    retornado pela função, conforme a tabela acima.
*/
#include <iostream>
using namespace std;

char situacao(float p1, float p2, float p3, int faltas, int aulas, float *media);

int main(){
    float p1, p2, p3, media, frequencia;
    int faltas, aulas;
    char situ;

    cout << "Informe a nota 1: ";
    cin >> p1;
    cout << "Informe a nota 2: ";
    cin >> p2;
    cout << "Informe a nota 3: ";
    cin >> p3;

    cout << "Informe o numero de faltas: ";
    cin >> faltas;
    cout << "Informe o numero de aulas: ";
    cin >> aulas;

    situ = situacao(p1, p2, p3, faltas, aulas, &media);

    if(situ=='A'){
        cout << "\n\tMedia = " << media << " e situacao = APROVADO";
    }else{
        if(situ=='R'){
            cout << "\n\tMedia = " << media << " e situacao = REPROVADO";
        }else{
            cout << "\n\tMedia = " << media << " e situacao = REPROVADO POR FALTAS";
        }
    }

    return 0;
}

char situacao(float p1, float p2, float p3, int faltas, int aulas, float *media){
    float frequencia = (25*aulas)/100;
    char resultado;

    *media = (p1+p2+p3)/3;

    if (faltas>frequencia || faltas>frequencia){
        resultado = 'F';
    } else {
        if (*media>6 || *media==6){
            resultado = 'A';
        } else {
            resultado = 'R'; 
        }
    }

    return resultado;
}