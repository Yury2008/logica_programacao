#include <stdio.h>

int main()
{
  FILE *arquivo = fopen ("usuarios.txt", "w+");
  char nome[50], email[100];
  int idade;
  
  if (arquivo == NULL) 
  {
      printf("\nErro ao abrir o arquivo!\n");
      return 1;
  }

  printf("Informe o nome: ");
  scanf("%49[^\n]", nome);
  printf("Informe a idade: ");
  scanf("%i", &idade);
  getchar();
  printf("Informe o e-mail: ");
  scanf("%99[^\n]", email);

  fprintf(arquivo, "Nome: %s\nIdade: %i\nEmail: %s", nome, idade, email);

  rewind(arquivo);

  fscanf(arquivo, "Nome: %49[^\n] Idade: %i Email: %99[^\n]", nome, &idade, email);

  printf("\nNome: %s \nIdade: %d \nEmail: %s", nome, idade, email);
  fclose(arquivo);
  
  return 0;
}
