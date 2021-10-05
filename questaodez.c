#include <stdio.h>

int main() {

printf("Defina um numero inteiro: ");
int num;
scanf("%d" , &num);

int x0= num * 0;
int x1= num * 1;
int x2= num * 2;
int x3= num * 3;
int x4= num * 4;
int x5= num * 5;
int x6= num * 6;
int x7= num * 7;
int x8= num * 8;
int x9= num * 9;
int x10= num * 10;

printf("%s%d%s\n" , "A tabuada do " , num , " eh:");
printf("%d%s%d\n" , num  , " * 0 =" , x0);
printf("%d%s%d\n" , num  , " * 1 =" , x1);
printf("%d%s%d\n" , num  , " * 2 =" , x2);
printf("%d%s%d\n" , num  , " * 3 =" , x3);
printf("%d%s%d\n" , num  , " * 4 =" , x4);
printf("%d%s%d\n" , num  , " * 5 =" , x5);
printf("%d%s%d\n" , num  , " * 6 =" , x6);
printf("%d%s%d\n" , num  , " * 7 =" , x7);
printf("%d%s%d\n" , num  , " * 8 =" , x8);
printf("%d%s%d\n" , num  , " * 9 =" , x9);
printf("%d%s%d\n" , num  , " * 10 =" , x10);

  return 0;
}