#include <stdio.h>

/* Archvos con Variables Enteras y Reales.
El programa alamcena datos de un grupo de
alumnos en un archivo. */

void main (void)
{
    int i, j, n, mat;
    float cal;
    FILE *ar;
    printf ("\nIngrese el Numero de Alumnos: ");
    scanf ("%d", &n);

    if ((ar = fopen ("arc8.txt", "w")) != NULL)
    {
        fprintf (ar, "%d", n);

        for (i=0; i<n; i++)
        {
            printf ("\nIngrese la Matrícula del Alumno %d: ", i+1);
            scanf ("%d", &mat);
            fprintf (ar, "\n%d ", mat);
            for (j=0; j<5; j++)
            {
                printf ("\nCalificacion %d: ", j+1);
                scanf ("%f", &cal);
                fprintf (ar, "%.2f ", cal);
            }
        }

        fclose(ar);
    }

    else
        printf ("No se Puede Abrir el Archivo");
}
