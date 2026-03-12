#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main()
{ 
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int   i, MV=0, MN=999, idade, posN=0, posV=0; 
    char nome [30];




for ( i = 1 ; i <=5 ; i++ ) {

    printf (" Por favor informe o nome da pessoa (até 30 caracteres):\n");
    scanf ("%s", nome );
    printf ("Por favor informe a idade dessa pessoa:\n");
    scanf("%d", &idade);



if (idade > MV) {
    MV = idade ; 
    posV = i; }   

if (idade < MN) {
    MN = idade;
    posN = i; }
} 

printf ("\n---------Resultado Final:---------\n");

 printf("\n A pessoa mais velha é a %dª pessoa com %d anos\n", posV, MV); 
 printf("\n A pessoa mais nova é a %dª pessoa com %d anos\n", posN, MN);
 printf("\n---------Fim do programa!----------\n");

return 0;

}