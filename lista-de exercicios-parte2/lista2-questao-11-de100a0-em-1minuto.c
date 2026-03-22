#include <stdio.h>
#include <locale.h>

int main () {
setlocale(LC_ALL, "");

int  i = 100;

printf ("Lista de números de 100 a 0: \n");

for ( i = 100 ; i >= 0 ; i-- ) {
printf ("%d\n", i);
}

return 0;
} 