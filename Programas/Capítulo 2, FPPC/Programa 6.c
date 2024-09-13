#include <stdio.h>

/* Incremento de Salario.
El programa, al recibir como dato el nivel de un
profesor, incrementa si salario en función de la
tabla 2.3.

NIV: Variables de Tipo Entero.
SAL: Variables de Tipo Real. */

void main (void)
{
    float SAL;
    int NIV;
    printf ("Ingrese el Nivel Académico del Profesor: ");

    scanf("%d", &NIV);
    printf ("Ingrese el Salario: ");

    scanf ("%f", &SAL);
    switch (NIV)
    printf ("Ingresa el Salario: ");

    scanf ("%f", &SAL);
    switch (NIV)
    {
        case 1: SAL = SAL * 1.0035; break;
        case 2: SAL = SAL * 1.0041; break;
        case 3: SAL = SAL * 1.0048; break;
        case 4: SAL = SAL * 1.0053; break;
    }

    pritnf ("\n\nNivel de %d \tNuevo Salario:  %8.2f", NIV, SAL);
}
