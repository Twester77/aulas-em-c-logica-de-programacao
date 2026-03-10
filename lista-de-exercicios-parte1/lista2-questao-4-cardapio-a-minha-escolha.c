#include<stdio.h>

int main () {

    int opcao;

printf("Menu de Churrascaria-Bendito Corno");
printf("\n 1 - Porção de Batatas Fritas");
printf("\n 2 - O Ultimo a Saber-(Arroz, vinagrete,Lagarto Assado)");
printf("\n 3 - O Desconfiado -(Arroz, Feijao Tropeiro, File Mignon)");
printf("\n 4 - O Bravo Mas Nem Tanto -(Arroz, Feijao Gordo, Contrafile)");
printf("\n 5 - Rei de Chifres - (Batata Dore, Salada Tabule, Feijao Fradinho, Paleta Bovina)");
printf("\n 6 - O tradicional Manso -(Arroz, Vinagrete, Acem ao molho madeira)");
printf("\nEscolha a sua opcao (1-6):\n");
scanf(" %d",&opcao);

if (scanf("%d", &opcao) != 1) {
        printf("Entrada inválida!\n");}
        return 0;

switch (opcao)  {

    case 1: 
    printf ("A porcao de batatas fritas geralmente serve duas pessoas,o valor e de R$ 31,90");
    break;

    case 2:
    printf ("O Combo: Ultimo a Saber,geralmente serve duas a tres pessoas, o valor e de R$ 89,90");
    break;

    case 3:
    printf  ("O Combo: O Desconfiado, geralmente serve de uma a duas pessoas, o valor e de R$ 99,90");
    break;
  
    case 4:
    printf  ("O Combo: O Bravo Mas Nem Tanto, geralmente serve de três a quatro pessoas ( incluindo o amante e a sogra), o valor e de R$149,99");
    break;
   
    case 5:
    printf ("O Combo: Rei de Chifres, geralmente serve de três a 5 pessoas ( sim, incluindo ex, amante e o amigo que contou)");
    break;

    case 6: 
    printf (" O Tradicional Manso, geralmente serve de uma a duas pessoas e meia ( sim,enche um anao), o valor e de R$ 69,90");
    break;

    default:
    printf("Desculpe, mas não temos esse prato, tente novamente");
}

return 0;
}