#include <stdio.h>
#include <string.h>
#define MAX_FILME 100

enum Status
{
  ESTREIA,
  EMCARTAZ,
  FORADOCINE
};

enum Classificacao
{
  AL,
  A10,
  A12,
  A14,
  A16,
  A18
};

enum Genero
{
  Ação_Aventura,
  Comédia,
  Drama,
  Terror,
  Ficcao_Cientifica,
  Animação,
  Romance
};

typedef struct 
{
  int codigo;
  char titulo[50];
  int anoLancamento;
  enum Status status;
  enum Genero genero;
  enum Classificacao indicativa;
} 
Filmes;

void classificacaoFilme(Filmes filme[], int *totalFilmes)
{
  int opcao, i = *totalFilmes;
  
  printf("\n========== CLASSIFICAÇÃO INDICATIVA ==========\n");
  printf("1 - Livre\n");
  printf("2 - Não indicado para menores de 10 anos\n");
  printf("3 - Não indicado para menores de 12 anos\n");
  printf("4 - Não indicado para menores de 14 anos\n");
  printf("5 - Não indicado para menores de 16 anos\n");
  printf("6 - Não indicado para menores de 18 anos\n");
  printf("==============================================\n");
  printf("Escolha a opção: ");
  scanf("%i", &opcao);

  while(opcao > 6 || opcao < 1)
  {
    printf("\nOpção inválida. Tente novamente\n");
    printf("Escolha a opção: ");
    scanf("%i", &opcao);
  }

  if(opcao <= 6 && opcao >= 1)
  {
    switch(opcao)
    {
      case 1:
        filme[i].indicativa = AL;
        break;
  
      case 2:
        filme[i].indicativa = A10;
        break;
  
      case 3:
        filme[i].indicativa = A12;
        break;
  
      case 4:
        filme[i].indicativa = A14;
        break;
  
      case 5:
        filme[i].indicativa = A16;
        break;
  
      default:
        filme[i].indicativa = A18;
        break;
    }
  }
}

void menuGeneros()
{
  printf("\n========== GÊNEROS ==========\n");
  printf("1 - Ação e Aventura\n");
  printf("2 - Comédia\n");
  printf("3 - Drama\n");
  printf("4 - Terror\n");
  printf("5 - Ficção Científica\n");
  printf("6 - Animação\n");
  printf("7 - Romance\n");
  printf("=============================\n");
}

void generosFilme(Filmes filme[], int *totalFilmes, int *acao, int *comedia, int *drama, int *terror, int *ficcao, int *animacao, int *romance)
{
  int opcao, i = *totalFilmes;

  menuGeneros();
  printf("Escolha uma opção: ");
  scanf("%i", &opcao);

  while(opcao > 7 || opcao < 1)
  {
    printf("\nOpção inválida. Tente novamente\n");
    printf("Escolha a opção: ");
    scanf("%i", &opcao);
  }

  if(opcao <= 7 && opcao >= 1)
  {
    switch(opcao)
    {
      case 1:
        filme[i].genero = Ação_Aventura;
        (*acao)++;
        break;
  
      case 2:
        filme[i].genero = Comédia;
        (*comedia)++;
        break;
  
      case 3:
        filme[i].genero = Drama;
        (*drama)++;
        break;
  
      case 4:
        filme[i].genero = Terror;
        (*terror)++;
        break;
  
      case 5:
        filme[i].genero = Ficcao_Cientifica;
        (*ficcao)++;
        break;
  
      case 6:
        filme[i].genero = Animação;
        (*animacao)++;
        break;
  
      default:
        filme[i].genero = Romance;
        (*romance)++;
        break;
    }
  }
}

void printarGenero(Filmes filme[], int *totalFilmes) 
{
  int i = *totalFilmes;

  switch(filme[i].genero) 
  {
    case Ação_Aventura: printf("Gênero: Ação e Aventura\n"); break;
    case Comédia: printf("Gênero: Comédia\n"); break;
    case Drama: printf("Gênero: Drama\n"); break;
    case Terror: printf("Gênero: Terror\n"); break;
    case Ficcao_Cientifica: printf("Gênero: Ficção Científica\n"); break;
    case Animação: printf("Gênero: Animação\n"); break;
    default: printf("Gênero: Romance\n");
  }
}

