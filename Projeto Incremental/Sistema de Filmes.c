#include <stdio.h>
#include <string.h>
#define MAX_FILME 100

enum Status { NADA, ESTREIA, EMCARTAZ, FORADOCINE };
enum Classificacao { NULO, AL, A10, A12, A14, A16, A18 };
enum Genero { ZERO, Acao_Aventura, Comedia, Drama, Terror, Ficcao_Cientifica, Animacao, Romance };
enum Critica { MUNDIAL_DO_PALMEIRAS, HORRIVEL, FRACO, RUIM, MAIS_OU_MENOS, DIVERTIDO, MTO_BOM, INCRIVEL, ABSOLUTE_CINEMA };

typedef struct { int somaRoteiro; int somaDirecao; int somaAtuacao; int somaFotografia; int somaEdicao; int somaTrilhaSonora; } Soma;

typedef struct { int roteiro; int direcao; int atuacao; int fotografia; int edicao; int trilhaSonora; int qtdAvaliacao; float notaFinal; enum Critica critica; Soma somaCriterios; } Avaliacao;

typedef struct { int codigo; char titulo[50]; int anoLancamento; enum Status status; enum Genero genero; enum Classificacao indicativa; Avaliacao avalicoes; } Filmes;

// Funções para inprimir algo na tela

void printarGenero(Filmes filme[], int i);
void printarClassificacao(Filmes filme[], int i);
void printarStatus(Filmes filme[], int i);
void printarCritica(Filmes filme[], int i);
void printarFilme(Filmes filme[], int i);

// Funções sobre gêneros

void menuGeneros();
void generosFilme(Filmes filme[], int totalFilmes, int *acao, int *comedia, int *drama, int *terror, int *ficcao, int *animacao, int *romance);

// Funções sobre status

void menuStatus();

//Funções sobre classificação indicativa

void menuClassificacao();
void classificacaoFilme(Filmes filme[], int totalFilmes, int *al, int *a10, int *a12, int *a14, int *a16, int *a18);

// Funções da função início

void menu();
void cadastrarFilmes(Filmes filme[], int *totalFilmes, int *id, int *estreia, int *acao, int *comedia, int *drama, int *terror, int *ficcao, int *animacao, int *romance, int *al, int *a10, int *a12, int *a14, int *a16, int *a18);
int codigoExiste(Filmes filme[], int totalFilmes);
int tituloExiste(Filmes filme[], int totalFilmes);
void exibirFilmes(Filmes filme[], int totalFilmes);
void listarGenero(Filmes filme[], int totalFilmes, int acao, int comedia, int drama, int terror, int ficcao, int animacao, int romance);
void listarStatus(Filmes filme[], int totalFilmes, int estreia, int emCartaz, int foraCine);
void listarClassificacao(Filmes filme[], int totalFilmes, int al, int a10, int a12, int a14, int a16, int a18);
void filmeCodigo(Filmes filme[], int totalFilmes);
void filmeTitulo(Filmes filme[], int totalFilmes);
void atualizarStatus(Filmes filme[], int totalFilmes, int *estreia, int *emCartaz, int *foraCine);
void avaliarFilme(Filmes filme[], int totalFilmes);
void deletarFilme(Filmes filme[], int *totalFilmes);
void salvarDados(Filmes filme[], int *totalFilmes);
void carregarDados(Filmes filme[], int *i, int *atualID);

// Fim das funções

