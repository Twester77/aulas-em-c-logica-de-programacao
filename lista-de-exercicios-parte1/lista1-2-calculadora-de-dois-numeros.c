#include <stdio.h>
int main () 
{
float N1 , N2;
float adicao, subtracao, div, multi;

   printf("Digite o primeiro numero: ");
    scanf("%f",&N1);
   printf("Digite o segundo numero: ");
    scanf("%f",&N2);

       adicao=N1+N2;
       subtracao=N1-N2;
       div=N1/N2;
       multi=N1*N2;


    printf("Os resultados sao:\n");
    printf("adicao:%.f\n",adicao);
    printf("subtracao:%.f\n",subtracao);
    printf("multi:%.f\n",multi);
    printf("div:%.f\n",div);


if (N2!=0) 
{
    div=N1/N2;
    printf("div;%.f\n", div);
}

else {
    printf("div:Nao e possivel dividir por 0");
}


return 0;

}
