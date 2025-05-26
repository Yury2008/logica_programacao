programa {
  funcao inicio() {
    
    inteiro valores[10], maior = 0, menor = 100000

    para(inteiro i = 0; i < 10; i++){

      escreva("Escreva o ", i+1, "° valor: ")
      leia(valores[i])

      se (maior < valores[i]){
        maior = valores[i]
      }
      se (menor > valores[i]){
        menor = valores[i]
      }
    }
    

    escreva("O maior valor foi: ", maior, "\n")
    escreva("O menor valor foi: ", menor, "\n")

  }
}
