#include <stdio.h>

int main()
{
  FILE *arquivo = fopen("notas.txt", "r");
  char aluno[30];

  if(arquivo != NULL)
  {
    while (fgets(aluno, 30, arquivo) != NULL) 
    {
      printf("%s", aluno);  
    }
    fclose(arquivo);  
  }

  else
  {
    printf("\nErro ao encontrar o arquivo\n);
  }
  return 0;
}
