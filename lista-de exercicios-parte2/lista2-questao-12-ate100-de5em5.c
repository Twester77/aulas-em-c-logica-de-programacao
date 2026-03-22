#include <stdio.h>
#include <locale.h>


int main () {
setlocale(LC_ALL, "");

int i = 0, R;

printf ("------ Lista de números de 0 a 100 ------ \n");

for ( i = 0 ; i <= 20 ; i++ ) {
R = i * 5;
printf ("%d\n", R );
}
return 0;

}