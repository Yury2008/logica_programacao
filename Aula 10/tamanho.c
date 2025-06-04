#include <stdio.h>
#include <string.h>

int main(){

    char palavra[50];

    printf("Insira um palavra: ");
    scanf("%49[^\n]", palavra);

    int tam = strlen(palavra);

    if(tam > 15) printf("Palavra Longa\n");
    else if(tam > 8 && tam <= 15) printf("Palavra Média\n");
    else if(tam <= 8 && tam >= 5) printf("Palavra Pequena\n");
    else printf("Nada a declarar.");

    return 0;
}