int main()
{
  // Variáveis "globais"
  int totalFilmes = 0, id = 1001;

  Filmes filme[MAX_FILME];

  // Inicialização de classificação indicativa
  int al = 0, a10 = 0, a12 = 0, a14 = 0, a16 = 0, a18 = 0; 

  // Inicialização de gênero
  int acao = 0, comedia = 0, drama = 0, terror = 0, ficcao = 0, animacao = 0, romance = 0;

  // Inicialização de status
  int estreia = 0, emCartaz = 0, foraCine = 0;

  carregarDados(filme, &totalFilmes, &id);

  int opcao;

  do
  {
    menu();
    printf("Escolha uma opção: ");
    scanf("%i", &opcao);
    getchar();

    while(opcao > 11 || opcao < 1)
    {
      printf("\nOpção inválida. Tente novamente\n");
      printf("Escolha a opção: ");
      scanf("%i", &opcao);
      getchar();
    }

    switch(opcao)
    {
      case 1: cadastrarFilmes(filme, &totalFilmes, &id, &estreia, &acao, &comedia, &drama, &terror, &ficcao, &animacao, &romance, &al, &a10, &a12, &a14, &a16, &a18); break;
      case 2: exibirFilmes(filme, totalFilmes); break;
      case 3: listarGenero(filme, totalFilmes, acao, comedia, drama, terror, ficcao, animacao, romance); break;
      case 4: listarStatus(filme, totalFilmes, estreia, emCartaz, foraCine); break;
      case 5: listarClassificacao(filme, totalFilmes, al, a10, a12, a14, a16, a18); break;
      case 6: filmeCodigo(filme, totalFilmes); break;
      case 7: filmeTitulo(filme, totalFilmes); break;
      case 8: atualizarStatus(filme, totalFilmes, &estreia, &emCartaz, &foraCine); break;
      case 9: avaliarFilme(filme, totalFilmes); break;
      case 10: deletarFilme(filme, &totalFilmes); break;
      case 11: salvarDados(filme, &totalFilmes); printf("\nSaindo...\n\n"); break;
      default: printf("\nOpção inválida\n\n"); break;
    }
  }
  while(opcao != 11);

  return 0;
}

// Funções para inprimir algo na tela

void printarGenero(Filmes filme[], int i) 
{
  switch(filme[i].genero) 
  {
    case Acao_Aventura: printf("Gênero: Ação e Aventura\n"); break;
    case Comedia: printf("Gênero: Comédia\n"); break;
    case Drama: printf("Gênero: Drama\n"); break;
    case Terror: printf("Gênero: Terror\n"); break;
    case Ficcao_Cientifica: printf("Gênero: Ficção Científica\n"); break;
    case Animacao: printf("Gênero: Animacao\n"); break;
    default: printf("Gênero: Romance\n"); break;
  }
}

void printarClassificacao(Filmes filme[], int i) 
{
  switch(filme[i].indicativa) 
  {
    case AL: printf("Classificação: AL\n"); break;
    case A10: printf("Classificação: A10\n"); break;
    case A12: printf("Classificação: A12\n"); break;
    case A14: printf("Classificação: A14\n"); break;
    case A16: printf("Classificação: A16\n"); break;
    case A18: printf("Classificação: A18\n"); break;
    default: printf("Classificação: Inválida\n"); break;
  }
}

void printarStatus(Filmes filme[], int i) 
{
  switch(filme[i].status) 
  {
    case ESTREIA: printf("Status: Em estreia\n"); break;
    case EMCARTAZ: printf("Status: Em cartaz\n"); break;
    case FORADOCINE: printf("Status: Fora dos cinemas\n"); break;
    default: printf("Status: Inválido\n"); break;
  }
}

void printarCritica(Filmes filme[], int i)
{
  switch(filme[i].avalicoes.critica)
  {
    case MUNDIAL_DO_PALMEIRAS: printf("Avaliação: N/D\n"); break;
    case HORRIVEL: printf("Avaliação: Horrível\n"); break;
    case FRACO: printf("Avaliação: Fraco\n"); break;
    case RUIM: printf("Avaliação: Ruim\n"); break;
    case MAIS_OU_MENOS: printf("Avaliação: Mais ou menos\n"); break;
    case DIVERTIDO: printf("Avaliação: Divertido\n"); break;
    case MTO_BOM: printf("Avaliação: Muito bom\n"); break;
    case INCRIVEL: printf("Avaliação: Incrível\n"); break;
    default: printf("Avaliação: Absolute Cinema\n"); break;
  }
}

