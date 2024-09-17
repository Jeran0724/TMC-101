#include <stdio.h>

/* Empresa Textil.
El programa, al recibir como datos decisivos
la categoría y la antigüedad de un empleado,
determina si el mismo reúne las condiciones
establecidas por la empresa para ocupar un
nuevo cargo en una sucursal.

CLA, CAT, ANT, RES: Variables de Tipo Entero.
SAL: Variable de Tipo Real. */

void main (void)
{
    int CLA, CAT, ANT, RES;
    printf ("\nIngrese la Clave, Categoría y Antigüedad del Trabajador: ");
    scanf ("%d %d %d", &CLA, &CAT, &ANT);

    switch (CAT)
    {
        case 3:
        case 4: if (ANT >= 5)
                    RES = 1;
                else
                    RES = 0; break;

        case 2: if (ANT >= 7)
                    RES = 1;
                else
                    RES = 0; break;

        default: RES = 0; break;
    }

    if (RES)
        printf ("\nEl Trabajador con Clave %d Reúne las Condiciones para el Puesto", CLA);

    else
        printf ("\nEl Trabajador con Clave 5d No Reúne las Condiciones para el Puesto", CLA);
}
