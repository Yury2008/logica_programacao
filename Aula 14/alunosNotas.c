#include <stdio.h>

int main()
{
  FILE *arquivo = fopen("notas.txt", "r");
  char aluno[30];

  while (fgets(aluno, 30, arquivo) != NULL) 
  {
    printf("%s", aluno);  
  }

  fclose(arquivo);  
  
  return 0;
}
