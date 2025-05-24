programa {
  funcao inteiro produto_recursivo(inteiro a, inteiro b) {
    se (b == 0) {
      retorne 0
    }
    senao {
      retorne a + produto_recursivo(a, b - 1)
    }
  }

  funcao inicio() {
    inteiro valor_a, valor_b
    inteiro resultado_produto

    escreva("Informe o valor de a: ")
    leia(valor_a)
    escreva("Informe o valor de b: ")
    leia(valor_b)
    
    resultado_produto = produto_recursivo(valor_a, valor_b)
    
    escreva("O produto é ", resultado_produto, "\n")
  }
}