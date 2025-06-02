#include <stdio.h>

int main(){

    int idade;
    char nome[50];
    float nota;

    printf("\nQual o seu nome? ");
    scanf("%s", nome);
    printf("Qual a sua idade? ");
    scanf("%d", &idade);
    printf("Qual a sua nota? ");
    scanf("%f", &nota);

    printf("\nAluno: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Nota: %.2f\n", nota);


    return 0;
}