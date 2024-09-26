#include <stdio.h> //Permite la inclusi�n de la biblioteca est�ndar de entrada y salida de C.

/* Examen de Admisi�n.
El programa, al recibir como datos una serie de
calificaciones de un examen, obtiene el rango en
que se encuentran estas.

R1, R2, R3, R4 Y R5:: Variables de Tipo Entero.
CAL: Variable de Tipo Real */

void main (void) // Indica donde comienza la ejecuci�n. void quiere decir que la funci�n no tiene par�metros ni retorna valores.
{
    int R1 = 0, R2 = 0, R3 = 0, R4 = 0, R5 = 0; //Se declaran e inicializan contadores para cada rango de calificaciones.
    float CAL; //Se declara la variable flotante CAL para almacenar las calificaciones ingresadas.
    printf ("Ingresa la Calificaci�n del Alumno: "); //Mensaje en pantalla solicitando al usuario informaci�n.
    scanf ("%f", &CAL); //Lee el valor ingresado y lo almacena en la variable.

    while (CAL != -1) //El bucle contin�a ejecut�ndose mientras CAL sea diferente de -1.
    {
        if (CAL < 4) //Si CAL es menor que 4, incrementa el contador R1.
            R1++; //Contador
        else //Si CAL es <6
            if (CAL < 6) //Si CAL es entre 4 y menor que 6, incrementa R2.
            R2++; //Contador
        else //Si CAL es <8
            if (CAL < 8) //Si CAL es entre 6 y menor que 8, incrementa R3.
            R3++; //Contador
        else //Si CAL es <9
            if (CAL < 9) //Si CAL es entre 8 y menor que 9, incrementa R4.
            R4++; //Contador
        else //Si CAL es 9 o m�s, incrementa R5.
            R5++; //Contador

        printf ("Ingresa la Calificaci�n del Alumno: "); //Mensaje en pantalla solicitando al usuario informaci�n.
        scanf ("%f", &CAL); //Lee el valor ingresado y lo almacena en la variable.
    }

    printf ("\n0..3.99 = %d", R1); //Imprime el n�mero de calificaciones en el rango 0 a 3.99.
    printf ("\n4..5.99 = %d", R2); //Imprime el n�mero de calificaciones en el rango 4 a 5.99.
    printf ("\n6..7.99 = %d", R3); //Imprime el n�mero de calificaciones en el rango 6 a 7.99.
    printf ("\n8..8.99 = %d", R4); //Imprime el n�mero de calificaciones en el rango 8 a 8.99.
    printf ("\n9..10 = %d", R5); //Imprime el n�mero de calificaciones en el rango 9 a 10.
}
