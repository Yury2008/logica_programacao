programa {

  funcao vazio contagem(inteiro numeroMaximo, inteiro contadorAtual) {
    
    se (contadorAtual > numeroMaximo){
      retorne
    }

    escreva(contadorAtual, " ")
    contagem(numeroMaximo, contadorAtual + 1)

  }

  funcao inicio() {
    
    inteiro numero, contador = 1

    escreva("Informe o valor de N: ")
    leia(numero)

    escreva("Números de 1 até ", numero, " : \n")
    contagem(numero, contador)

  }
}
