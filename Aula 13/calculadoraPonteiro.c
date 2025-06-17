#include <stdio.h>

void calcular(float *numero1, float *numero2)
{
  float soma, multiplicacao;

  soma = *numero1 + *numero2;
  multiplicacao = *numero1 * *numero2;

  printf("\nSoma: %.2f", soma);
  printf("\nMultiplicação: %.2f", multiplicacao);
}

int main()
{
  float numero1, numero2;

  printf("Insira o primeiro número: ");
  scanf("%f", &numero1);

  printf("Insira o segundo número: ");
  scanf("%f", &numero2);

  calcular(&numero1, &numero2);
  
  return 0;
}