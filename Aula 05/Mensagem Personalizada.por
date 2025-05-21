programa {
  
  funcao mensagemPersonalizada (cadeia nome, inteiro idade){
    escreva("Olá, ", nome, ", você tem ", idade, " anos. Seja bem-vindo(a)!")
  }
  funcao inicio() {
    
    cadeia nome
    inteiro idade

    escreva("Digite o seu nome: ")
    leia(nome)
    escreva("Digite a sua idade: ")
    leia(idade)

    cadeia mensagem = mensagemPersonalizada(nome, idade)
    escreva(mensagem)

  }
}
