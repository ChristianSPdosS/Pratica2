#include <stdio.h>

int main() {

printf("Informe o valor da hora de trabalho: ");
float valor_da_hora_de_trabalho;
scanf("%f" , &valor_da_hora_de_trabalho);

printf("Informe o total de horas trabalhadas no mes: ");
float total_de_horas_trabalhadas_no_mes;
scanf("%f" , &total_de_horas_trabalhadas_no_mes);

float salario_bruto = valor_da_hora_de_trabalho * total_de_horas_trabalhadas_no_mes;

float IR = salario_bruto *  0.25;
float INSS= salario_bruto * 0.11;
float impostos= IR + INSS;
float salario_liquido= salario_bruto - impostos;

printf("%s%f\n" , "O salario bruto eh: R$" ,  salario_bruto);
printf("%s%f\n" , "O salario liquido eh: R$" , salario_liquido);
printf("%s%f\n" , "O valor do IR descontado eh: R$" , IR);
printf("%s%f\n" , "O valor do INSS descontado eh: R$" , INSS);
printf("%s%f\n" , "O valor total dos impostos descontados eh: R$" , impostos);

  return 0;
}









