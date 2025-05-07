programa {
  funcao inicio() {
    
    real p, d, pp, comissaoVista, comissaoParcela
  
    escreva("Insira o valor do produto: ")
    leia(p)

    escreva("\n")
    d = 0.9 * p
    pp = p / 3
    comissaoVista = 0.05 * d
    comissaoParcela = 0.05 * p

    escreva("Valor com 10% de desconto: R$", d, "\n")
    escreva("Valor de cada parcela (3x sem juros): R$", pp, "\n")
    escreva("Comissão do vendedor (à vista): R$", comissaoVista, "\n")
    escreva("Comissão do vendedor (parcelado): R$", comissaoParcela)
  }
}
