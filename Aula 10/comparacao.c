#include <stdio.h>
#include <string.h>

int main(){
    
    char palavra1[50], palavra2[50];

    printf("Insira a primeira palavra: ");
    scanf("%49[^\n]", palavra1);

    getchar();

    printf("Insira a segunda palavra: ");
    scanf("%49[^\n]", palavra2);

    int res = strcmp(palavra1, palavra2);

    if(res == 0) printf("\nAs palavras são iguais");
    else printf("\nAs palavras são diferentes.");


    
    return 0;
}