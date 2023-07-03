/*
PONTEIROS - LISTA SIMPLESMENTE ENCADEADA
*/

#include <iostream>

using namespace std;

struct aluno {
    int matricula;
    float media;
    aluno *proximo;
};

int main(){
    int resposta;
    bool primeiraVez = true;
    aluno *p, *inicio, *antigoUltimo, *aux;
    cout << "\n\tCadastrando os alunos...";
    do{
        p = (struct aluno*) malloc(sizeof(struct aluno));
        cout << "\n\tDigite a matricula: ";
        cin >> p->matricula;
        cout << "\n\tDigite a media: ";
        cin >> p->media;

        if(primeiraVez){ //este é o primeiro registro da lista
            inicio = p;
            p->proximo = NULL; //aponta para o fim
            primeiraVez = false;
        }else{
            p->proximo = NULL;
            //laço procurando o antigo último 
            antigoUltimo = inicio;
            while(antigoUltimo->proximo != NULL){
                antigoUltimo = antigoUltimo->proximo;
            }
            antigoUltimo->proximo = p;
        }

        cout << "\n\tDeseja continuar (1-sim/2-nao)? ";
        cin >> resposta;
    }while(resposta==1);

    cout << "\n\tEscrevendo os alunos cadastrados: ";
    aux = inicio;
    do{
        cout << "\n\tMatricula: " << aux->matricula;
        cout << "\n\tMedia: "<< aux->media;
        //andar
        aux = aux->proximo;
    }while(aux!=NULL);


/*    int* p;

    int num;
    num = 10;
    p = &num;
    cout << "\nnum = " << num;
    cout << "\n&num = " << &num;
    cout << "\np = " << p;
    cout << "\n&p = " << &p;
    cout << "\n*p = " << *p;
    *p = 8;
    cout << "\n*p = " << *p;
    cout << "\nnum = " << num;

*/

    cout << "\n";
    system("PAUSE");
}
