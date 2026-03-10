#include <stdio.h>

int main() {

    int N1, N2;
printf("digite o primeiro numero: ");  
scanf("%d", &N1);

printf("digite o segundo numero: ");
scanf("%d", &N2);

if (N1>N2){
printf("O primeiro numero e maior;%d\n", N1);
} 
else if (N2 > N1) {
printf("O segundo numero e maior;%d\n", N2);
}

else {
    printf("Os dois numeros sao iguais:%d\n", N1);
    }
     return 0;
    
}