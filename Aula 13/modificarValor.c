#include <stdio.h>

int main()
{
  int numero, novoNumero;

  printf("Insira um número: ");
  scanf("%i", &numero);

  int *ptr = &numero;

  printf("Número original: %i\n\n", *ptr);

  printf("Insira um novo valor: ");
  scanf("%i", &novoNumero);

  *ptr = novoNumero;

  printf("Novo valor após a modificação via ponteiro: %i", *ptr);
  
  return 0;
}