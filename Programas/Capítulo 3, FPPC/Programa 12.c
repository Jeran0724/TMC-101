#include <stdio.h> //Permite la inclusión de la biblioteca estándar de entrada y salida de C.
#include <math.h> //Incluye la biblioteca matemática.

/* Serie de ULAM.
El programa, al recibir un dato en entero positivo,
obtiene y escribe la serie de ULAM.

NUM: Variable de Tipo Entero. */

void main (void) // Indica donde comienza la ejecución. void quiere decir que la función no tiene parámetros ni retorna valores.
{
    int NUM; //Se declaran como variables enteras.
    printf ("Ingresa el Número para Calcular la Serie: "); //Mensaje en pantalla solicitando al usuario información.
    scanf ("%d", &NUM); //Lee el valor ingresado y lo almacena en la variable.

    if (NUM > 0) //Verifica que el número ingresado sea positivo.
    {
        printf ("\nSerie de ULAM\n"); //Muestra un encabezado para la serie de ULAM.
        printf ("%d \t", NUM); //Imprime el número inicial.

        while (NUM != 1) //Mientras el número no sea 1, sigue generando la serie de ULAM.
        {
            if (pow(-1, NUM) > 0) //Comprueba si el número es par.
                NUM = NUM / 2; //Si el número es par se divide entre 2.
            else //Si el número es impar procede lo de abajo.
                NUM = NUM * 3 + 1; //Si el número es impar, se multiplica por 3 y se suma 1.
            printf ("%d \t", NUM); //Imprime el nuevo valor de NUM.
        }
    }

    else //Si no es positivo muestra lo de abajo.
        printf ("\nNum Debe de Ser un Entero Positivo"); //Muestra un mensaje de error si el número ingresado no es positivo.
}
