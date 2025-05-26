programa {
  funcao inicio() {
    
    real media, somaNotas = 0, acimaMedia = 0, notas[10]

    para(inteiro i = 0; i < 10; i++){

      escreva("Escreva a nota do ", i + 1,"° aluno: ")
      leia(notas[i])

      somaNotas += notas[i]
    }
    media = somaNotas / 10
    escreva("Média das notas ", media, "\n")

    para(inteiro i = 0 ; i < 10; i++){
      se (notas[i] > media){
        acimaMedia++
      }
    } 
    escreva("Notas acima da média: ", acimaMedia, "\n")
    
    para(inteiro i = 0; i < 10; i++){
      se (notas[i] > media){
        escreva("- ", notas[i], "\n")
      }
    }
  }
}