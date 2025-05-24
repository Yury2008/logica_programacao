programa {

  funcao vazio contagem(inteiro numeroMinimo, inteiro contadorAtual) {
    
    se (contadorAtual < numeroMinimo){
      retorne
    }

    escreva(contadorAtual, " ")
    contagem(numeroMinimo, contadorAtual - 1)

  }

  funcao inicio() {
    
    inteiro numero = 1, contador

    escreva("Informe o valor de N: ")
    leia(contador)

    escreva("Números de 1 até ", numero, " : \n")
    contagem(numero, contador)

  }
}
