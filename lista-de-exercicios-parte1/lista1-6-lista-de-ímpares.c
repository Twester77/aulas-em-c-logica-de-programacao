#include <stdio.h>

 
  int main() { 
    int I;

    printf("Informe um numero limite ");
    scanf("%d",&I);
    printf("Numeros impares entre 1 e &d", I);


for (int i = 1; i <= I; i += 2) { 
    printf("%d\n",i);
    }
  
  
     return 0; 

}
