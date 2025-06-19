#include <stdio.h>

int main()
{
  FILE *arquivo = fopen("entradas.txt", "r");
  char c;
  int totalCaracteres = 0;

  if (arquivo != NULL)
  {
      while ((c = fgetc(arquivo)) != EOF) 
      {
          printf("%c", c);
          totalCaracteres++;
      }
      fclose(arquivo);
  }
  printf("\nO total de caracteres no arquivo é: %i", totalCaracteres);
  return 0;
}