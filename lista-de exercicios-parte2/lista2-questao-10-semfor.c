#include <stdio.h>
#include <locale.h>
#include <windows.h>
int main()
{ 
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    long int  I1, I2, I3, I4, I5;
    char nome1[31], nome2[31], nome3[31], nome4[31], nome5[31];

printf (" Por favor informe o nome da primeira pessoa (até 30 caracteres):\n");
scanf (" %30[^\n]", nome1);
printf ("\nQual a data de nascimento dessa pessoa?(AAAAMMDD, escreva o numero por extenso e sem espaço)\n");
scanf ("%ld", &I1);

printf ("\nPor favor informe o nome da segunda pessoa (até 30 caracteres):\n");
scanf (" %30[^\n]", nome2);
printf ("\nQual a data de nascimento dessa pessoa?(AAAAMMDD, escreva o numero por extenso e sem espaço)\n");
scanf ("%ld", &I2);

printf ("\n Por favor informe o nome da terceira pessoa (até 30 caracteres):\n");
scanf (" %30[^\n]", nome3);
printf ("\nQual a data de nascimento dessa pessoa?(AAAAMMDD, escreva o numero por extenso e sem espaço)\n");
scanf ("%ld", &I3);

printf ("\nPor favor informe o nome da quarta pessoa (até 30 caracteres):\n");
scanf (" %30[^\n]", nome4);
printf ("\nQual a data de nascimento dessa pessoa?(AAAAMMDD, escreva o numero por extenso e sem espaço)\n");
scanf ("%ld", &I4);

printf ("\nPor favor informe o nome da quinta pessoa (até 30 caracteres):\n");
scanf (" %30[^\n]", nome5);
printf ("\nQual a data de nascimento dessa pessoa?(AAAAMMDD, escreva o numero por extenso e sem espaço)\n");
scanf ("%ld", &I5);


if (I1 > I2 && I1 > I3 && I1 > I4 && I1 > I5) { printf("%s é a pessoa mais nova\n", nome1); }
else if (I2 > I1 && I2 > I3 && I2 > I4 && I2 > I5) { printf("%s é a pessoa mais nova\n", nome2); }
else if (I3 > I1 && I3 > I2 && I3 > I4 && I3 > I5) { printf("%s é a pessoa mais nova\n", nome3);}
else if (I4 > I1 && I4 > I2 && I4 > I3 && I4 > I5) { printf("%s é a pessoa mais nova\n", nome4);}
else { printf ("%s é a pessoa mais nova\n", nome5);} 

if (I1 < I2 && I1 < I3 && I1 < I4 && I1 < I5) { printf("%s é a pessoa mais velha\n", nome1); }
else if (I2 < I1 && I2 < I3 && I2 < I4 && I2 < I5) { printf("%s é a pessoa mais velha\n", nome2);}
else if (I3 < I1 && I3 < I2 && I3 < I4 && I3 < I5) { printf("%s é a pessoa mais velha\n", nome3);} 
else if (I4 < I1 && I4 < I2 && I4 < I3 && I4 < I5) { printf("%s é a  pessoa mais velha\n", nome4);}
else { printf ("%s é a pessoa mais velha\n", nome5);}

  
return 0;

 }