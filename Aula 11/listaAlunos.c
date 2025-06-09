#include <stdio.h>

struct listaAlunos{

    char nome[50];
    float nota;

};

int main(){

    struct listaAlunos alunos[100];
    int qtdAlunos;
    float media, somaNotas = 0;

    printf("Informe a quantidade de alunos: ");
    scanf("%i", &qtdAlunos);
    getchar();

    if(qtdAlunos <= 0 || qtdAlunos > 100) printf("Quantidade Inválida.");

    else{
        for(int i = 0; i < qtdAlunos; i++){
            printf("\n%iº Aluno\n", i + 1);
            printf("Informe o nome: ");
            scanf("%49[^\n]", alunos[i].nome);
            printf("Informe a nota: ");
            scanf("%f", &alunos[i].nota);
            
            somaNotas += alunos[i].nota;
            getchar();
        }
        media = somaNotas / qtdAlunos;
        for(int i = 0; i < qtdAlunos; i++){
            printf("\nDados do %iº Aluno:\n", i + 1);
            printf("Nome: %s\n", alunos[i].nome);
            printf("Nota: %.2f\n\n", alunos[i].nota);
        }
        printf("A média geral é %.2f", media);
    }


}