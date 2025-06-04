#include <stdio.h>
#include <string.h>

int ehPalindromo(char palavra[20], int tamanho){
    printf("Insira uma palavra: ");
    scanf("%19[^\n]", palavra);
    tamanho = strlen(palavra);

    for(int i = 0; i < tamanho / 2; i++){
        if (palavra[i] != palavra[tamanho - 1 - i]) {
            printf("%s não é um palíndromo.\n", palavra); 
            return 0;
        }
    }
printf("%s é um palíndromo.\n", palavra);

return 1;
}

int main(){ 
    
    char palavra[20];
    int tamanho;
    
    ehPalindromo(palavra, tamanho);
    
    return 0;
}
