#include <stdio.h>

void main (void)
{
    int min, max = 0;
    float galon = 0;
    float monto = 0;
    float consumokm = 0.08;

    printf ("\nIngrese el Monto del Galon: $", galon);
    scanf ("%f", &galon);
    printf ("\nIngrese el Minimo de Kilometros: ", min);
    scanf ("%d", &min);
    printf ("\nIngrese el Maximo de Kilometros: ", max);
    scanf ("%d", &max);

    if (min<=0, max<=0)
    {
        printf ("\nLos Kilometros Ingresados No Son Validos\n");
        return 0;
    }

    if (galon<=0)
    {
        printf ("\nEl Monto Ingresado No Es Valido\n");
        return 0;
    }

    for (int I=min; I<=max; I++)
    {
        printf ("\n\n\tL/100 Km \tPrecio por Litro\n");
        monto = I * consumokm * (galon / 3.785411784);
        printf("\n\t%d\t\t%.2f\n", I, monto);
    }

    printf ("\n\n\tGracias Por Usar Nuestro Servicio\n");
    return 0;
}
