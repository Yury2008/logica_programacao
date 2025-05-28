programa {
  funcao inicio() {
    inteiro numeros[3][3], numero

    para (inteiro i = 0; i < 3; i++){
      para (inteiro j = 0; j < 3; j++){
        escreva("Digite o valor na posição [", i, "][", j, "]: ")
        leia(numero)
        numeros[i][j] = numero

      }
    }
 
    para (inteiro i = 0; i < 3; i++){
      inteiro somaLinha = 0
      para(inteiro j = 0; j > 3; j++){
        somaLinha += numeros[i][j]
      }
      escreva("\nA soma da linha ", i, ": ", somaLinha)
    }
    para (inteiro j = 0; j < 3; j++){
      inteiro somaColuna = 0
      para (inteiro i = 0; i < 2; i++){
        somaColuna += numeros[i][j]
      }
      escreva("\nA soma da linha ", j, ": ", somaColuna)
    }
  }
}
