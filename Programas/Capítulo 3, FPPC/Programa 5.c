#include <stdio.h> //Permite la inclusión de la biblioteca estándar de entrada y salida de C.

/* Suma Pagos.
El programa obtiene la suma de los pagos
realizados el último mes.

PGA y SPA: Variables de Tipo Real. */

void main (void) // Indica donde comienza la ejecución. void quiere decir que la función no tiene parámetros ni retorna valores.
{
    float PAG, SPA = 0; //Se declaran variables flotantes (almacenan numeros con decimales). SPA inicializado en 0.
    printf ("Ingrese el Primer Pago:\t"); //Mensaje en pantalla solicitando al usuario información.
    scanf ("%f", &PAG); //Lee el valor ingresado y lo almacena en la variable.

    do //Comienza un bucle que pide al usuario que siga ingresando mas valores (no 0).
    {
        SPA = SPA + PAG; //Suma los valores y proprociona un nuevo valor a la variable.
        printf ("Ingrese el Siguiente Pago -0 para terminar-:\t "); //Mensaje en pantalla solicitando al usuario información o 0 para finalizar.
        scanf ("%f", &PAG); //Lee el valor ingresado y lo almacena en la variable.
    }

    while (PAG); //El bucle se repite mientras PAG no sea 0.
    printf ("\nEl Total de Pagos del Mes es: %.2f", SPA); //Una vez finalizado el bucle se muestra la suma total con dos decimales.
}
