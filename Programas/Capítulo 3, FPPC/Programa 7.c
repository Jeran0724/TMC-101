#include <stdio.h> //Permite la inclusi�n de la biblioteca est�ndar de entrada y salida de C.

/* Lanzamineto de Martillo.
El rpograma, al recibir como dato N lanzamientos
de martillo, calcula el promedio de los lanzamientos
de la atleta cubana.

I, N: Variables de Tipo Entero.
LAN, SLA: Variables de Tipo Real. */

void main (void) // Indica donde comienza la ejecuci�n. void quiere decir que la funci�n no tiene par�metros ni retorna valores.
{
    int I, N; //Se declaran variables enteras.
    float LAN, SLA = 0; //Se declaran variables flotantes (almacenan numeros con decimales). SLA ha sido inicializada en 0.

    do //El bucle se repite mientras N no est� dentro del rango permitido, 1-11.
    {
        printf ("ingrese el N�mero de Lanzamientos:\t"); //Mensaje en pantalla solicitando al usuario informaci�n.
        scanf ("%d", &N); //Lee el valor ingresado y lo almacena en la variable.
    }

    while (N < 1 || N > 11); //El bucle se repite mientras N no est� dentro del rango permitido, 1-11.
    for (I=1; I<=N; I++) //El bucle se repite N veces, una por cada lanzamiento.
    {
        printf ("\nIngrese el Lanzamiento %d: ", I); //Mensaje en pantalla solicitando al usuario informaci�n.
        scanf ("%f", &LAN); //Lee el valor ingresado y lo almacena en la variable.
        SLA = SLA + LAN; //Suma los valores y proprociona un nuevo valor a la variable.
    }

    SLA = SLA / N; //Se divide SLA por el n�mero total de lanzamientos N.
    printf ("\nEl Promedio de Lanzamientos es: %.2f", SLA); //Una vez finalizado el bucle se muestra la suma total con dos decimales.
}
