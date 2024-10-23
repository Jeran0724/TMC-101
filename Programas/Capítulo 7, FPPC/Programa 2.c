#include <stdio.h>
#include <ctype.h>

/* Funciones para el Manejo de Caracteres de la Biblioteca ctype.h */

void main (void)
{
    char p1;
    printf ("\nIngrese un Caracter para Analizar si este es un Dígito: ");
    p1 = getchar();

    if (isdigit (p1))
        printf ("%c es un Dígito \n", p1);

    else
        printf ("%c No es un Dígito \n", p1);

    fflush (stdin);

    printf ("\nIngrese un Caracter para Examinar si este es una Letra: ");
    p1 = getchar();

    if (isalpha (p1))
        printf ("%c es una Letra \n", p1);

    else
        printf ("%c No es una Letra \n", p1);

    fflush (stdin);

    printf ("\nIngrese un Caracter para Examinar si este es una Letra Minúscula: ");
    p1 = getchar();

    if (isalpha (p1))
        if (islower (p1))
        printf ("%c es una Letra Minúscula \n", p1);

    else
        printf ("%c No es una Letra Minúscula \n", p1);
        else
            printf ("%c No es una Letra \n", p1);

    fflush (stdin);

    printf ("\nIngrese una Letra para Convertirla de Mayúscula a Minúscula: ");
    p1 = getchar();

    if (isalpha (p1))
        if (isupper (p1))
        printf ("%c fue Convertida de Mayúscula a Minúscula \n", tolower(p1));

    else
        printf ("%c Es una Letra Minúscula \n", p1);
        else
            printf ("%c No es una Letra \n", p1);
}
