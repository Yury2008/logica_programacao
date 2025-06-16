#include <stdio.h>

int main()
{
    int numero, novoNumero;
    int *ponteiro = &numero;

    printf("\nDigite o valor original: ");
    scanf("%i", &numero);

    printf("Valor original: %i\n\n", numero);

    printf("Digite o novo valor: ");
    scanf("%i", &novoNumero);

    *ponteiro = novoNumero;

    printf("\nNovo valor após a modificação via ponteiro: %i\n", numero);

    return 0;
}