void printarFilme(Filmes filme[], int i)
{
  printf("\n--------------- CÓDIGO(%i) ---------------\n", filme[i].codigo);
  printf("Título: %s\n", filme[i].titulo);
  printf("Código: %i\n", filme[i].codigo);
  printarGenero(filme, i);
  printf("Ano de lançamento: %i\n", filme[i].anoLancamento);
  printarClassificacao(filme, i);
  printarStatus(filme, i);
  printarCritica(filme, i);
  printf("Nota: %.2f\n", filme[i].avalicoes.notaFinal);
  printf("Quantidade de avaliações: %i\n", filme[i].avalicoes.qtdAvaliacao);
  printf("--------------------------------------------\n\n");
}

// Funções sobre gêneros

void menuGeneros()
{
  printf("\n==================== GÊNEROS ====================\n");
  printf("1 - Ação e Aventura    5 - Ficção Científica\n\n");
  printf("2 - Comedia            6 - Animacao\n\n");
  printf("3 - Drama              7 - Romance\n\n");
  printf("4 - Terror\n");
  printf("=================================================\n");
}

void generosFilme(Filmes filme[], int totalFilmes, int *acao, int *comedia, int *drama, int *terror, int *ficcao, int *animacao, int *romance)
{
  int opcao, i = totalFilmes;

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
      case 1: filme[i].genero = Acao_Aventura; (*acao)++; break;
      case 2: filme[i].genero = Comedia; (*comedia)++; break;
      case 3: filme[i].genero = Drama; (*drama)++; break;
      case 4: filme[i].genero = Terror; (*terror)++; break;
      case 5: filme[i].genero = Ficcao_Cientifica; (*ficcao)++; break;
      case 6: filme[i].genero = Animacao; (*animacao)++; break;
      default: filme[i].genero = Romance; (*romance)++; break;
    }
  }
}

// Menu Status

void menuStatus()
{
  printf("\n========== STATUS ==========\n");
  printf("1 - Estreia\n\n");
  printf("2 - Em cartaz\n\n");
  printf("3 - Fora do cinema\n");
  printf("============================\n\n");
}

//Funções sobre classificação indicativa

void menuClassificacao()
{
  printf("\n========== CLASSIFICAÇÃO INDICATIVA ==========\n");
  printf("1 - AL    4 - A14\n\n");
  printf("2 - A10   5 - A16\n\n");
  printf("3 - A12   6 - A18\n");
  printf("==============================================\n");
}

void classificacaoFilme(Filmes filme[], int totalFilmes, int *al, int *a10, int *a12, int *a14, int *a16, int *a18)
{
  int opcao, i = totalFilmes;

  menuClassificacao();
  printf("Escolha a opção: ");
  scanf("%i", &opcao);

  while(opcao > 6 || opcao < 1)
  {
    printf("\nOpção inválida. Tente novamente\n");
    printf("Escolha a opção: ");
    scanf("%i", &opcao);
  }

  switch(opcao)
  {
    case 1: filme[i].indicativa = AL; (*al)++; break;
    case 2: filme[i].indicativa = A10; (*a10)++; break;
    case 3: filme[i].indicativa = A12; (*a12)++; break;
    case 4: filme[i].indicativa = A14; (*a14)++; break;
    case 5: filme[i].indicativa = A16; (*a16)++; break;
    default: filme[i].indicativa = A18; (*a18)++; break;
  }
}

// Função atualizar status

void menuAtualizar()
{
  printf("\n========== ATUALIZAR O FILME PARA ... ==========\n");
  printf("1 - Em cartaz\n");
  printf("2 - Fora do cinema\n");
  printf("3 - Retornar ao cinema\n");
  printf("================================================\n");
}

// Funções da função início

void menu()
{
  printf("=================================== FILMES ===================================\n");
  printf("1 - Cadastrar novo filme                7 - Buscar filme por título\n\n");
  printf("2 - Exibir todos os filmes              8 - Atualizar status do filme\n\n");
  printf("3 - Listar filmes por gênero            9 - Avaliar filme\n\n");
  printf("4 - Listar filme por status             10 - Excluir filme\n\n");
  printf("5 - Listar por classifição indicativa   11 - Sair\n\n");
  printf("6 - Buscar filme por código\n");
  printf("==============================================================================\n");
}

