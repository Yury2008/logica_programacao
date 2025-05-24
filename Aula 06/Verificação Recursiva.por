programa {
  inteiro pares_cont = 0
  inteiro impares_cont = 0
  inteiro positivos_cont = 0
  inteiro negativos_cont = 0

  funcao vazio verificar_numeros_recursivamente() {
    inteiro numero_digitado

    escreva("Digite um número (0 para terminar): ")
    leia(numero_digitado)

    se (numero_digitado == 0) {
      retorne
    }

    se (numero_digitado % 2 == 0) {
      pares_cont = pares_cont + 1
    } senao {
      impares_cont = impares_cont + 1
    }

    se (numero_digitado > 0) {
      positivos_cont = positivos_cont + 1
    } senao se (numero_digitado < 0) {
      negativos_cont = negativos_cont + 1
    }

    verificar_numeros_recursivamente()
  }

  funcao inicio() {
    pares_cont = 0
    impares_cont = 0
    positivos_cont = 0
    negativos_cont = 0

    verificar_numeros_recursivamente()

    escreva("Quantidade de pares: ", pares_cont, "\n")
    escreva("Quantidade de ímpares: ", impares_cont, "\n")
    escreva("Quantidade de positivos: ", positivos_cont, "\n")
    escreva("Quantidade de negativos: ", negativos_cont, "\n")
  }
}