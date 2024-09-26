#include <stdio.h> //Permite la inclusi�n de la biblioteca est�ndar de entrada y salida de C.

/* Fibonacci.
El programa calcula y escribe los primeros 50
n�meros de Fibonacci.

I, PRI, SEG y SIG: Variables de Tipo Entero. */

void main (void) // Indica donde comienza la ejecuci�n. void quiere decir que la funci�n no tiene par�metros ni retorna valores.
{
    int I, PRI = 0, SEG = 1, SIG; //Declaraci�n de variables enteras
    printf ("\t %d \t %d", PRI, SEG); // Imprime los dos primeros n�meros de la secuencia (0 y 1).
    for (I=3; I<=50; I++) //Bucle for que comienza desde el tercer n�mero de la secuencia y contin�a hasta el 50.
    {
        SIG = PRI + SEG; //Calcula el siguiente n�mero de la secuencia sumando los dos anteriores (PRI y SEG).
        PRI = SEG; //El valor de SEG se convierte en el nuevo PRI (avanza un paso en la secuencia).
        SEG = SIG; //El valor de SIG se convierte en el nuevo SEG (avanza un paso en la secuencia).
        printf ("\t %d", SIG); //Imprime el n�mero de Fibonacci reci�n calculado (SIG).
    }
}
