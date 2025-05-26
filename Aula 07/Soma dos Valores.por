programa {
  funcao inicio() {
    
    real valores[10], somaValores = 0

    para(inteiro i = 0; i < 10; i++){

      escreva("Escreva o ", i+1, "° valor: ")
      leia(valores[i])

      somaValores += valores[i]
    }

    escreva("A soma dos valores é ", somaValores)

  }
}
