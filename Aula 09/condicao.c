#include <stdio.h>

int main(){

    int numero, soma = 0;

    for(int i = 0; i < 5; i++){
        printf("Insira um número: ");
        scanf("%i", &numero);
        soma += numero;
    }
    printf("A soma dos número digitados é %i\n", soma);

    return 0;
}