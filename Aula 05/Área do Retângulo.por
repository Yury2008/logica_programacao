programa {
  
  funcao real calcularAreaRetangulo(real base, real altura){
    retorne base * altura
  }
  
  funcao inicio() {

    real base, altura, calcularAreaRetangulo
    
    escreva("Insira a medida da base: ")
    leia(base)
    escreva("Insira a medida da altura: ")
    leia(altura)

    real resultado = calcularAreaRetangulo(base, altura)

    escreva("A área do retângulo: ", resultado)


  }
}
