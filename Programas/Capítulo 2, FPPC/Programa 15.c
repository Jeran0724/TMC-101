#include <stdio.h>

/* Spa.
El programa, al recibir como datos el tipo de
tratamiento, la edad y el n�mero de d�as de
internaci�n de un cliente en un spa, calcula
el costo total del tratamiento.

TRA, EDA, DIA: Variables de Tipo Entero.
COS: Variable de Tipo Real. */

void main (void)
{
    int TRA, EDA, DIA;
    float COS;
    printf ("Ingrese tipo de Tratamiento, Edad y D�as: ");
    scanf ("%d %d %d", &TRA, &EDA, &DIA);

    switch (TRA)
    {
        case 1: COS = DIA * 2800; break;
        case 2: COS = DIA * 1950; break;
        case 3: COS = DIA * 2500; break;
        case 4: COS = DIA * 1150; break;
        default: COS = -1; break;
    }

    if (COS != -1)
    {
        if (EDA >=60)
            COS = COS * 0.75;
        else
            if (EDA <= 25)
            COS = COS * 0.85;
        printf ("\nClave Tratamiento: %d\t D�as: %d\t Costo Total: %8.2f", TRA, DIA, COS);
    }

    else
        printf ("\nLa cLave del Tratamiento es Incorrecta");
}
