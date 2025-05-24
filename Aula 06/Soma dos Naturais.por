programa {

  funcao inteiro soma_naturais (inteiro numero){
    se (0 == numero){
      retorne 0
    }
    senao{
      retorne numero + soma_naturais(numero - 1)
    }
  }

  funcao inicio() {
    
    inteiro n, soma_dos_naturais

    escreva("Insira um número natural: ")
    leia(n)

    soma_dos_naturais = soma_naturais(n)
    escreva("A soma dos ", n ," primeiros números naturais é ", soma_dos_naturais)


  }
}
