programa {
  funcao inicio() {
    
    inteiro numeros[3][3], numeroEscolhido, verificacao = 0

    para(inteiro i = 0; i < 3; i++){
      para(inteiro j = 0; j < 3; j++){
         escreva("Digite o valor na posição [", i, "][", j, "]: ")
         leia(numeros[i][j])
      }
    }

    escreva("Digite o número escolhido: ")
    leia(numeroEscolhido)

    para(inteiro i = 0; i < 3; i++){
      para(inteiro j = 0; j < 3; j++){
        se(numeroEscolhido == numeros[i][j]){
          escreva("Linha ", i, ", Coluna ", j, "\n")
          verificacao++
        }
      }
    }

    se (verificacao == 0){
      escreva ("Não apareceu nada")
    }
  }
}
