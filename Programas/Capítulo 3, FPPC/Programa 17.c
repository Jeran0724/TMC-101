#include <stdio.h> //Permite la inclusi�n de la biblioteca est�ndar de entrada y salida de C.

/* N�meros Perfectos.
El programa, al recibir como dato un n�mero entero
positivo como l�mite, obtiene los n�meros perfectos
que hay entre 1 y ese n�mero, y adem�s imprime cu�ntos
n�meros perfectos hay en el intervalo.

I, J, NUM, SUM, C: Variables de Tipo Entero. */

void main (void) // Indica donde comienza la ejecuci�n. void quiere decir que la funci�n no tiene par�metros ni retorna valores.
{
    int I, J, NUM, SUM, C = 0; //Declaraci�n de variables enteras.
    printf ("\nIngrese el N�mero L�mite: "); //Solicita al usuario que ingrese el n�mero l�mite.
    scanf ("%d", &NUM); //Lee el n�mero l�mite desde la entrada y lo almacena en la variable NUM.

    for (I=1; I<=NUM; I++) //Bucle para revisar todos los n�meros desde 1 hasta el l�mite NUM.
    {
        SUM = 0; //Inicializa la suma de divisores en 0 para cada n�mero I.
        for (J = 1; J <= (I / 2); J++) //Revisa desde 1 hasta la mitad del n�mero I (porque ning�n divisor de I ser� mayor que I/2).
            if ((I % J) == 0) //Si J es divisor de I (el residuo de I dividido por J es 0).
            SUM += J; //Agrega J a la suma de los divisores.

        if (SUM == I) //Verifica si la suma de los divisores es igual al n�mero original.
        {
            printf ("\n%d Es un N�mero Perfecto", I); //Imprime que I es un n�mero perfecto.
            C++; //Incrementa el contador de n�meros perfectos.
        }
    }

    printf ("\nEntre 1 y %d hay %d N�meros Perfectos", NUM, C); //Imprime cu�ntos n�meros perfectos se encontraron entre 1 y el n�mero l�mite ingresado.
}
