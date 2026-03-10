#include <stdio.h>
int main() {

    int idade1, idade2;
printf("digite a idade primeira pessoa: ");  
scanf("%d", &idade1);

printf("digite a idade da segunda pessoa: ");
scanf("%d", &idade2);

if (idade1>idade2){
printf("Maior idade;%d/n", idade1);
printf("Menor idade;%d/n", idade2);
} else if (idade2 > idade1) {
printf("Maior idade;%d/n", idade2);
printf("Menor idade;%d/n", idade1);
}
else {
    printf("Ambas as pessoas tem a mesma idade: %d/n", idade1);
    }
     return 0;
    
}