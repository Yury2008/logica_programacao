programa {
  funcao inicio() {
    
    inteiro anoatual, ano, idade

    escreva("Digite o ano atual: ")
    leia(anoatual)

    escreva("Digite o ano que você nasceu: ")
    leia(ano)

    idade = anoatual - ano

    se (idade>=18){
      escreva("Você completa ", idade, " anos em 2025 e poderá tirar a sua habilitação.")
    }
    senao{
      escreva("Você completa ", idade, " anos em 2025 e não poderá tirar sua habilitação.")
    }
  }
}
