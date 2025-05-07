programa {
  funcao inicio() {
    
    cadeia nome
    real nota1, nota2, media

    escreva("Insira o seu nome: ")
    leia(nome)

    escreva("Insira a sua primeira nota: ")
    leia(nota1)

    escreva("Insira a sua segunda nota: ")
    leia(nota2)

    media = (nota1 + nota2) / 2

    escreva("O aluno ", nome, " obteve a média final ", media)
  }
}
