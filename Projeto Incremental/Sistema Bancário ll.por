programa {
  inclua biblioteca Util --> u
  funcao mostrarMenu(){
    escreva("==== Menu ====\n")
    escreva("1 - Criar Conta\n")
    escreva("2 - Exibir Contas\n")
    escreva("3 - Depositar\n")
    escreva("4 - Sacar\n")
    escreva("5 - Buscar Conta\n")
    escreva("==============\n")
    escreva("Escolha a Opção: ")
  }
  funcao criarConta(){
     escreva("Opção Criar Conta selecionada.")
  }
  funcao exibirConta(){
    escreva("Opção Exibir Conta selecionada")
  }
  funcao depositar(){
    escreva("Opção Depositar selecionada.")
  }
  funcao sacar(){
    escreva("Opção Sacar selecionada.")
  }
  funcao buscarConta(){
    escreva("Opção Buscar Conta selecionada.")
  }
  funcao inicio() {
    
    inteiro opcoes

    mostrarMenu()
    leia(opcoes)

    escolha(opcoes){
      caso 1:
      criarConta()
      pare

      caso 2:
      exibirConta()
      pare

      caso 3:
      depositar()
      pare

      caso 4:
      sacar()
      pare

      caso 5:
      buscarConta()
      pare

      caso contrario:
      escreva("Opção inválida. Tente novamente.")
      pare

    }
      u.aguarde(3000)
      limpa()
  }
}
