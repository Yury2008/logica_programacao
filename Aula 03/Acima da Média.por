programa {
  funcao inicio() {
    real n1, n2, n3, media, contador = 0

    escreva("Digite a primeira nota: ")
    leia(n1)

    escreva("Digite a segunda nota: ")
    leia(n2)

    escreva("Digite a terceira nota: ")
    leia(n3)

    media = (n1 + n2 + n3) / 3

    se (n1 >= 7){
      contador++
    }
    se (n2 >= 7){
      contador++
    }
    se (n3 >= 7){
      contador++
    }

    escreva("Sua média foi: ", media)
    escreva("As notas estão acima da média: ", contador)
  }
}