void cadastrarFilmes(Filmes filme[], int *totalFilmes, int *id, int *estreia, int *acao, int *comedia, int *drama, int *terror, int *ficcao, int *animacao, int *romance, int *al, int *a10, int *a12, int *a14, int *a16, int *a18)
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

    generosFilme(filme, *totalFilmes, acao, comedia, drama, terror, ficcao, animacao, romance);

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

    classificacaoFilme(filme, *totalFilmes, al, a10, a12, a14, a16, a18);

    filme[i].avalicoes.notaFinal = 0;
    filme[i].avalicoes.critica = MUNDIAL_DO_PALMEIRAS;
    filme[i].avalicoes.qtdAvaliacao = 0;
    
    filme[i].status = ESTREIA;
    printf("-----------------------------------------------------\n");

    printarFilme(filme, i);

    (*estreia)++;
    (*id)++;
    (*totalFilmes)++;
  }
}

int codigoExiste(Filmes filme[], int totalFilmes)
{
  int buscarCodigo;
  printf("\nInsira o código que deseja procurar: ");
  scanf("%i", &buscarCodigo);
  getchar();

  for(int i = 0; i < totalFilmes; i++)
  {
    if(buscarCodigo == filme[i].codigo) return i;
  }

  return -1;
}

int tituloExiste(Filmes filme[], int totalFilmes)
{
  char buscarTitulo[50];
  printf("\nInsira o titulo que deseja procurar: ");
  scanf("%49[^\n]", buscarTitulo);
  getchar();

  for(int i = 0; i < totalFilmes; i++)
  {
   if(strcmp(buscarTitulo, filme[i].titulo) == 0) return i;
  }

  return -1;
}

void exibirFilmes(Filmes filme[], int totalFilmes)
{
  if(totalFilmes == 0)
  {
    printf("\nNão tem nenhum filme cadastrado\n\n");
  }

  else
  {
    printf("\n-------------------- FILMES CADASTRADOS --------------------\n\n");
    for(int i = 0; i < totalFilmes; i++)
    {
      printarFilme(filme, i);
    }
    printf("------------------------------------------------------------\n\n");
  }
}

void listarGenero(Filmes filme[], int totalFilmes, int acao, int comedia, int drama, int terror, int ficcao, int animacao, int romance)
{
  if(totalFilmes == 0)
  {
    printf("\nNão tem nenhum filme cadastrado\n\n");
  }

  else
  {
    int opcao;
    int encontrou = 0;
    menuGeneros();
    printf("Escolha uma opção: ");
    scanf("%i", &opcao);

    while(opcao > 7 || opcao < 1)
    {
      printf("\nOpção inválida. Tente novamente\n");
      printf("Escolha a opção: ");
      scanf("%i", &opcao);
    }
    
    for(int i = 0; i < totalFilmes; i++)
    {
      if(filme[i].genero == opcao)
      {
        printarFilme(filme, i);
        encontrou++;
      }
    }

    if(encontrou == 0)
    {
      switch(opcao)
      {
        case Acao_Aventura: printf("\nNão tem filmes de ação\n\n"); break;
        case Comedia: printf("\nNão tem filmes de comédia\n\n"); break;
        case Drama: printf("\nNão tem filmes de drama\n\n"); break;
        case Terror: printf("\nNão tem filmes de terror\n\n"); break;
        case Ficcao_Cientifica: printf("\nNão tem filmes de ficção científica\n\n"); break;
        case Animacao: printf("\nNão tem filmes de animação\n\n"); break;
        default: printf("\nNão tem filmes de romance\n\n"); break;
      }
    }
  }
}

