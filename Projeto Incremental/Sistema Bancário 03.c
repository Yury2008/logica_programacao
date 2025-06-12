#include <stdio.h>
#define MAX_CONTAS 100

int ids = 1001;
int totalContas = 0;

typedef struct {
    int numero;       
    char nome[100];  
    float saldo;      
} Conta;

void mostrarMenu(){
    printf("===== Menu =====\n");
    printf("1 - Criar Conta\n");
    printf("2 - Exibir Conta\n");
    printf("3 - Depositar\n");
    printf("4 - Sacar\n");
    printf("5 - Buscar Conta\n");
    printf("0 - Sair\n");
    printf("================\n");
    printf("Escolha a opção: ");
}
int contaExiste(Conta contas[], int procurarID){
    
    if(totalContas == 0){
        printf("\nNão há nenhuma conta cadastrada\n");
        return -2;
    }

    for(int i = 0; i < totalContas; i++){
        if(contas[i].numero == procurarID){
            return i;
        }
    }
    return -1;
}
void criarConta(Conta contas[]){
    
    if(totalContas >= MAX_CONTAS){
        printf("\nNúmero máximo de contas cadastradas.\n");
    }
    
        printf("\n----- CADASTRO -----\n");
        printf("Nome: ");
        scanf("%99[^\n]", contas[totalContas].nome);
        contas[totalContas].numero = ids;
        contas[totalContas].saldo = 0;
        printf("--------------------\n");

        printf("\nOlá, %s! Sua conta foi criada com sucesso.\n", contas[totalContas].nome);
        
        printf("\n----- DADOS -----\n");
        printf("Nome: %s\n", contas[totalContas].nome);
        printf("ID: %i\n", contas[totalContas].numero);
        printf("Saldo: R$%.2f\n", contas[totalContas].saldo);
        printf("-----------------\n\n");

        ids++;
        totalContas++;

}
void exibirConta(Conta contas[]){
    
    if(totalContas <= 0) printf("\nNão há nenhuma conta criada.\n");
    
    printf("\n----- DADOS CADASTRADOS -----\n");
    for(int i = 0; i < totalContas; i++){
        printf("\n----- %iº Conta -----\n", i + 1);
        printf("Nome: %s\n", contas[i].nome);
        printf("ID: %i\n", contas[i].numero);
        printf("Saldo: R$%.2f\n\n", contas[i].saldo);
        printf("--------------------\n\n");
    }
    printf("-----------------------------\n");
}
void depositar(Conta contas[]){
    
    int procurarID;
    printf("\nInforme o ID da conta: ");
    scanf("%i", &procurarID);
    getchar();

    int i = contaExiste(contas, procurarID);

    if(i == -1) printf("\nConta não encontrada.\n\n");

    if(i >= 0){
        
        float valorDeposito;
        printf("Informe o valor do depósito: ");
        scanf("%f", &valorDeposito);
        getchar();

        if(valorDeposito <= 0){
            printf("Valor Inválido.\n\n");
        }
        else{
            
            contas[i].saldo += valorDeposito;
            
            printf("\n----- DADOS ATUALIZADOS -----\n");
            printf("Nome: %s\n", contas[i].nome);
            printf("ID: %i\n", contas[i].numero);
            printf("Saldo: R$%.2f\n", contas[i].saldo);
            printf("-----------------------------\n\n");
            
        }
        
    }
    
}
void sacar(Conta contas[]){
    
    int procurarID;
    printf("\nInforme o ID da conta: ");
    scanf("%i", &procurarID);
    getchar();

    int i = contaExiste(contas, procurarID);

    if(i == -1) printf("\nConta não encontrada.\n\n");

    if(i >= 0){

        float valorSaque;
        printf("Informe o valor do saque: ");
        scanf("%f", &valorSaque);
        getchar();

        if(valorSaque > contas[i].saldo){
            printf("Valor Inválido.\n\n");
        }

        else{
            
            contas[i].saldo -= valorSaque;

            printf("\n----- DADOS ATUALIZADOS -----\n");
            printf("Nome: %s\n", contas[i].nome);
            printf("ID: %i\n", contas[i].numero);
            printf("Saldo: R$%.2f\n", contas[i].saldo);
            printf("-----------------------------\n\n");
            
        }

    }
}
void buscarConta(Conta contas[]){
     
    int procurarID;
    printf("\nInforme o ID da conta: ");
    scanf("%i", &procurarID);
    getchar();

    int i = contaExiste(contas, procurarID);

    if(i == -1) printf("\nConta não encontrada.\n");

    if(i >= 0){

        printf("\n----- DADOS -----\n");
        printf("Nome: %s\n", contas[i].nome);
        printf("ID: %i\n", contas[i].numero);
        printf("Saldo: R$%.2f\n", contas[i].saldo);
        printf("-----------------\n\n");
        
    }
}

int main(){

    int opcao;
    Conta contas[MAX_CONTAS];
    
  do{    
    mostrarMenu();
    scanf("%i", &opcao);
    getchar();

    switch(opcao){
        case 1:
            criarConta(contas);
            break;

        case 2:
            exibirConta(contas);
            break;

        case 3:
            depositar(contas);
            break;

        case 4:
            sacar(contas);
            break;

        case 5:
            buscarConta(contas);
            break;

        case 0:
            printf("Saindo...");
            break;
        
        default:
            printf("Opção inválida");
            break;
    }
  } while(opcao != 0);
    return 0;
}