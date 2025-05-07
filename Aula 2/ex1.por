programa {
  funcao inicio() {
    
    inteiro idade
    real altura
    cadeia nome
    caracter genero
    logico estudante

    escreva ("Qual seu nome? \n")
    leia (nome)

    escreva ("Qual é a sua idade? \n")
    leia (idade)

    escreva ("Qual a sua altura? \n")
    leia (altura)

    escreva ("Qual seu gênero? \n")
    leia (genero)

    escreva ("É estudante? ")
    leia (estudante)

    escreva("\n")

    escreva("Bem-vindo(a),", nome, "!\n")
    escreva("Seu perfil: \n")
    escreva("Nome: ", nome, "\n")
    escreva("Idade: ", idade, "\n")
    escreva("Altura: ", altura, "\n")
    escreva("Gênero: ", genero, "\n")
    escreva("Estudante: ", estudante)
  }
}
