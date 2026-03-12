#include <stdio.h>


 int main() { 
    
 
    int  P, i, Re;

    printf(" Informe um numero de inicio:\n");
    scanf("%d",&P);
    printf( "A lista de pares e impares ate 200:\n");


for ( i = P ; i <= 200; i++) {

 if (i % 2 != 0 ) {
    Re= i + 1;
    printf ("\n --O numero %d e PAR-- \n",Re);
    }
    
else {
    Re= i + 1;
    printf ("\n --O numero %d e IMPAR-- \n",Re);
    
 }
 
}
   return 0;

}