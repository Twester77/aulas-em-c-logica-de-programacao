#include <stdio.h>

 
  int main() { 
    int P;

    printf("Informe um numero limite ");
    scanf("%d",&P);
    printf("Numeros pares entre 0 e %d:",P);


for (int i = 0; i <= P; i += 2) { 
    printf("%d\n",i);
    }
  
  
     return 0; 

  
}
