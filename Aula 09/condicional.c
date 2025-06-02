#include <stdio.h>

int main(){

    int idade;

    printf("Insira a sua idade: ");
    scanf("%i", &idade);

    if(idade >= 60){
        printf("Você é um idoso");
    } else if(idade >= 18){
        printf("Você é de maior");
    } else{
        printf("Você é de menor");
    }

    return 0;
}