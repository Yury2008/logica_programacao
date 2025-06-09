#include <stdio.h>

struct cadastroSimples{
    
    char nome[50];
    int idade;

};

int main(){

    struct cadastroSimples cadastro1;

    printf("\n===== Cadastro =====\n");
    printf("Informe seu nome: ");
    scanf("%49[^\n]", cadastro1.nome);
    printf("Informe a sua idade: ");
    scanf("%i", &cadastro1.idade);

    printf("\n===== Dados =====\n");
    printf("Nome: %s\n", cadastro1.nome);
    printf("Idade: %i anos\n\n", cadastro1.idade);

    return 0;

}
