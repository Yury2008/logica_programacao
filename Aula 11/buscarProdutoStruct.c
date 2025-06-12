#include <stdio.h>
#include <string.h>

typedef struct {
  
  char nome[50];
  float preco;

} produto;

int buscarProduto(produto Produtos[], char produtoBuscar[50]){
  
  printf("\nQual produto deseja procurar? ");
  scanf("%49[^\n]", produtoBuscar);

  for(int i = 0; i < 3; i++){
    if(strcmp(produtoBuscar, Produtos[i].nome) == 0) {
      printf("\nO produto '%s' custa R$%.2f", Produtos[i].nome, Produtos[i].preco); 
      return i;
    }
  }
  printf("Produto não encontrado.");
  return -1;
}

int main(){

  produto Produtos[3];

  printf("--- CADASTRO ---");
  for(int i = 0; i < 3; i++){
    printf("\nProduto %i", i + 1);
    printf("\nNome: ");
    scanf("%49[^\n]", Produtos[i].nome);
    printf("Preço: ");
    scanf("%f", &Produtos[i].preco);
    getchar();
  }
  
  char produtoBuscar[50];
  int indiceProduto = buscarProduto(Produtos, produtoBuscar);
  
  return 0;
}