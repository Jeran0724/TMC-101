#include <stdio.h> //Permite la inclusión de la biblioteca estándar de entrada y salida de C.

/* Calificaciones.
El programa, al recibir un grupo de calificaciones
de un alumno, obtiene el promedio de calificaciones
de cada uno de ellos y, además, los alumnos con el
mejor y peor promedio.

I, MAT, MAMAT y MEMAT: Variables de Tipo Entero.
CAL, SUM, MAPRO, MEPRO y PRO: Variables de Tipo Real. */

void main (void) // Indica donde comienza la ejecución. void quiere decir que la función no tiene parámetros ni retorna valores.
{
    int I, MAT, MAMAT, MEMAT; //Declaración de variables enteras.
    float SUM, PRO, CAL, MAPRO = 0.0, MEPRO = 11.0; //Declaración de variables reales.
    printf ("Ingrese la Matrícula del Primer Alumno:\t"); //Solicita la matrícula del primer alumno.
    scanf ("%d", &MAT); //Lee la matrícula ingresada por el usuario.

    while (MAT) //Mientras MAT sea diferente de 0, continua solicitando calificaciones.
    {
        SUM = 0; //Reinicia la suma para el nuevo alumno.
        for (I=1; I<=5; I++) //Bucle para ingresar 5 calificaciones.
        {
            printf ("\tIngrese la Calificación del Alumno: ", I); //Solicita la calificación del alumno.
            scanf ("%f", &CAL); //Lee la calificación ingresada.
            SUM += CAL; //Acumula la calificación en SUM.
        }

        PRO = SUM / 5; //Calcula el promedio dividiendo la suma de calificaciones entre 5.
        printf ("\nMatrícula: %d\tPromedio: %5.2f", MAT, PRO); //Imprime la matrícula y el promedio del alumno.

        if (PRO > MAPRO) //Verifica si el promedio actual es mayor que el mejor promedio encontrado.
        {
            MAPRO = PRO; //Actualiza el mejor promedio.
            MAMAT = MAT; //Actualiza la matrícula del alumno con el mejor promedio.
        }

        if (PRO < MEPRO) //Verifica si el promedio actual es menor que el peor promedio encontrado.
        {
            MEPRO = PRO; //Actualiza el peor promedio.
            MEMAT = MAT; //Actualiza la matrícula del alumno con el peor promedio.
        }

        printf ("\n\nIngrese la Matrícula del Siguiente Alumno: "); //Pide la matrícula del siguiente alumno.
        scanf ("%d", &MAT); //Lee la matrícula ingresada.
    }

    printf ("\n\nAlumno con Mejor Promedio: \t%d\t\%5.2f", MAMAT, MAPRO); //Muestra matrícula y promedio del mejor alumno.
    printf ("\n\nAlumno con Peor Promedio: \t%d\t\%5.2f", MEMAT, MEPRO); //Muestra matrícula y promedio del peor alumno.
}
