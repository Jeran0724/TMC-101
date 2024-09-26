#include <stdio.h> //Permite la inclusi�n de la biblioteca est�ndar de entrada y salida de C.
#include <math.h> //Incluye la biblioteca matem�tica para realizar c�lculos matem�ticos avanzados.

/* Suma Cuadrados.
el Programa, al recibir como datos un grupo
de enteros positivos, obtiene el cuadrado de
los mismos y la suma correspondiente a dichos
cuadrados. */

void main (void) // Indica donde comienza la ejecuci�n. void quiere decir que la funci�n no tiene par�metros ni retorna valores.
{
    int NUM; //Declara la variable par almacenar cada n�mero entero ingresado.
    long CUA, SUC = 0; //Se declaran variables long (almacenan n�meros enteros de mayor tama�o que los tipos est�ndar). Se inicializa la variable en 0.
    printf ("\n Ingrese un N�mero Entero -0 para terminar-:\t"); //Mensaje en pantalla solicitando al usuario informaci�n. Se utiliza 0 para terminar.
    scanf ("%d", &NUM); //Lee el valor ingresado y lo almacena en la variable.

    while (NUM) //Inicia un bucle que se ejecutar� mientras NUM no sea 0.
    {
        CUA = pow (NUM, 2); //pow() calcula el n�mero ingresado en NUM (en este caso elevado a la 2) y es almacenado en la variable CUA.
        printf ("%d AL Cubo es %ld", NUM, CUA); //Muestra el n�mero inbgresado y su cuadrado.
        SUC = SUC + CUA; //Suma el valor de CUA a la variable SUC.
        printf ("\nIngrese un N�mero Entero -0 para terminar-:\t"); //Mensaje en pantalla solicitando al usuario informaci�n o 0 para finalizar el proceso.
        scanf ("%d", &NUM); //Lee el valor ingresado y lo almacena en la variable. Si es 0 el bucle se detendr�.
    }

    printf ("\nLa Suma de los Cuadrados es %ld", SUC); //Una vez finalizado el bucle se muestra la suma total de los cuadrados calculados.
}
