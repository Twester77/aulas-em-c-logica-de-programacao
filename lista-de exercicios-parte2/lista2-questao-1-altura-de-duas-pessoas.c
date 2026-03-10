#include <stdio.h>

int main() {

    double i1, i2;

    printf("Digite a altura da pessoa A: ");
    scanf("%lf", &i1);

    printf("Digite a altura da pessoa B: ");
    scanf("%lf", &i2);

   
    if (i1 > i2) {
        printf("A pessoa A (%.2f) e mais alta que a pessoa B.\n", i1);
    } 
    else if (i2 > i1) {
        printf("A pessoa B (%.2f) e mais alta que a pessoa A.\n", i2);
    }
    else {
        printf("Ambas as pessoas tem a mesma altura (%.2f).\n", i1);
    }

    return 0;
}
