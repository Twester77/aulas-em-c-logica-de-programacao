#include <stdio.h>

int main() { 

char nome[50];
float P1 , P2 , P3 , P4, media;

       printf("Por favor informe o nome do docente:\n");
       scanf("%[^\n]", nome);

       printf("Ola, professor(a)\n%s\n",nome);
       


 printf("Por favor informe o nome do aluno:\n");
 scanf(" %[^\n]", nome);

 printf("digite a nota da primeira avaliacao: ");  
 scanf("%f",&P1);

 printf("digite a nota da segunda avaliacao: ");
 scanf("%f",&P2);

 printf("digite a nota da terceira avaliacao: ");
 scanf("%f",&P3);

 printf("digite a nota da quarta avaliacao: ");
 scanf("%f",&P4);

 media=( P1 + P2 + P3 + P4)/4;



if( media < 5 ) { 
printf("\nReprovado");
}

else if(media >= 5.1 && media <= 6.9) { 
printf("\nRecuperacao");
}

else if( media == 7.0 && media <= 10) {
printf("\nReprovado");
}

printf("\n------------------------------\n");
    printf("Aluno: %s\n", nome);
    printf("Media final: %.f\n", media);
    printf("------------------------------\n");

     return 0;
    
}