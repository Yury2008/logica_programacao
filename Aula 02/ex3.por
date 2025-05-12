programa {
  funcao inicio() {
    
    cadeia nome
    real peso, altura, imc

    escreva("Nome: ")
    leia(nome)
    escreva("Peso: ")
    leia(peso)
    escreva("Altura: ")
    leia(altura)

    imc = peso / (altura * altura)

    escreva(nome, ", seu IMC é ", imc)

  }
}
