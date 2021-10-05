#include <stdio.h>

int main()  {

printf("Defina um numero inteiro : ");
int num;
scanf("%d" , &num);

char ASCII= num;

printf("%s%d%s%c%s\n" , "O numero " , num , " equivale ao caractere " , ASCII , " na tabela ASCII ");

  return 0;
}