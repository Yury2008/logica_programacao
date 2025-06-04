#include <stdio.h>
#include <string.h>

int main(){

    char palavra[100], palavra2[50];

    printf("Digite a primeira frase: ");
    scanf("%49[^\n]", palavra);

    getchar();

    printf("Digite a segunda frase: ");
    scanf("%49[^\n]", palavra2);

    strcat(palavra, palavra2);

    printf("Frase resultante: %s", palavra);

}