void printarClassificacao(Filmes filme[], int *totalFilmes)
{
  int i = *totalFilmes;

  switch(filme[i].indicativa)
  {
    case AL: printf("Classificação indicativa: Livre\n"); break;
    case A10: printf("Classificação indicativa: Não indicado para menores de 10 anos\n"); break;
    case A12: printf("Classificação indicativa: Não indicado para menores de 12 anos\n"); break;
    case A14: printf("Classificação indicativa: Não indicado para menores de 14 anos\n"); break;
    case A16: printf("Classificação indicativa: Não indicado para menores de 16 anos\n"); break;
    default: printf("Classificação indicativa: Não indicado para menores de 16 anos\n"); break;
  }
}

void printarStatus(Filmes filme[], int *totalFilmes)
{
  int i = *totalFilmes;

  switch(filme[i].status)
  {
    case ESTREIA: printf("Status: Em estreia\n"); break;
    case EMCARTAZ: printf("Status: Em cartaz\n"); break;
    default: printf("Fora dos cinemas\n"); break;
  }
}

void listarAcao(Filmes filme[], int *totalFilmes, int *acao)
{ 
  if(*acao == 0)
  {
    printf("\nNão tem filmes do gênero ação e aventura\n\n");
  }

  else
  {
    printf("\n-------------------- AÇÃO E AVENTURA --------------------\n\n");
    for(int i = 0; i < *totalFilmes; i++)
    {
      if(filme[i].genero == Ação_Aventura)
      {
        printf("\n--------------- CÓDIGO(%i) ---------------\n", filme[i].codigo);
        printf("Título: %s\n", filme[i].titulo);
        printarGenero(filme, totalFilmes);
        printf("Ano de lançamento: %i\n", filme[i].anoLancamento);
        printarClassificacao(filme, totalFilmes);
        printarStatus(filme, totalFilmes);
        printf("--------------------------------------------\n\n");
      }
    }
    printf("---------------------------------------------------------\n\n");
  }
}

void listarComedia(Filmes filme[], int *totalFilmes, int *comedia)
{ 
  if(*comedia == 0)
  {
    printf("\nNão tem filmes do gênero comédia\n\n");
  }

  else
  {
    printf("\n-------------------- COMÉDIA --------------------\n\n");
    for(int i = 0; i < *totalFilmes; i++)
    {
      if(filme[i].genero == Comédia)
      {
        printf("\n--------------- CÓDIGO(%i) ---------------\n", filme[i].codigo);
        printf("Título: %s\n", filme[i].titulo);
        printarGenero(filme, totalFilmes);
        printf("Ano de lançamento: %i\n", filme[i].anoLancamento);
        printarClassificacao(filme, totalFilmes);
        printarStatus(filme, totalFilmes);
        printf("--------------------------------------------\n\n");
      }
    }
    printf("-------------------------------------------------\n\n");
  }
}

void listarDrama(Filmes filme[], int *totalFilmes, int *drama)
{
  if(*drama == 0)
  {
    printf("\nNão tem filmes do gênero drama\n\n");
  }

  else
  {
    printf("\n-------------------- DRAMA --------------------\n\n");
    for(int i = 0; i < *totalFilmes; i++)
    {
      if(filme[i].genero == Drama)
      {
        printf("\n--------------- CÓDIGO(%i) ---------------\n", filme[i].codigo);
        printf("Título: %s\n", filme[i].titulo);
        printarGenero(filme, totalFilmes);
        printf("Ano de lançamento: %i\n", filme[i].anoLancamento);
        printarClassificacao(filme, totalFilmes);
        printarStatus(filme, totalFilmes);
        printf("--------------------------------------------\n\n");
      }
    }
    printf("-----------------------------------------------\n\n");
  }
}

void listarTerror(Filmes filme[], int *totalFilmes, int *terror)
{
  if(*terror == 0)
  {
    printf("\nNão tem filmes do gênero terror\n\n");
  }

  else
  {
    printf("\n-------------------- TERROR --------------------\n\n");
    for(int i = 0; i < *totalFilmes; i++)
    {
      if(filme[i].genero == Terror)
      {
        printf("\n--------------- CÓDIGO(%i) ---------------\n", filme[i].codigo);
        printf("Título: %s\n", filme[i].titulo);
        printarGenero(filme, totalFilmes);
        printf("Ano de lançamento: %i\n", filme[i].anoLancamento);
        printarClassificacao(filme, totalFilmes);
        printarStatus(filme, totalFilmes);
        printf("--------------------------------------------\n\n");
      }
    }
    printf("------------------------------------------------\n\n");
  }
}

