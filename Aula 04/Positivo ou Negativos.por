programa {
  funcao inicio() {
    
    real numero, contador_positivo = 0, contador_negativo = 0

    escreva("Caso queira parar com o laço, digite 0\n")
    enquanto (verdadeiro) {

      escreva("Insira um número positivo ou negativo: ")
      leia(numero)

      se (numero > 0){
        contador_positivo++
      }
      senao se (numero < 0){
        contador_negativo++
      }
      senao{
        pare
      }
    }
    escreva("Quantidade de números positivos: ", contador_positivo, "\n")
    escreva("Quantidade de números negativos: ", contador_negativo)
  }
}