void listarStatus(Filmes filme[], int totalFilmes, int estreia, int emCartaz, int foraCine)
{
  if(totalFilmes == 0)
  {
    printf("\nNão tem nenhum filme cadastrado\n\n");
  }

  else
  {
    int opcao;
    int encontrou = 0;
    menuStatus();
    printf("Escolha a opção: ");
    scanf("%i", &opcao);

    while(opcao > 3 || opcao < 1)
    {
      printf("\nOpção inválida. Tente novamente\n");
      printf("Escolha a opção: ");
      scanf("%i", &opcao);
    }

    for(int i = 0; i < totalFilmes; i++)
    {
      if(filme[i].status == opcao)
      {
        printarFilme(filme, i);
        encontrou++;
      }
    }

    if(encontrou == 0)
    {
      switch(opcao)
      {
        case ESTREIA: if(estreia == 0) printf("\nNão tem filmes em estreia\n\n"); break;
        case EMCARTAZ: if(emCartaz == 0) printf("\nNão tem filmes em cartaz\n\n"); break;
        default: if(foraCine == 0) printf("\nNão tem filmes fora do cinema\n\n"); break;
      }
    }
  }
}

void listarClassificacao(Filmes filme[], int totalFilmes, int al, int a10, int a12, int a14, int a16, int a18)
{
  if(totalFilmes == 0)
  {
    printf("\nNão tem nenhum filme cadastrado\n\n");
  }

  else
  {
    int opcao;
    int encontrou = 0;
    menuClassificacao();
    printf("Escolha a opção: ");
    scanf("%i", &opcao);

    while(opcao > 6 || opcao < 1)
    {
      printf("\nOpção inválida. Tente novamente\n");
      printf("Escolha a opção: ");
      scanf("%i", &opcao);
    }
    
    for(int i = 0; i < totalFilmes; i++)
    {
     if(filme[i].indicativa == opcao)
     {
       printarFilme(filme, i);
       encontrou++;
     }
    }

    if(encontrou == 0)
    {
      switch(opcao)
      {
        case AL: if(al == 0) printf("\nNão tem filmes com essa classificação\n\n"); break;
        case A10: if(a10 == 0) printf("\nNão tem filmes com essa classificação\n\n"); break;
        case A12: if(a12 == 0) printf("\nNão tem filmes com essa classificação\n\n"); break;
        case A14: if(a14 == 0) printf("\nNão tem filmes com essa classificação\n\n"); break;
        case A16: if(a16 == 0) printf("\nNão tem filmes com essa classificação\n\n"); break;
        default: if(a18 == 0) printf("\nNão tem filmes com essa classificação\n\n"); 
      }
    }
  }
}

void filmeCodigo(Filmes filme[], int totalFilmes)
{
  if(totalFilmes == 0)
  {
    printf("\nNão tem nenhum filme cadastrado\n\n");
  }

  else
  {
    int j = codigoExiste(filme, totalFilmes);

    if(j != -1)
    {
      printarFilme(filme, j);
    }

    else
    {
      printf("\nO seu código não foi encontrado\n\n");
    }
  }
}

void filmeTitulo(Filmes filme[], int totalFilmes)
{
  if(totalFilmes == 0)
  {
    printf("\nNão tem nenhum filme cadastrado\n\n");
  }

  else
  {
    int j = tituloExiste(filme, totalFilmes);

    if(j != -1)
    {
      printarFilme(filme, j);
    }

    else
    {
      printf("\nO seu código não foi encontrado\n\n");
    }
  }
}

void atualizarStatus(Filmes filme[], int totalFilmes, int *estreia, int *emCartaz, int *foraCine)
{
  if(totalFilmes == 0)
    {
      printf("\nNão tem nenhum filme cadastrado\n\n");
    }

  else
  {
    int j = tituloExiste(filme, totalFilmes);

    if(j != -1)
    {
      int opcao;
      menuAtualizar();
      printf("Escolha uma opção: ");
      scanf("%i", &opcao);

      while(opcao > 3 || opcao < 1)
      {
        printf("\nOpção inválida. Tente novamente\n");
        printf("Escolha a opção: ");
        scanf("%i", &opcao);
      }

      if(opcao == 2 && filme[j].status == ESTREIA) printf("\nNão é possível o filme fazer estreia e já sair dos cinemas!\n\n");
      else if(opcao == 2 && filme[j].status == FORADOCINE) printf("\nEsse título já está fora do cinema!\n\n");
      else if(opcao == 1 && filme[j].status == EMCARTAZ) printf("\nEsse título já está em cartaz\n\n");
      else if(opcao == 3 && filme[j].status != FORADOCINE) printf("\nNão é possível um filme retornar ao cinema sendo que ele já está nos cinemas\n\n");

      else
      {
        switch(opcao)
        {
          case 1: filme[j].status = EMCARTAZ; (*estreia)--; (*emCartaz)++; break;
          case 2: filme[j].status = FORADOCINE; (*emCartaz)--; (*foraCine)++; break;
          default: filme[j].status = EMCARTAZ; (*foraCine)--; (*emCartaz)++; break;
        }
      }
    }
  }
}

