#include <stdio.h>

/* Archivos con Variables Enteras y Reales.
El programa lee datos de almnos almacenados
en un archivo y escribe la matrícula y el
promedio de cada alunmo. */

void main (void)
{
    int i, j, n, mat;
    float cal, pro;
    FILE *ar;

    if ((ar = fopen ("arc9.txt", "r")) != NULL)
    {
        fscanf (ar, "%d", &n);

        for (i=0; i<n; i++)
        {
            fscanf (ar, "%d", &mat);
            printf ("%d\t", mat);
            pro = 0;
            for (j=0; j<5; j++)
            {
                fscanf (ar, "%f", &cal);
                pro += cal;
            }

            printf ("\t %.2f  ", pro / 5);
            printf ("\n");
        }

        fclose(ar);
    }

    else
        printf ("No se Puede Abrir el Archivo");
}
