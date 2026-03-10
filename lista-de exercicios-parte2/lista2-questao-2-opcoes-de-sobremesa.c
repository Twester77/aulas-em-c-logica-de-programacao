#include<stdio.h>

int main () {

    int opcao;

printf("Bem vindo ao Menu de Baixomesas da Aquiles! Escolha sua opcao:\n");
printf("\n 1 - Pudim\n");
printf("\n 2 - Brigadeiro\n");
printf("\n 3 - Pave\n");
printf("\n 4 - Pacume\n");
printf("\nEscolha a sua opcao (1-4):\n");
scanf(" %d",&opcao);

switch (opcao)  {

    default: 
    printf("Opcao invalida,tente novamente!\n");
    return 0;

    case 1: 
    printf ("O pudim tem 220 kcal, bom apetite!");
    break;

    case 2:
    printf ("Brigadeiro tem 70 kcal, bom apetite!");
    break;

    case 3:
    printf ("O Pave tem 0 kcal, pode comer sem dó!");
    break;
  
    case 4:
    printf ("O Pacume tem 180 kcal, bom apetite!");
        break;

}

return 0;
}