void avaliarFilme(Filmes filme[], int totalFilmes)
{
  if(totalFilmes == 0)
  {
    printf("\nNão tem nenhum filme cadastrado\n\n");
  }

  else
  {
    int j = tituloExiste(filme, totalFilmes);

    if(j != -1)
    {
      filme[j].avalicoes.qtdAvaliacao++;

      printf("\nInsira a nota do roteiro: ");
      scanf("%i", &filme[j].avalicoes.roteiro);

      while(filme[j].avalicoes.roteiro > 10 || filme[j].avalicoes.roteiro < 0)
      {
        printf("\nA nota deve ser de 0 a 10. Tente novamente\n");
        printf("Insira a nota do roteiro: ");
        scanf("%i", &filme[j].avalicoes.roteiro);
      }

      filme[j].avalicoes.somaCriterios.somaRoteiro += filme[j].avalicoes.roteiro;

      printf("\nInsira a nota da direção: ");
      scanf("%i", &filme[j].avalicoes.direcao);

      while(filme[j].avalicoes.direcao > 10 || filme[j].avalicoes.direcao < 0)
      {
        printf("\nA nota deve ser de 0 a 10. Tente novamente\n");
        printf("Insira a nota da direção: ");
        scanf("%i", &filme[j].avalicoes.direcao);
      }

      filme[j].avalicoes.somaCriterios.somaDirecao += filme[j].avalicoes.direcao;

      printf("\nInsira a nota da atuação: ");
      scanf("%i", &filme[j].avalicoes.atuacao);

      while(filme[j].avalicoes.atuacao > 10 || filme[j].avalicoes.atuacao < 0)
      {
        printf("\nA nota deve ser de 0 a 10. Tente novamente\n");
        printf("Insira a nota da atuação: ");
        scanf("%i", &filme[j].avalicoes.atuacao);
      }

      filme[j].avalicoes.somaCriterios.somaAtuacao += filme[j].avalicoes.atuacao;

      printf("\nInsira a nota da fotografia: ");
      scanf("%i", &filme[j].avalicoes.fotografia);

      while(filme[j].avalicoes.fotografia > 10 || filme[j].avalicoes.fotografia < 0)
      {
        printf("\nA nota deve ser de 0 a 10. Tente novamente\n");
        printf("Insira a nota da fotografia: ");
        scanf("%i", &filme[j].avalicoes.fotografia);
      }

      filme[j].avalicoes.somaCriterios.somaFotografia += filme[j].avalicoes.fotografia;

      printf("\nInsira a nota da edição: ");
      scanf("%i", &filme[j].avalicoes.edicao);

      while(filme[j].avalicoes.edicao > 10 || filme[j].avalicoes.edicao < 0)
      {
        printf("\nA nota deve ser de 0 a 10. Tente novamente\n");
        printf("Insira a nota da edição: ");
        scanf("%i", &filme[j].avalicoes.edicao);
      }

      filme[j].avalicoes.somaCriterios.somaEdicao += filme[j].avalicoes.edicao;

      printf("\nInsira a nota da trilha sonora: ");
      scanf("%i", &filme[j].avalicoes.trilhaSonora);

      while(filme[j].avalicoes.trilhaSonora > 10 || filme[j].avalicoes.trilhaSonora < 0)
      {
        printf("\nA nota deve ser de 0 a 10. Tente novamente\n");
        printf("Insira a nota da edição: ");
        scanf("%i", &filme[j].avalicoes.trilhaSonora);
      }

      filme[j].avalicoes.somaCriterios.somaTrilhaSonora += filme[j].avalicoes.trilhaSonora;

      int somaTotal = filme[j].avalicoes.somaCriterios.somaRoteiro +
                      filme[j].avalicoes.somaCriterios.somaDirecao +
                      filme[j].avalicoes.somaCriterios.somaAtuacao +
                      filme[j].avalicoes.somaCriterios.somaFotografia +
                      filme[j].avalicoes.somaCriterios.somaEdicao +
                      filme[j].avalicoes.somaCriterios.somaTrilhaSonora;

      float mediaGeral = (float) somaTotal / (filme[j].avalicoes.qtdAvaliacao * 6);
      filme[j].avalicoes.notaFinal = mediaGeral;

      if(mediaGeral < 2) filme[j].avalicoes.critica = HORRIVEL;
      else if(mediaGeral < 4) filme[j].avalicoes.critica = RUIM;
      else if(mediaGeral < 6) filme[j].avalicoes.critica = MAIS_OU_MENOS;
      else if(mediaGeral < 7.5) filme[j].avalicoes.critica = DIVERTIDO;
      else if(mediaGeral < 8) filme[j].avalicoes.critica = MTO_BOM;
      else if(mediaGeral < 9) filme[j].avalicoes.critica = INCRIVEL;
      else {filme[j].avalicoes.critica = ABSOLUTE_CINEMA;}
    }

    else
    {
      printf("\nO seu código não foi encontrado\n\n");
    }
  }
}

