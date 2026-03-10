#include <stdio.h>

int main() 

{ 

float
 A , Vol;

    printf("informe a medida da aresta ");
    scanf("%f",&A);
    
    if (A>=0)
    { 

    printf("A aresta nao pode ter valor negativo. Tente de novo\n");
    }
    Vol=A*A*A; 
    printf("O volume do cubo:%2.f",Vol);



return 0; 

}