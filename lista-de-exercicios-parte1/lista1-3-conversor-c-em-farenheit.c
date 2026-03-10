#include <stdio.h>

int main ()

{ 

float C, F;

printf("Digite a temperatura em graus Celsius: ");
scanf("%f",&C);

F=(9*C+160)/5;
printf("A temperatura em graus Farenheit:%2.f", F);

return 0;

}