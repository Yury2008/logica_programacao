programa {
  funcao inicio() {
    
    cadeia nome
    real nota1, nota2, media
    inteiro faltas

    escreva ("Insira o seu nome: ")
    leia (nome)
    escreva ("Digite a sua primeira nota: ")
    leia (nota1)
    escreva ("Digite a sua segunda nota: ")
    leia (nota2)
    escreva ("Digite a quantidade de faltas: ")
    leia (faltas)

    media = calcularMedia(nota1, nota2)
    exibirResultado(nome, nota1, nota2, media, faltas)
  }
  
    funcao real calcularMedia(real n1, real n2) {
    retorne (n1 + n2) / 2
}
    funcao exibirResultado(cadeia nome, real n1, real n2, real media, inteiro faltas) {
    escreva("\n--- Resultado ---\n")
    escreva("Aluno: ", nome, "\n")
    escreva("Nota 1: ", n1, "\n")
    escreva("Nota 2: ", n2, "\n")
    escreva("Média: ", media, "\n")
    escreva("Faltas: ", faltas, "\n")
  
    se (media > 10 ou 0 > media ou faltas > 20){
      escreva("IMPOSSÍVEL")
    }
    senao se (media >= 9.5 e faltas <= 10) {
      escreva("Situação: APROVADO COM LOUVOR!\n")
    } 
    senao se (media >= 7 e faltas <= 10){
      escreva("Situação: APROVADO!\n")
    }
    senao{
      escreva("Situação: REPROVADO!\n")
    }
  }
}