void deletarFilme(Filmes filme[], int *totalFilmes)
{
  if (totalFilmes == 0)
  {
    printf("\nNão tem nenhum filme cadastrado\n\n");
  }

  else
  {
    int j = codigoExiste(filme, *totalFilmes);

    if (j != -1)
    {
      printf("\nFilme \"%s\" com código %i será excluído...\n", filme[j].titulo, filme[j].codigo);

      for (int i = j; i < *totalFilmes - 1; i++)
      {
        filme[i] = filme[i + 1];
      }

      (*totalFilmes)--;

      printf("Filme excluído com sucesso!\n\n");
    }
    else
    {
      printf("\nO seu código não foi encontrado\n\n");
    }
  }
}

void salvarDados(Filmes filme[], int *totalFilmes)
{
  FILE *arquivo = fopen("filmes.txt", "w");

  if (arquivo == NULL)
  {
    printf("Erro ao abrir o arquivo para escrita.\n");
    return;
  }

  for(int i = 0; i < *totalFilmes; i++)
  {
    fprintf(arquivo, "%i,%s, %i, %i, %i, %i, %i, %.2f, %i\n", filme[i].codigo, filme[i].titulo, filme[i].anoLancamento, filme[i].status, filme[i].genero, filme[i].indicativa, filme[i].avalicoes.critica, filme[i].avalicoes.notaFinal, filme[i].avalicoes.qtdAvaliacao);
  }

  fclose(arquivo);
}

void carregarDados(Filmes filme[], int *i, int *atualID)
{
  FILE *arquivo = fopen("filmes.txt", "r");

  if (arquivo == NULL)
  {
    printf("Nenhum arquivo de dados encontrado. Começando com dados vazios.\n");
    return;
  }

  while(fscanf(arquivo, "%i,%[^,], %i, %i, %i, %i, %i, %f, %i\n", &filme[*i].codigo, filme[*i].titulo, &filme[*i].anoLancamento, &filme[*i].status, &filme[*i].genero, &filme[*i].indicativa, &filme[*i].avalicoes.critica, &filme[*i].avalicoes.notaFinal, &filme[*i].avalicoes.qtdAvaliacao) != EOF)
  {
    (*i)++;
  }

  if (*i > 0) 
  {
    *atualID = filme[*i - 1].codigo + 1;
  }
  else 
  {
    *atualID = 1001;
  }

  fclose(arquivo);
}
