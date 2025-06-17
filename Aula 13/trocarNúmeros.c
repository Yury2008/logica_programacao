#include <stdio.h>

void trocar(int *numero1, int *numero2)
{
  int guardaNumero;
  
  guardaNumero = *numero1;
  *numero1 = *numero2;
  *numero2 = guardaNumero;
}

int main()
{
  int numero1, numero2;

  printf("Insira um número: ");
  scanf("%i", &numero1);

  printf("Insira um segundo número: ");
  scanf("%i", &numero2);

  trocar(&numero1, &numero2);

  printf("\n1º Número: %i", numero1);
  printf("\n2º Número: %i", numero2);
  
  return 0;
}