#include <stdio.h>

int main() {

    int i, t1, t2, resul;  

printf ("----------Bem vindo a tabbuada interativa!----------\n");
printf (" Por favor informe o número da sua tabuada:\n");
scanf ("%d", &t1);
printf ("\nEm quantas vezes ele sera multiplicado?\n");
scanf ("%d", &t2);


for ( i = 1; i <= t2; i++) {
    resul = t1 * i ;
    printf(" A tabuada do %d e: %d * %d = %d\n", t1, t1, i, resul);
 
}

printf ("\n--------Fim do programa!---------\n");

return 0;

}