void listarFiccao(Filmes filme[], int *totalFilmes, int *ficcao)
{ 
  if(*ficcao == 0)
  {
      printf("\nNão tem filmes do gênero ficção científica\n\n");
  }
  
  else
  {
    printf("\n-------------------- FICÇÃO CIENTÍFICA --------------------\n\n");
    for(int i = 0; i < *totalFilmes; i++)
    {
      if(filme[i].genero == Ficcao_Cientifica)
      {
        printf("\n--------------- CÓDIGO(%i) ---------------\n", filme[i].codigo);
        printf("Título: %s\n", filme[i].titulo);
        printarGenero(filme, totalFilmes);
        printf("Ano de lançamento: %i\n", filme[i].anoLancamento);
        printarClassificacao(filme, totalFilmes);
        printarStatus(filme, totalFilmes);
        printf("--------------------------------------------\n\n");
      }
    }
    printf("---------------------------------------------------------\n\n");
  }
}

void listarAnimacao(Filmes filme[], int *totalFilmes, int *animacao)
{
  if(*animacao == 0)
  {
      printf("\nNão tem filmes do gênero animação\n\n");
  }

  else
  {
    printf("\n-------------------- ANIMAÇÃO --------------------\n\n");
    for(int i = 0; i < *totalFilmes; i++)
    {
      if(filme[i].genero == Animação)
      {
        printf("\n--------------- CÓDIGO(%i) ---------------\n", filme[i].codigo);
        printf("Título: %s\n", filme[i].titulo);
        printarGenero(filme, totalFilmes);
        printf("Ano de lançamento: %i\n", filme[i].anoLancamento);
        printarClassificacao(filme, totalFilmes);
        printarStatus(filme, totalFilmes);
        printf("--------------------------------------------\n\n");
      }
    }
    printf("--------------------------------------------------\n\n");
  }
}

void listarRomance(Filmes filme[], int *totalFilmes, int *romance)
{
  if(*romance == 0)
  {
    printf("\nNão tem filmes do gênero romance\n\n");
  }

  else
  {
    printf("\n-------------------- ANIMAÇÃO --------------------\n\n");
    for(int i = 0; i < *totalFilmes; i++)
    {
      if(filme[i].genero == Romance)
      {
        printf("\n--------------- CÓDIGO(%i) ---------------\n", filme[i].codigo);
        printf("Título: %s\n", filme[i].titulo);
        printarGenero(filme, totalFilmes);
        printf("Ano de lançamento: %i\n", filme[i].anoLancamento);
        printarClassificacao(filme, totalFilmes);
        printarStatus(filme, totalFilmes);
        printf("--------------------------------------------\n\n");
      }
    }
    printf("--------------------------------------------------\n\n");
  }
}

void menu()
{
  printf("========================= FILMES =========================\n");
  printf("1 - Cadastrar novo filme\n");
  printf("2 - Exibir todos os filmes\n");
  printf("3 - Listar filmes por gênero\n");
  printf("4 - Listar filme por status\n");
  printf("5 - Listar por classifição indicativa\n");
  printf("6 - Buscar filme por código\n");
  printf("7 - Buscar filme por título\n");
  printf("8 - Atualizar status do filme\n");
  printf("9 - Excluir filme\n");
  printf("10 - Salvar e carregar dados de/para um arquivo texto\n");
  printf("11 - Sair\n");
  printf("==========================================================\n");
}

