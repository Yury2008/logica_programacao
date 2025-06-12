#include <stdio.h>

typedef struct{

  char rua[100], cidade[50];
  int numero;

} Endereco;

typedef struct{

  char nome[50], cargo[50];

} Funcionario;

void cadastroFuncionario(Funcionario proletariado[], Endereco moradiaDoCidadao[]){
  printf("----- CADASTRO -----");
  for(int i = 0; i < 2; i++){
    
    printf("\n%iº Funcionário\n", i + 1);
    printf("Nome: ");
    scanf("%49[^\n]", proletariado[i].nome);
    getchar();
    
    printf("Cargo: ");
    scanf("%49[^\n]", proletariado[i].cargo);
    getchar();
    
    printf("Rua: ");
    scanf("%99[^\n]", moradiaDoCidadao[i].rua);
    getchar();
    
    printf("Número: ");
    scanf("%i", &moradiaDoCidadao[i].numero);
    getchar();
    
    printf("Cidade: ");
    scanf("%49[^\n]", moradiaDoCidadao[i].cidade);
    getchar();
    
  }
}
void dadosFuncionario(Funcionario proletariado[], Endereco moradiaDoCidadao[]){
  printf("\n----- DADOS FUNCIONÁRIOS -----");
  for(int i = 0; i < 2; i++){
    printf("\nFuncionário: %s\n", proletariado[i].nome);
    printf("Cargo: %s\n", proletariado[i].cargo);
    printf("Endereço: %s, %i - %s\n", moradiaDoCidadao[i].rua, moradiaDoCidadao[i].numero, moradiaDoCidadao[i].cidade);
  }
}


int main(){
  
  Funcionario proletariado[2];
  Endereco moradiaDoCidadao[2];

  cadastroFuncionario(proletariado, moradiaDoCidadao);
  dadosFuncionario(proletariado, moradiaDoCidadao);
  
  return 0;
}