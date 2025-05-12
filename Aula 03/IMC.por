programa {
  funcao inicio() {
    
    inteiro peso
    real altura, imc 

    escreva ("Insira o seu peso: ")
    leia(peso)

    escreva("Insira a sua altura em metros: ")
    leia(altura)

    imc = peso / (altura * altura)

    se (imc < 18.5){
      escreva ("Abaixo do Peso")
    }
    senao se (imc >= 18.5 e imc <= 24.9){
      escreva ("Peso normal")
    }
    senao se (imc >= 25 e imc <= 29.9){
      escreva ("Sobrepeso")
    }
    senao se (imc >= 30 e imc <= 34.9){
      escreva ("Obesidade 1")
    }
    senao se (imc >= 35 e imc <= 39.9){
      escreva ("Obesidade 2")
    }
    senao{
      escreva ("Obesidade 3")
    }
  }
}
