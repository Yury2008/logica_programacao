programa {
  funcao inicio() {
    
    inteiro numeros[3][3], numero, soma = 0

    para (inteiro i = 0; i < 3; i++){
      para (inteiro j = 0; j < 3; j++){
        escreva("Digite o valor na posição [", i, "][", j, "]: ")
        leia(numero)
        numeros[i][j] = numero
        soma += numeros[i][j]
      }
    }
    escreva("A soma de todos os valores da matriz é: ", soma)
  }
}
