#include <stdio.h>

int main() 

{ 

  int N1 , N2 , N3 , P;

   printf("Informe um numero ");
   scanf("%d",&N1);
   
   printf("Informe um segundo numero ");
   scanf("%d",&N2);

   printf("Informe um terceiro numero ");
   scanf("%d",&N3);

if(N1 > N2) {  
    P = N1; N1 = N2; N2 = P; } 

if(N1 > N3) { 
    P = N1; N1 = N3; N3 = P; }

if(N2 > N3) { 
    P = N2; N2 = N3; N3 = P; }

printf("Lista de numeros em sequencia:%d,%d,%d ",N1,N2,N3);
    return 0;

}
