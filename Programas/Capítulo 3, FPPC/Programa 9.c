#include <stdio.h> //Permite la inclusi�n de la biblioteca est�ndar de entrada y salida de C.

/* Serie.
El programa imprime los t�rminos y obtiene
la suma de una determinada serie.

I, SSE y CAM: Variables de Tipo Entero. */

void main (void) // Indica donde comienza la ejecuci�n. void quiere decir que la funci�n no tiene par�metros ni retorna valores.
{
    int I = 2, CAM = 1; //Se declaran las variables enteras I y CAM
    long SSE = 0; //Se declaran variables long (almacenan n�meros enteros de mayor tama�o que los tipos est�ndar), inicializada en 0.
    while (I <= 2500) //Bucle que contin�a mientras el valor de I sea menor o igual a 2500.
    {
        SSE = SSE + I; //Suma los valores y proprociona un nuevo valor a la variable.
        printf ("\t %d", I); //Imprime el valor actual de I.
        if (CAM) //Condici�n para verificar el valor de CAM.
        {
          I += 5; //Si CAM es 1, se incrementa I en 5.
          CAM--; //Luego CAM se decrementa para pasar al siguiente patr�n.
        }

        else //Si CAM es 0, se ejecuta el bloque siguiente.
        {
            I += 3; //Si CAM es 0, se incrementa I en 3.
            CAM++; //Luego CAM se incrementa para alternar al otro patr�n.
        }
    }

    printf ("\nLa Suma de la Serie es: %ld", SSE); //Al final del bucle, imprime la suma total de la serie.
}
