#include <stdio.h>

/* Cuenta Caracteres.
El programa, al recibir como datos una cadena de
caracteres y un caracter, cuenta cuantas veces se
encuentra el caracter en la cadena. */

int cuenta (char *, char);

void main (void)
{
    char car, cad[50];
    int res;
    printf ("\nIngrese la Cadena de Caracteres: ");
    gets(cad);
    fflush(stdin);
    printf ("\nIngrese el Caracter: ");
    car = getchar();
    res = cuenta(cad, car);
    printf ("\n\n%c se Encuentra %d Veces en la Cadena %s", car, res, cad);
}

int cuenta (char *cad, char car)
{
    int i = 0, r = 0;
    while (cad[i] !='\0')
    {
        if (cad[i] == car)
            r++;
        i++;
    }

    return (r);
}
