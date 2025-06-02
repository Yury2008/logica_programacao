#include <stdio.h>

void mostrarMenu(){
    printf("===== Menu =====\n");
    printf("1 - Criar Conta\n");
    printf("2 - Exibir Conta\n");
    printf("3 - Depositar\n");
    printf("4 - Sacar\n");
    printf("5 - Buscar Conta\n");
    printf("================\n");
    printf("Escolha a opção: ");
}

void criarConta(){
    printf("Opção Criar Conta Selecionada.\n");
}
void exibirConta(){
     printf("Opção Exibir Conta Selecionada.\n");
}
void depositar(){
     printf("Opção Depositar Selecionada.\n");
}
void sacar(){
     printf("Opção Sacar Selecionada.\n");
}
void buscarConta(){
     printf("Opção Buscar Conta Selecionada.\n");
}

int main(){

    int opcao;

    mostrarMenu();
    scanf("%i", &opcao);

    switch(opcao){
        case 1:
            criarConta();
            break;

        case 2:
            exibirConta();
            break;
        
        case 3:
            depositar();
            break;
        
        case 4:
            sacar();
            break;
        
        case 5:
            buscarConta();
            break;
        
        default:
            printf("Opção inválida");
            break;
    }
    
    return 0;
}