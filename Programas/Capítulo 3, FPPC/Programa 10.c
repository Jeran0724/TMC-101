#include <stdio.h> //Permite la inclusi�n de la biblioteca est�ndar de entrada y salida de C.
#include <math.h> //Permite la inclusi�n de la biblioteca de funciones matem�ticas.

/* Pares e Impares.
El programa, al recibir como datos N n�meros enteros,
obtiene la suma de los n�meros pares y calcula el
promedio de los impares.

I, N, NUM, SPA, SIM, CIM: Variables de Tipo Entero. */

void main (void) // Indica donde comienza la ejecuci�n. void quiere decir que la funci�n no tiene par�metros ni retorna valores.
{
    int I, N, NUM, SPA = 0, SIM = 0, CIM = 0; //Declaraci�n de variables enteras.
    printf ("Ingrese el N�mero de Datos que se Van a Procesar:\t"); //Mensaje en pantalla solicitando al usuario informaci�n.
    scanf ("%d", &N); //Lee el valor ingresado y lo almacena en la variable.

    if (N > 0) //Verifica si el n�mero de datos ingresado (N) es mayor que 0.
    {
        for (I=1; I<=N; I++) //Inicia un bucle que se ejecuta N veces, comenzando en 1 y terminando en N.
        {
            printf ("\nIngrese el N�mero %d: ", I); //Solicita al usuario ingresar el n�mero actual (I-�simo).
            scanf ("%d", &NUM); //Lee el valor ingresado y lo almacena en la variable.

            if (NUM) //Verifica si el n�mero ingresado no es cero (si es diferente de 0, entra en la siguiente condici�n).
                if (pow(-1, NUM) > 0) //Esta l�nea pretende verificar si el n�mero es par usando la funci�n `pow`, pero esta l�gica es incorrecta. Aqu� se deber�a usar `NUM % 2 == 0` para saber si el n�mero es par.
                SPA = SPA + NUM; //Si el n�mero es par, se suma a la variable SPA (suma de los pares).
            else //Si el n�mero es impar:
            {
                SIM = SIM + NUM; //Se suma el n�mero a SIM (suma de los impares).
                CIM++; //Se incrementa el contador de n�meros impares (CIM).
            }
        }

        printf ("\nLa Suma de los N�meros Pares es: %d", SPA); //Imprime la suma de los n�meros pares.
        printf ("\nEl Promedio de N�meros Imapres es: %5.2f", (float)(SIM / CIM)); //Calcula y muestra el promedio de los n�meros impares. Convierte la suma de los impares (SIM) a flotante para obtener el promedio.
    }

    else //Si el valor de N es menor o igual a 0:
        printf ("\nEl Valor de N es Incorrecto"); //Muestra un mensaje de error indicando que N es inv�lido.
}
