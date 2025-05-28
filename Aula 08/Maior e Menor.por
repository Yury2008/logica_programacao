programa {
  funcao inicio() {
    
    inteiro numeros[3][3], numero, maior = 0, menor = 100000

    para (inteiro i = 0; i < 3; i++){
      para (inteiro j = 0; j < 3; j++){
        escreva("Digite o valor na posição [", i, "][", j, "]: ")
        leia(numero)
        numeros[i][j] = numero

        se (maior < numeros[i][j]){
          maior = numeros[i][j]
        }
        se (menor > numeros[i][j]){
          menor = numeros[i][j]
        }
      }
    }
    escreva("\nO maior número da matriz é: ", maior, "\n")
    escreva("O menor número da matriz é: ", menor, "\n")

  }
}