void cadastrarFilmes(Filmes filme[], int *totalFilmes, int *id, int *acao, int *comedia, int *drama, int *terror, int *ficcao, int *animacao, int *romance)
{
  if(*totalFilmes >= MAX_FILME) 
  {
    printf("\nO sistema atingiu o número máximo de filmes!\n"); 
  }

  else
  {
    int i = *totalFilmes;
    printf("\n-------------------- NOVO FILME --------------------\n");
    printf("Insira o título do filme: ");
    scanf("%49[^\n]", filme[i].titulo);
    getchar();
  
    filme[i].codigo = *id;

    generosFilme(filme, totalFilmes, acao, comedia, drama, terror, ficcao, animacao, romance);
  
    printf("Insira o ano de lançamento do filme: ");
    scanf("%i", &filme[i].anoLancamento);
  
    while(filme[i].anoLancamento < 1888 || filme[i].anoLancamento > 2025)
    {
      if(filme[i].anoLancamento > 2025)
      {
        printf("\nEstamos em 2025, é impossível um fime nesse data\n");
        printf("Insira o ano de lançamento do filme: ");
        scanf("%i", &filme[i].anoLancamento);
      }
  
      else if(filme[i].anoLancamento < 1888)
      {
        printf("\nO primeiro filme curta-metragem foi lançado em 1888, é impossível um fime antes dessa data\n");
        printf("Insira o ano de lançamento do filme: ");
        scanf("%i", &filme[i].anoLancamento);
      }
  
      else
      {
        printf("Ano de lançamento aceito\n");
      }
    }
  
    classificacaoFilme(filme, totalFilmes);
  
    filme[i].status = ESTREIA;
    printf("----------------------------------------------------\n");
  
    printf("\n--------------- FILME ---------------\n");
    printf("Título: %s\n", filme[i].titulo);
    printf("Código: %i\n", filme[i].codigo);
    printarGenero(filme, totalFilmes);
    printf("Ano de lançamento: %i\n", filme[i].anoLancamento);
    printarClassificacao(filme, totalFilmes);
    printarStatus(filme, totalFilmes);
    printf("-------------------------------------\n\n");
  
    (*id)++;
    (*totalFilmes)++;
  }
}

void exibirFilmes(Filmes filme[], int *totalFilmes)
{
  if(*totalFilmes == 0)
  {
    printf("\nNão tem nenhum filme cadastrado\n\n");
  }

  else
  {
    printf("\n-------------------- FILMES CADASTRADOS --------------------\n\n");
    for(int i = 0; i < *totalFilmes; i++)
    {
      printf("\n--------------- CÓDIGO(%i) ---------------\n", filme[i].codigo);
      printf("Título: %s\n", filme[i].titulo);
      printarGenero(filme, totalFilmes);
      printf("Ano de lançamento: %i\n", filme[i].anoLancamento);
      printarClassificacao(filme, totalFilmes);
      printarStatus(filme, totalFilmes);
      printf("--------------------------------------------\n\n");
    }
    printf("------------------------------------------------------------\n\n");
  }
}

void listarGenero(Filmes filme[], int *totalFilmes, int *acao, int *comedia, int *drama, int *terror, int *ficcao, int *animacao, int *romance)
{
  if(*totalFilmes == 0)
  {
    printf("\nNão tem nenhum filme cadastrado\n\n");
  }

  else
  {
    int opcao;
    menuGeneros();
    printf("Escolha uma opção: ");
    scanf("%i", &opcao);

    switch(opcao)
    {
      case 1: listarAcao(filme, totalFilmes, acao); break;
      case 2: listarComedia(filme, totalFilmes, comedia); break;
      case 3: listarDrama(filme, totalFilmes, drama); break;
      case 4: listarTerror(filme, totalFilmes, terror); break;
      case 5: listarFiccao(filme, totalFilmes, ficcao); break;
      case 6: listarAnimacao(filme, totalFilmes, animacao); break;
      default: listarRomance(filme, totalFilmes, romance); break;
    }
  }
}

int main()
{
  int totalFilmes = 0, id = 1001;
  int opcao;
  int acao = 0, comedia = 0, drama = 0, terror = 0, ficcao = 0, animacao = 0, romance = 0;
  
  Filmes filme[MAX_FILME];

  do
  {
    menu();
    printf("Escolha uma opção: ");
    scanf("%i", &opcao);
    getchar();
    
    switch(opcao)
    {
      case 1: cadastrarFilmes(filme, &totalFilmes, &id, &acao, &comedia, &drama, &terror, &ficcao, &animacao, &romance); break;
      case 2: exibirFilmes(filme, &totalFilmes); break;
      case 3: listarGenero(filme, &totalFilmes, &acao, &comedia, &drama, &terror, &ficcao, &animacao, &romance); break;
    }
  }
  while(opcao != 11);
  
  return 0;
}