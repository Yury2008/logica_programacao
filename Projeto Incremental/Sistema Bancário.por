programa {
  inclua biblioteca Util --> u
  funcao inicio() {
    
    inteiro opcao

    enquanto (verdadeiro){
      escreva("===== SISTEMA BANCÁRIO =====\n 0 - Sair\n 1 - Criar Conta\n 2 - Exibir Contas\n 3 - Depositar\n 4 - Sacar\n 5 - Buscar Conta\n ===========================\n\n")
      
      escreva("Escolha a opção: ")
      leia(opcao)

      se (opcao == 0) {
        escreva("Saindo do sistema...\n\n")
        pare
      }

      escolha(opcao){
        caso 1:
          escreva("Opção Criar Conta selecionada.\n\n")
          pare

        caso 2:
          escreva("Opção Exibir Contas selecionada.\n\n")
          pare

        caso 3:
          escreva("Opção Depositar selecionada.\n\n")
          pare

        caso 4:
          escreva("Opção Sacar selecionada.\n\n")
          pare

        caso 5:
          escreva("Opção Buscar Conta selecionada.\n\n")
          pare

        caso contrario:
          escreva("Opção inválida. Tente novamente.\n\n")
          pare
      }
      u.aguarde(2000)
      limpa()
    }

  }
}
