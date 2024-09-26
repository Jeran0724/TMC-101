#include <stdio.h> //Permite la inclusi�n de la biblioteca est�ndar de entrada y salida de C.

/* Suma Pagos.
El programa, al recibir como datos un conjunto
de pagos realizados en el �ltimo mes, obtiene
la suma de los mismos.

PAG y SPA: Variables de Tipo Real. */

void main (void) // Indica donde comienza la ejecuci�n. void quiere decir que la funci�n no tiene par�metros ni retorna valores.
{
    float PAG, SPA; //Se declaran variables flotantes (almacenan numeros con decimales).
    SPA = 0; //Se inicializa la variable en 0.
    printf ("Ingrese el Primer Pago: \t"); //Mensaje en pantalla solicitando al usuario informaci�n.
    scanf ("%f", &PAG); //Lee el valor ingresado y lo almacena en la variable.

    while (PAG) //Bucle es ejecutado mientras PAG sea distinto a cero.
    {
        SPA = SPA + PAG; //Se suman las variables.
        printf ("Ingrese el Siguiente Pago:\t "); //Mensaje en pantalla solicitando al usuario informaci�n.
        scanf ("%f", &PAG); //Lee el valor ingresado y lo almacena en la variable.
    }

    printf ("\nEl Total de Pagos del Mes es: %.2f", SPA); //Una vez finalizado el buclem se muestra la suma total con dos decimales.
}
