programa {
  funcao inicio() {
    
    real n

    escreva("Insira o valor de substâncias de pH. \n")
    
    enquanto (verdadeiro){
       leia(n)

       se (n == -1){
        escreva("Programa encerrando.")
        pare
       }

       senao se (n < -1 ou n > 14){
        escreva("pH inválido.\n")
       }
       senao se (n < 7){
        escreva("Substância Ácida.\n")
       }
       senao se (n == 7){
        escreva("Substância Neutra.\n")
       }
       senao{
        escreva("Substância Básica.")
        pare
       }

    }
  }
}
