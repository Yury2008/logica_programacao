programa {
  funcao inicio() {
    
    inteiro operacao
    real n1, n2, resultado

    escreva("Insira um número: ")
    leia(n1)

    escreva("Insira outro número: ")
    leia(n2)
    
    escreva("Operações\n 1-Soma\n 2-Subtração\n 3-Multiplicação\n 4-Divisão\n")
    
    escreva("Qual operação você deseja realizar: ")
    leia(operacao)

    se (operacao == 1){
      escreva(n1 + n2)
    }
    senao se (operacao == 2){
      escreva(n1 - n2)
    }
    senao se (operacao == 3){
      escreva (n1 * n2)
    }
    senao se (operacao == 4){
      escreva(n1 / n2)
    }
    senao {
      escreva("Operação inválida")
    }
  }
}
