#include <stdio.h>

int main(){

    char palavra1[50], palavra2[50], palavra3[50];

    printf("Palavra 1: ");
    scanf("%49[^\n]", palavra1);
    getchar();

    printf("Palavra 2: ");
    scanf("%49[^\n]", palavra2);
    getchar();

    printf("Palavra 3: ");
    scanf("%49[^\n]", palavra3);
    getchar();

    printf("\n%s\n", palavra3);
    printf("%s\n", palavra2);
    printf("%s", palavra1);
    
    
    return 0;
}
