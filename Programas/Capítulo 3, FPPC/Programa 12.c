#include <stdio.h> //Permite la inclusi�n de la biblioteca est�ndar de entrada y salida de C.
#include <math.h> //Incluye la biblioteca matem�tica.

/* Serie de ULAM.
El programa, al recibir un dato en entero positivo,
obtiene y escribe la serie de ULAM.

NUM: Variable de Tipo Entero. */

void main (void) // Indica donde comienza la ejecuci�n. void quiere decir que la funci�n no tiene par�metros ni retorna valores.
{
    int NUM; //Se declaran como variables enteras.
    printf ("Ingresa el N�mero para Calcular la Serie: "); //Mensaje en pantalla solicitando al usuario informaci�n.
    scanf ("%d", &NUM); //Lee el valor ingresado y lo almacena en la variable.

    if (NUM > 0) //Verifica que el n�mero ingresado sea positivo.
    {
        printf ("\nSerie de ULAM\n"); //Muestra un encabezado para la serie de ULAM.
        printf ("%d \t", NUM); //Imprime el n�mero inicial.

        while (NUM != 1) //Mientras el n�mero no sea 1, sigue generando la serie de ULAM.
        {
            if (pow(-1, NUM) > 0) //Comprueba si el n�mero es par.
                NUM = NUM / 2; //Si el n�mero es par se divide entre 2.
            else //Si el n�mero es impar procede lo de abajo.
                NUM = NUM * 3 + 1; //Si el n�mero es impar, se multiplica por 3 y se suma 1.
            printf ("%d \t", NUM); //Imprime el nuevo valor de NUM.
        }
    }

    else //Si no es positivo muestra lo de abajo.
        printf ("\nNum Debe de Ser un Entero Positivo"); //Muestra un mensaje de error si el n�mero ingresado no es positivo.
}
