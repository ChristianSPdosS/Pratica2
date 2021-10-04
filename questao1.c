#include <stdio.h>

int main() {

printf("Defina um valor para x1: ");
float x1; 
scanf("%f" , &x1);


printf("Defina um valor para x2: ");
float x2; 
scanf("%f" , &x2);


printf("Defina um valor para x3: ");
float x3; 
scanf("%f" , &x3);


float media= (x1 + x2 + x3)/3;

printf("%s%f\n" , "O valor da media aritimetica eh: " , media);


  return 0;
}