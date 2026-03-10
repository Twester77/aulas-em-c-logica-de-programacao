  #include <stdio.h>

int main () {

int opcao, basica, complexa, I1, I2;

double  N1 , N2;


printf ("\n ------------ Bem vindo a sua calculadora interativa! ------------ \n");
printf ("Escolha uma operacao abaixo: (1-2)");
printf ("\n 1. Operacoes basicas\n");
printf ("\n 1. Operacoes Complexas\n");
printf (" Escolha (1-2): ");
scanf("%d",&opcao);
 

switch (opcao)

{  

case 1:


printf("Insira um numero a sua escolha:\n ");
scanf("%lf",&N1);
printf("Insira um segundo numero:\n ");
scanf("%lf",&N2);
printf("Escolha uma opcao abaixo:\n");
printf ("Escolha uma operacao abaixo: (1-4)");
printf ("\n 1. Adicao\n 2. Subtracao\n 3. Multiplicacao\n 4. Divisao\n");
printf ("Escolha (1-4): ");
scanf("%d",&basica);



switch (basica)

{

case 1:
printf("%lf + %lf = %lf\n", N1, N2, N1 + N2);
break;

case 2:
printf("%lf - %lf = %lf\n", N1, N2, N1 - N2);
break;

case 3:
printf("%lf * %lf = %lf\n", N1, N2, N1 * N2);
break;

case 4:
if ( N1 == 0 || N2 == 0 )
    printf( "o numero nao pode ser divisivel por 0" );
else
    printf("%lf / %lf = %lf\n", N1, N2, N1 / N2);
break;


case 0: 


default:
printf ("informacao invalida!");

}

break;


case 2:

printf("Insira um numero inteiro a sua escolha:\n ");
scanf("%d",&I1);
printf("Insira um segundo numero inteiro:\n ");
scanf("%d",&I2);
printf("Escolha uma opcao abaixo:\n");
printf ("Escolha uma operacao abaixo: (1-4)");
printf ("\n 1. Modulo ( Resto da Divisao)\n 2. Soma dos quadrados dos numeros\n 3. Incremento\n4. Decremento\n");
printf ("Escolha (1-4): ");
scanf ("%d",&complexa);


switch (complexa)
{

    case 1:
    printf("%d %% %d = %d\n", I1, I2, I1 % I2);
    break;

    case 2:
    printf("(%d * %d) + (%d * %d)= %d\n", I1, I2, (I1*I1) + (I2*I2));
    break;

    case 3:
    printf("%d + 1= %d || %d + 1 = %d\n", I1, I2, I1 + 1, I2 + 1);
    break;

    case 4:
    printf("%d - 1 = %d || %d - 1 = %d\n", I1, I2, I1 - 1, I2 - 1);
    break;

    case 0: 
    default:
   printf("informacao invalida!");
break;

}
// fecha o case 2


case 0: // não escolheu nenhuma das opçoes do switch

default:

printf ("informacao invalida, tente novaamente!");
return 0;
break; 

// fecha o primeiro switch
}

return 0;
// fecha main

}
