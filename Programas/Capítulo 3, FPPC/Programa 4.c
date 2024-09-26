#include <stdio.h> //Permite la inclusión de la biblioteca estándar de entrada y salida de C.
#include <math.h> //Incluye la biblioteca matemática para realizar cálculos matemáticos avanzados.

/* Suma Cuadrados.
el Programa, al recibir como datos un grupo
de enteros positivos, obtiene el cuadrado de
los mismos y la suma correspondiente a dichos
cuadrados. */

void main (void) // Indica donde comienza la ejecución. void quiere decir que la función no tiene parámetros ni retorna valores.
{
    int NUM; //Declara la variable par almacenar cada número entero ingresado.
    long CUA, SUC = 0; //Se declaran variables long (almacenan números enteros de mayor tamaño que los tipos estándar). Se inicializa la variable en 0.
    printf ("\n Ingrese un Número Entero -0 para terminar-:\t"); //Mensaje en pantalla solicitando al usuario información. Se utiliza 0 para terminar.
    scanf ("%d", &NUM); //Lee el valor ingresado y lo almacena en la variable.

    while (NUM) //Inicia un bucle que se ejecutará mientras NUM no sea 0.
    {
        CUA = pow (NUM, 2); //pow() calcula el número ingresado en NUM (en este caso elevado a la 2) y es almacenado en la variable CUA.
        printf ("%d AL Cubo es %ld", NUM, CUA); //Muestra el número inbgresado y su cuadrado.
        SUC = SUC + CUA; //Suma el valor de CUA a la variable SUC.
        printf ("\nIngrese un Número Entero -0 para terminar-:\t"); //Mensaje en pantalla solicitando al usuario información o 0 para finalizar el proceso.
        scanf ("%d", &NUM); //Lee el valor ingresado y lo almacena en la variable. Si es 0 el bucle se detendrá.
    }

    printf ("\nLa Suma de los Cuadrados es %ld", SUC); //Una vez finalizado el bucle se muestra la suma total de los cuadrados calculados.
}
