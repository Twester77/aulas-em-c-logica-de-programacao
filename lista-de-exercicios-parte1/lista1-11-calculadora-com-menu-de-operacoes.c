#include <stdio.h>

int main() {
    int opcao;
    float N1, N2, resultado; 

    printf(" Bem-vindo(a) a Calculadora Interativa!\n");
    printf("\nEscolha uma opcao abaixo:\n");
    printf("1. Soma\n");
    printf("2. Elevar ao quadrado\n");
    printf("3. Divisao\n"); 
    printf("4. Multiplicacao\n");
    printf("Escolha (1-4): ");
    scanf("%d", &opcao);

    printf("Digite o primeiro numero: ");
    scanf("%f", &N1);
    printf("Digite o segundo numero: ");
    scanf("%f", &N2);

    printf("\nResultado\n");

    switch (opcao) {
        
       
        case 1:
            printf("%f + %2f = %f\n", N1, N2, N1 + N2);
            break;
        case 2:
            printf("%f^2 = %f\n", N1, N1 * N1);
            printf("%f^2 = %f\n", N2, N2 * N2);
            break;
        case 3:
            if (N2 == 0 || N1 == 0) {
                printf("Erro: Divisao por zero nao e permitida!\n");
            } else {
                printf("%f / %f = %f\n", N1, N2, N1 / N2);
            }
            break;
        case 4:
            printf("%f * %f = %f\n", N1, N2, N1 * N2);
            break;
         default:
            printf("Opcao invalida!\n"); return 0;
    } 

    return 0;
}

