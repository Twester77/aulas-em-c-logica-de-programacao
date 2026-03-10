#include <stdio.h>
int main() {

int opcao;
float N1, N2, adi, subtrair, multi, div;

printf("informe o primeiro numero:" );
scanf("%f",&N1);
printf("informe o segundo numero:" );
scanf("%f",&N2);

printf("Escolha uma opçao:\n");
printf("\n 1 - Soma \n");
printf("\n 2 - subtracao\n");
printf("\n 3 - Multi \n");
printf("\n 4 - Div \n");
printf("\nEscolha a sua opcao (1-4):\n");
scanf("%d\n",&opcao);

switch (opcao)  {
    case 1: 
    adi=N1+N2;
    printf("%f+%f=%f\n",N1,N2,adi);
    break;

    case 2:
    subtrair=N1-N2;
    printf("%f-%f=%f\n",N1,N2,subtrair);
    break;

    case 3:
    multi=N1*N2;
    printf("%f*%f=%f\n",N1,N2,multi);
    break;
  
    case 4:
    if(N1 == 0 && N2 == 0) 
        printf("O numero nao pode ser divisivel por 0"); 
        else {
        div=N1/N2;
        printf("%f/%f=%f\n", N1,N2,div);}
        break;
    case 0: {
        return 0;}
    default: 
    printf("Opcão invalida,tente novamente!\n");
}
    


}