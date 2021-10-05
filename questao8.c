#include <stdio.h>
#include <math.h>

int main() {

printf("Defina um valor para x1: ");
float x1;
scanf("%f" , &x1);

printf("Defina um valor para y1: ");
float y1;
scanf("%f" , &y1);

printf("Defina um valor para x2: ");
float x2;
scanf("%f" , &x2);

printf("Defina um valor para y2: ");
float y2;
scanf("%f" , &y2);

float d= sqrt(((x2-x1) * (x2-x1)) + ((y2-y1) * (y2-y1)));

printf("%s%f\n" , "A distancia entre os pontos eh: " , d);

  return 0;
}