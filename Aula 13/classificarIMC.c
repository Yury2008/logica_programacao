#include <stdio.h>
#include <math.h>

char* classificarIMC(float peso, float altura)
{
  float imc = peso / (pow(altura, 2));

  if(imc < 18.5)
  {
    return "Abaixo do peso";
  }
  
  else if(imc >= 18.5 && imc <= 24.9)
  {
    return "Peso normal";
  }

  else if(imc >= 25 && imc <= 29.9)
  {
    return "Sobrepeso";
  }

  else if(imc >= 30 && imc <= 34.9)
  {
    return "Obesidade 1";
  }

  else if(imc >= 35 && imc <= 39.9)
  {
    return "Obesidade 2";
  }

  else
  {
    return "Obesidade 3";
  }
}

int main()
{
  float peso, altura;

  printf("Insira seu peso em kg: ");
  scanf("%f", &peso);

  printf("Insira a sua altura em metros: ");
  scanf("%f", &altura);

  char* resultado = classificarIMC(peso,  altura);

  printf("\nSClassificação: %s\n", resultado);
  
  return 0;
}