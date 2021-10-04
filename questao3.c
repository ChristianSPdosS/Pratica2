#include <stdio.h>

int main() {

printf("Defina um valor em graus Celsius: ");
float celsius;
scanf("%f" , &celsius);

float fahrenheit= ((celsius * 9) / 5) + 32;

printf("%s%f\n" , "O valor em graus Fahrenheit eh: " , fahrenheit);

  return 0;
}