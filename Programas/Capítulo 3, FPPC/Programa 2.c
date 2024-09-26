#include <stdio.h> //Permite la inclusión de la biblioteca estándar de entrada y salida de C.

/* Suma de Positivos.
El programa, al recibir como datos N números
enteros, obtiene la suma de los enteros positivos.

I, N, NUM, SUM: Variables de Tipo Entero. */

void main (void) // Indica donde comienza la ejecución. void quiere decir que la función no tiene parámetros ni retorna valores.
{
    int I, N, NUM, SUM; //Declara las variables de tipo entero.
    SUM = 0; //Inicializa la variable en 0.
    printf ("Ingrese el Número de Datos: \t"); //Mensaje en pantalla solicitando al usuario información.
    scanf ("%d", &N); //Lee el valor ingresado y lo almacena en la variable.

    for (I=1; I<=N; I++) //Bucle for que se ejecuta N veces, donde I comienza en 1 y aumenta hasta que I sea igual a N.
    {
        printf ("Ingrese el Dato Número $d:\t", I); //Mensaje solicitando el número I.
        scanf ("%d", &NUM); //Lee el valor ingresado y lo almacena en la variable.
        if (NUM > 0) //Comprueba si el número ingresado en NUM es positivo.
            SUM = SUM + NUM; //Si es positivo, se añade a la variable SUM.
    }

    printf ("\nLa Suma de los Número Positivos es: %d", SUM); //Imprime la suma total de los números positivos ingresados.
}
