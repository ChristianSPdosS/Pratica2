#include <stdio.h>

int main() {

printf("Defina um valor para largura em metros: ");
float largura;
scanf("%f" , &largura);

printf("Defina um valor para o comprimento em metros: ");
float comprimento;
scanf("%f" , &comprimento);

float area_em_hectares= (largura * comprimento) / 10000;

printf("%s%f\n" , "A area do terreno em hectares eh: " , area_em_hectares );

  return 0;
}