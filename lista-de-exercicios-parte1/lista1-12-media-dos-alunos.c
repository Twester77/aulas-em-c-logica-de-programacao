#include <stdio.h>

int main() { 

char nome[50];
float P1 , P2 , media;

       printf("Ola, professor(a)!");
       

 printf("Por favor informe o nome do aluno:\n");
 scanf(" %[^\n]", nome);

 printf("digite a nota da primeira avaliacao: ");  
 scanf("%f",&P1);

 printf("digite a nota da segunda avaliacao: ");
 scanf("%f",&P2);
 media=( P1 + P2 ) / 2;



if( media < 5 ) { 
printf("Reprovado ");
}

else if(media >= 5.1 && media <= 6.9) { 
printf("Recuperacao ");
}

else if( media == 7.0 && media <= 10) {
printf("Aprovado ");
}

printf("\n------------------------------\n");
    printf("Aluno: %s\n", nome);
    printf("Media final: %.f\n", media);
    printf("------------------------------\n");

     return 0;
    
}