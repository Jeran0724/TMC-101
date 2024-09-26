#include <stdio.h> //Permite la inclusión de la biblioteca estándar de entrada y salida de C.

/* Factorial.
El programa calcula el factorial de un número entero.

FAC, I, NUM: Variables de Tipo Entero. */

void main (void) // Indica donde comienza la ejecución. void quiere decir que la función no tiene parámetros ni retorna valores.
{
    int I, NUM; //Se declaran como variables enteras.
    long FAC; //Se declaran variables long (almacenan números enteros de mayor tamaño que los tipos estándar).
    printf ("\nIngrese el Número: "); //Mensaje en pantalla solicitando al usuario información.
    scanf ("%d", &NUM); //Lee el valor ingresado y lo almacena en la variable.

    if (NUM >= 0) //Verifica si el número ingresado es mayor o igual a 0 para calcular el factorial.
    {
        FAC = 1; //Inicializa FAC en 1, ya que el factorial de 0 es 1.
        for (I=1; I <= NUM; I++) //Bucle que calcula el factorial multiplicando FAC por I, de 1 a NUM.
            FAC *= I; //Multiplica el valor de FAC por I y es almacenado en la variable.
        printf ("\El Factorial de %d es: %ld", NUM, FAC); //Mensaje en pantalla mostrando al usuario el factorial del numero ingresado.
    }

    else //Si el número ingresado es negativo se muestra un error.
        printf ("\nError en el Dato Ingresado"); //Mensaje de error si el número es negativo.
}
