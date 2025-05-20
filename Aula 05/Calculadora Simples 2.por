programa {
  funcao inteiro somar (inteiro a, inteiro b){
    retorne a + b
  }
  funcao inteiro subtrair (inteiro a, inteiro b){
    retorne a - b
  }
  funcao inteiro multiplicar (inteiro a, inteiro b){
    retorne a * b
  }
  funcao inteiro dividir (inteiro a, inteiro b){
    retorne a / b
  }
  funcao inicio() {

    inteiro a, b, operacao

  
    escreva ("Digite o primeiro número: ")
    leia (a)

    escreva("Digite o segundo número: ")
    leia (b)
  
    escreva ("Escolha a operação:\n")
    escreva ("1 - Soma\n")
    escreva ("2 - Subtração\n")
    escreva ("3 - Multiplicação\n")
    escreva ("4 - Divisão\n")
    escreva ("Opção: ")
    leia (operacao)

    inteiro soma = somar (a, b)
    inteiro subtracao = subtrair (a, b)
    inteiro multiplicacao = multiplicar (a, b)
    inteiro divisao = dividir (a, b)

    se (operacao == 1){
      escreva("Resultado da soma: ",soma)
    }
    senao se (operacao == 2){
      escreva("Resultado da subtração: ",subtracao)
    }
    senao se (operacao == 3){
      escreva("Resultado da multiplicação: ",multiplicacao)
    }
    senao se (operacao == 4){
      escreva("Resultado da divisão: ",divisao)
    }
    senao{
      escreva("Operação inválida")
    }
    }
  }