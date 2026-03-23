#include <stdio.h>
#include <windows.h>

int main()
{ 
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);


    char vogal;
    
    printf("Escolha uma vogal (a, e, i, o, u):\n" );
    scanf(" %c", &vogal);
     fflush(stdout);

    
    switch (vogal)
    {
    case ('a'):
    case ('A'):
    printf ( " assíntota ");
    break;
    
    case ( 'e'):
    case ( 'E'):
    printf ( "equação ");
    break;

    case ( 'i'):
    case ( 'I'):
    printf (" incógnita ");
    break;

    case ( 'o'):
    case ( 'O'):
    printf (" obtuso ");
    break;

    case ( 'u'):
    case ( 'U'):
    printf ( " união ");
    break;

    default:
    printf("Opção inválida!");
     fflush(stdout);
    break;

    }
return 0;
}

