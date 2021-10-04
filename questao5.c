#include <stdio.h>

int main() {

printf("Informe seu peso: ");
float peso;
scanf("%f" , &peso);

printf("Informe sua altura: ");
float altura;
scanf("%f" , &altura);

float imc= peso / (altura * altura);

printf("%s%f\n" , "Seu indice de massa corparal eh: " , imc);

  return 0;
}