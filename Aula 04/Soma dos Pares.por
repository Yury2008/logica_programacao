programa {
  funcao inicio() {
    
    inteiro n, soma_pares = 0

    escreva("Insira um número: ")
    leia(n)

    para (inteiro valorInicial = 1; valorInicial <= n; valorInicial++){
      se (valorInicial % 2 == 0){
        soma_pares += valorInicial
      }
    }
    escreva("A soma dos números pares de 1 até ", n," é: ", soma_pares)
  }
}
