#include <stdio.h>

int main() 

{
    int idade;

  printf("digite a sua idade:" );  
  scanf("%f", &idade);

    if( idade <= 12) {
  printf("Voce e uma criança\n" );
}

  else if( idade <= 19) {
  printf("Voce e um adolescente\n" );
}

  else if( idade <= 60) {
  printf("Voce e um adulto\n" );
}

  else if( idade > 60) { 
  printf("Voce e um idoso\n" );
}

     return 0;
    
}