#include <stdio.h>

struct pessoa{

    char nome[50];
    int idade;

};

void exibirPessoa(struct pessoa serHumano){

    printf("\nBem-vindo(a), %s!", serHumano.nome);
    printf("\nSeus Dados:\n");
    printf("Nome: %s\n", serHumano.nome);
    printf("Idade: %i\n\n", serHumano.idade);

}


int main(){

    struct pessoa serHumano;

    printf("\nQual seu nome? ");
    scanf("%49[^\n]", serHumano.nome);
    printf("Qual sua idade? ");
    scanf("%i", &serHumano.idade);

    exibirPessoa(serHumano);

    return 0;
}