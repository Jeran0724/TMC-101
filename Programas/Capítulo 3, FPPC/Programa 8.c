#include <stdio.h> //Permite la inclusi�n de la biblioteca est�ndar de entrada y salida de C.

/* Factorial.
El programa calcula el factorial de un n�mero entero.

FAC, I, NUM: Variables de Tipo Entero. */

void main (void) // Indica donde comienza la ejecuci�n. void quiere decir que la funci�n no tiene par�metros ni retorna valores.
{
    int I, NUM; //Se declaran como variables enteras.
    long FAC; //Se declaran variables long (almacenan n�meros enteros de mayor tama�o que los tipos est�ndar).
    printf ("\nIngrese el N�mero: "); //Mensaje en pantalla solicitando al usuario informaci�n.
    scanf ("%d", &NUM); //Lee el valor ingresado y lo almacena en la variable.

    if (NUM >= 0) //Verifica si el n�mero ingresado es mayor o igual a 0 para calcular el factorial.
    {
        FAC = 1; //Inicializa FAC en 1, ya que el factorial de 0 es 1.
        for (I=1; I <= NUM; I++) //Bucle que calcula el factorial multiplicando FAC por I, de 1 a NUM.
            FAC *= I; //Multiplica el valor de FAC por I y es almacenado en la variable.
        printf ("\El Factorial de %d es: %ld", NUM, FAC); //Mensaje en pantalla mostrando al usuario el factorial del numero ingresado.
    }

    else //Si el n�mero ingresado es negativo se muestra un error.
        printf ("\nError en el Dato Ingresado"); //Mensaje de error si el n�mero es negativo.
}
