#include <stdio.h>

int main() {

printf("Informe o valor de compra do veiculo: ");
float valor_de_compra;
scanf("%f" , &valor_de_compra);
  
printf("Informe o ano de fabricacao do veiculo: ");
float ano_de_fabricacao;
scanf("%f" , &ano_de_fabricacao);
  
printf("Informe o ano de depreciacao do veiculo: ");
float ano_de_depreciacao;
scanf("%f" , &ano_de_depreciacao);

float valor_depreciado= (ano_de_depreciacao - ano_de_fabricacao) * 0.01 *
 valor_de_compra;

 printf("%s%f\n" , "O valor de depreciado do veiculo foi: R$" , valor_depreciado);
  
  return 0;
}