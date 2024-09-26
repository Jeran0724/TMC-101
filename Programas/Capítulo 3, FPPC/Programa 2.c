#include <stdio.h> //Permite la inclusi�n de la biblioteca est�ndar de entrada y salida de C.

/* Suma de Positivos.
El programa, al recibir como datos N n�meros
enteros, obtiene la suma de los enteros positivos.

I, N, NUM, SUM: Variables de Tipo Entero. */

void main (void) // Indica donde comienza la ejecuci�n. void quiere decir que la funci�n no tiene par�metros ni retorna valores.
{
    int I, N, NUM, SUM; //Declara las variables de tipo entero.
    SUM = 0; //Inicializa la variable en 0.
    printf ("Ingrese el N�mero de Datos: \t"); //Mensaje en pantalla solicitando al usuario informaci�n.
    scanf ("%d", &N); //Lee el valor ingresado y lo almacena en la variable.

    for (I=1; I<=N; I++) //Bucle for que se ejecuta N veces, donde I comienza en 1 y aumenta hasta que I sea igual a N.
    {
        printf ("Ingrese el Dato N�mero $d:\t", I); //Mensaje solicitando el n�mero I.
        scanf ("%d", &NUM); //Lee el valor ingresado y lo almacena en la variable.
        if (NUM > 0) //Comprueba si el n�mero ingresado en NUM es positivo.
            SUM = SUM + NUM; //Si es positivo, se a�ade a la variable SUM.
    }

    printf ("\nLa Suma de los N�mero Positivos es: %d", SUM); //Imprime la suma total de los n�meros positivos ingresados.
}
