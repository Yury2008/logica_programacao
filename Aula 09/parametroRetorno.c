#include <stdio.h>

int ehPar(int numero){
    printf("Insira um número: ");
    scanf("%i", &numero);

    if(numero % 2 == 0){
        printf("eh par");
    } else{
        printf("eh ímpar");
    }
}


int main(){
    
    int numero;
    
    ehPar(numero);
    
    return 0;
}