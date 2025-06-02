#include <stdio.h>

int main(){

    int valor;

    printf("Informe o valor: ");
    scanf("%i", &valor);

    for(int i = 0; i <= valor; i++){
        if(i % 2 == 0){
            printf("%i ", i);
        }
    }

    return 0;
}