#include <stdio.h>

int main () {

printf("Defina um valor para x1: ");
int x1;
scanf("%d" , &x1);

printf("Defina um valor para x2: ");
int x2;
scanf("%d" , &x2);

int quociente= (x1 / x2);
int resto= (x1 % x2);

printf("%s%d\n" , "O valor do quociente eh: " , quociente);
printf("%s%d\n" , "O valor do resto eh: " , resto);

  return 0;
}