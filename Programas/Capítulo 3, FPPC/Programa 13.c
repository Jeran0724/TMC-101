#include <stdio.h> //Permite la inclusión de la biblioteca estándar de entrada y salida de C.

/* Fibonacci.
El programa calcula y escribe los primeros 50
números de Fibonacci.

I, PRI, SEG y SIG: Variables de Tipo Entero. */

void main (void) // Indica donde comienza la ejecución. void quiere decir que la función no tiene parámetros ni retorna valores.
{
    int I, PRI = 0, SEG = 1, SIG; //Declaración de variables enteras
    printf ("\t %d \t %d", PRI, SEG); // Imprime los dos primeros números de la secuencia (0 y 1).
    for (I=3; I<=50; I++) //Bucle for que comienza desde el tercer número de la secuencia y continúa hasta el 50.
    {
        SIG = PRI + SEG; //Calcula el siguiente número de la secuencia sumando los dos anteriores (PRI y SEG).
        PRI = SEG; //El valor de SEG se convierte en el nuevo PRI (avanza un paso en la secuencia).
        SEG = SIG; //El valor de SIG se convierte en el nuevo SEG (avanza un paso en la secuencia).
        printf ("\t %d", SIG); //Imprime el número de Fibonacci recién calculado (SIG).
    }
}
