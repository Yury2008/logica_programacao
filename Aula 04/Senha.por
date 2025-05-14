programa {
  funcao inicio() {
    
    inteiro senha

    faca{
      escreva("Insira a senha: ")
      leia(senha)

      se (senha != 1234){
        escreva("Senha incorreta. Tente novamente\n")
      }
      
    } enquanto (senha != 1234)
    escreva("Acesso liberado.")
  }
}
