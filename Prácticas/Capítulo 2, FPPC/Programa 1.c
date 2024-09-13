#include <stdio.h>

/* Promedio curso.
El rpograma, al recibir como dato el promedio de
un alumno en un curso universitario, escribe
aprobado si su promedio es mayor o igual a 6.

PRO: Variable de Tipo Real. */

void main (void)
{
    float PRO;
    printf ("Ingrese el Promedio del Alumno: ");
    scanf ("%f", &PRO);

    if (PRO >=6)
    printf ("\nAprobado");
}
