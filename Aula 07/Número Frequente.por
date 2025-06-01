programa {

  funcao inteiro numerosFrequencia(){
    inteiro numeros[10], frequencia[10] = {0,0,0,0,0,0,0,0,0,0}, maisFrequente = 0

    para (inteiro i = 0; i < 10; i++){
      
      escreva("Insira o ", i + 1, "º número: ")
      leia(numeros[i])
      se(numeros[i] > 0 e numeros[i] < 10){
        frequencia[numeros[i]] += 1
      }

    }
    para(inteiro i = 0; i < 10; i++){
      se (frequencia[i] > maisFrequente){
        maisFrequente = i
      }
    }
    escreva("O número que mais se repete é ", maisFrequente)
    
    retorne 0
  }

  funcao inicio() {
    numerosFrequencia()
  }
}
