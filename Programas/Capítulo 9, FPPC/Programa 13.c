#include <stdio.h>

/* Cuenta Caracteres.
El rpograma, al recibir como dato un archivo de texto
y un caracter, cuenta el número de veces que se
encuentra el caracter en el archvo. */

int cuenta (char);

void main(void)
{
    int res;
    char car;
    printf ("\nIngrese el Caracter que Se Va a Buscar en el Archivo: ");
    car = getchar();
    res = cuenta (car);
    if (res != -1)
        printf ("\n\nEl Caracter %c Se Encuentra en el Archivo %d Veces", car, res);
    else
        printf ("No Se Pudo Abrir el Archivo");
}

int cuenta (char car)
{
    int res, con = 0;
    char p;
    FILE *ar;
    if ((ar = fopen ("arc.txt", "r")) != NULL)
    {
        while (!feof(ar))
        {
            p = getc(ar);
            if (p == car)
                con++;
        }

        fclose (ar);
        res = con;
    }

    else
        res = -1;
    return res;
}

