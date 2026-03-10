#include <stdio.h>

int main() { 
    float dias, diaria = 0, VT, vpar;
    int npar;

    printf("Digite o numero de dias (3, 5 ou 10): "); 
    scanf("%f", &dias);

    
    if(dias == 3) { 
        diaria = 80;

    } else if(dias == 5) {
        diaria = 100;

    } else if(dias == 10) {
        diaria = 150;
        
    } else {
        printf("Opcao de dias invalida!\n");
        return 1; 
    }

    VT = diaria * dias;

    printf("Em quantas parcelas deseja dividir? ");
    scanf("%d", &npar);

    vpar = VT / npar;

    printf("\nResumo da Reserva:\n");
    printf("Valor da Diaria: R$ %f\n", diaria);
    printf("Valor Total: R$ %f\n", VT);
    printf("Parcelamento: %d x R$ %f\n", npar, vpar);
    printf("-----------------------------------\n");

    return 0;
}
