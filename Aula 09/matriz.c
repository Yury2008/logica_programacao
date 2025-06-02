#include <stdio.h>

int main(){
    
    int matriz[2][2], somaMatriz = 0;

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("Informe o número na posição [%i][%i]: ", i, j);
            scanf("%i", &matriz[i][j]);
            somaMatriz += matriz[i][j];
        }
    }

    printf("A soma dos elementos é: %i", somaMatriz);
    
    return 0;
}