#include <stdio.h> //Permite la inclusi�n de la biblioteca est�ndar de entrada y salida de C.

/* Calificaciones.
El programa, al recibir un grupo de calificaciones
de un alumno, obtiene el promedio de calificaciones
de cada uno de ellos y, adem�s, los alumnos con el
mejor y peor promedio.

I, MAT, MAMAT y MEMAT: Variables de Tipo Entero.
CAL, SUM, MAPRO, MEPRO y PRO: Variables de Tipo Real. */

void main (void) // Indica donde comienza la ejecuci�n. void quiere decir que la funci�n no tiene par�metros ni retorna valores.
{
    int I, MAT, MAMAT, MEMAT; //Declaraci�n de variables enteras.
    float SUM, PRO, CAL, MAPRO = 0.0, MEPRO = 11.0; //Declaraci�n de variables reales.
    printf ("Ingrese la Matr�cula del Primer Alumno:\t"); //Solicita la matr�cula del primer alumno.
    scanf ("%d", &MAT); //Lee la matr�cula ingresada por el usuario.

    while (MAT) //Mientras MAT sea diferente de 0, continua solicitando calificaciones.
    {
        SUM = 0; //Reinicia la suma para el nuevo alumno.
        for (I=1; I<=5; I++) //Bucle para ingresar 5 calificaciones.
        {
            printf ("\tIngrese la Calificaci�n del Alumno: ", I); //Solicita la calificaci�n del alumno.
            scanf ("%f", &CAL); //Lee la calificaci�n ingresada.
            SUM += CAL; //Acumula la calificaci�n en SUM.
        }

        PRO = SUM / 5; //Calcula el promedio dividiendo la suma de calificaciones entre 5.
        printf ("\nMatr�cula: %d\tPromedio: %5.2f", MAT, PRO); //Imprime la matr�cula y el promedio del alumno.

        if (PRO > MAPRO) //Verifica si el promedio actual es mayor que el mejor promedio encontrado.
        {
            MAPRO = PRO; //Actualiza el mejor promedio.
            MAMAT = MAT; //Actualiza la matr�cula del alumno con el mejor promedio.
        }

        if (PRO < MEPRO) //Verifica si el promedio actual es menor que el peor promedio encontrado.
        {
            MEPRO = PRO; //Actualiza el peor promedio.
            MEMAT = MAT; //Actualiza la matr�cula del alumno con el peor promedio.
        }

        printf ("\n\nIngrese la Matr�cula del Siguiente Alumno: "); //Pide la matr�cula del siguiente alumno.
        scanf ("%d", &MAT); //Lee la matr�cula ingresada.
    }

    printf ("\n\nAlumno con Mejor Promedio: \t%d\t\%5.2f", MAMAT, MAPRO); //Muestra matr�cula y promedio del mejor alumno.
    printf ("\n\nAlumno con Peor Promedio: \t%d\t\%5.2f", MEMAT, MEPRO); //Muestra matr�cula y promedio del peor alumno.
}
