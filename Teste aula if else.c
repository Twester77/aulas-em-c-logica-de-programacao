#include <stdio.h>

int main() 
{
    float P1,P2,P3,P4, media;

    printf("insira a nota da primeira prova:");
    scanf("%f" , &P1);
    printf("insira a nota da segunda prova:");
    scanf("%f" , &P2);
    printf("insira a nota da terceira prova:");
    scanf("%f" , &P3);
    printf("insira a nota da quarta prova:");
    scanf("%f" , &P4);
  media=(P1+P2+P3+P4)/4;
  printf("A media e:%.2f\n",media);

    if( media >= 7)
     {     
    printf("O aluno foi aprovado"); }
     
    else {
    printf("O aluno esta reprovado"); }

 return 0;
    }

