#include <stdio.h>

int main() { 

 float peso , altura , IMC;


printf("digite o seu peso: ");  
scanf("%f",&peso);

printf("digite a sua altura: ");
scanf("%f",&altura);
IMC=peso/(altura*altura);
printf("O Indice de Massa corporal: %f\n", IMC);


if(IMC>40.0) { 
printf("Obesidade grave,pode enterrar que ja morreu por dentro ");
}

else if(IMC >= 30 && IMC <= 39.9) { 
printf("Obesidade grau 1 ou grau 2 ");
}

else if(IMC >= 25 && IMC <= 29.9) {
printf("Esta em sobrepeso ");
}

else if( IMC >= 18.5 && IMC <= 24.9) { 
printf("Peso normal ");
}

else if(IMC < 18.5) { 
printf("Baixo peso, provavelmente ja virou morcego ou foi jogar no Vasco ");
}

     return 0;
    
}