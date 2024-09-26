#include <stdio.h> //Permite la inclusión de la biblioteca estándar de entrada y salida de C.

/* Números Perfectos.
El programa, al recibir como dato un número entero
positivo como límite, obtiene los números perfectos
que hay entre 1 y ese número, y además imprime cuántos
números perfectos hay en el intervalo.

I, J, NUM, SUM, C: Variables de Tipo Entero. */

void main (void) // Indica donde comienza la ejecución. void quiere decir que la función no tiene parámetros ni retorna valores.
{
    int I, J, NUM, SUM, C = 0; //Declaración de variables enteras.
    printf ("\nIngrese el Número Límite: "); //Solicita al usuario que ingrese el número límite.
    scanf ("%d", &NUM); //Lee el número límite desde la entrada y lo almacena en la variable NUM.

    for (I=1; I<=NUM; I++) //Bucle para revisar todos los números desde 1 hasta el límite NUM.
    {
        SUM = 0; //Inicializa la suma de divisores en 0 para cada número I.
        for (J = 1; J <= (I / 2); J++) //Revisa desde 1 hasta la mitad del número I (porque ningún divisor de I será mayor que I/2).
            if ((I % J) == 0) //Si J es divisor de I (el residuo de I dividido por J es 0).
            SUM += J; //Agrega J a la suma de los divisores.

        if (SUM == I) //Verifica si la suma de los divisores es igual al número original.
        {
            printf ("\n%d Es un Número Perfecto", I); //Imprime que I es un número perfecto.
            C++; //Incrementa el contador de números perfectos.
        }
    }

    printf ("\nEntre 1 y %d hay %d Números Perfectos", NUM, C); //Imprime cuántos números perfectos se encontraron entre 1 y el número límite ingresado.
}
