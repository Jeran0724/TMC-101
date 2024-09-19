#include <stdio.h>
#include <stdlib.h>

/* Index, indexador contadores emp. 1 index 0
Programa que imprime los números del 1 al 10 con su cuadrado. */

int main ()
{
    int num = 0;
    int num2 = 0;

    /* init; operación lógica; actualización
    se puede colocar i-- si estará disminuyendo o i++ si va en aumento
    \n es como un punto y aparte */
    for (int i = 9; i >=0; i--)
    {
        num = i;
        num2 = num * num;
        printf ("\nCuadrado de Num [%i] es:%i", num, num2);
    }

    printf ("\n\n------------------\n");

    int i = 0;
    while (i <=9)
    {
        num = i;
        num2 = num * num;
        printf ("\nCuadrado de Num [%i] es:%i", num, num2);

        i++;
    }

    printf ("\nFin del Programa");
    return 0;
}
