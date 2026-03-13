#include <stdio.h>

 int main()
{ 
 double soma = 0, N;
 int i;

printf("Vamos fazer uma soma com 3 numeros:\n");

for (i = 1; i <= 3; i ++) {
printf("Informe o numero:\n", i);
scanf ("%lf",&N);
soma = soma + N;
}

printf(" A soma total e: %.2lf\n", soma );
printf("\n---------Fim do Programa!----------\n");


    return 0;
}